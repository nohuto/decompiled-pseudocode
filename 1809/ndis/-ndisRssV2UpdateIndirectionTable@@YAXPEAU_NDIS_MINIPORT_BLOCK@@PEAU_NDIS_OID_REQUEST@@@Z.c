/*
 * XREFs of ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0080914
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 * Callees:
 *     ndisIovFindVPortByVPortIdInternal @ 0x1C00700B0 (ndisIovFindVPortByVPortIdInternal.c)
 *     WPP_SF_dddD @ 0x1C00818C4 (WPP_SF_dddD_ea_1C00818C4.c)
 *     WPP_SF_dddDL @ 0x1C0081920 (WPP_SF_dddDL.c)
 *     WPP_SF_dddd @ 0x1C0081988 (WPP_SF_dddd_ea_1C0081988.c)
 */

void __fastcall ndisRssV2UpdateIndirectionTable(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int64 a2)
{
  char *v2; // rax
  int v3; // r8d
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rbx
  __int64 *v5; // r13
  char *v6; // rdi
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 v9; // r14
  unsigned int v10; // r10d
  int v11; // r11d
  int v12; // r15d
  unsigned __int16 v13; // r12
  __int64 *VPortByVPortIdInternal; // rax
  unsigned int v15; // r10d
  char v16; // al
  int v17; // [rsp+40h] [rbp-28h]
  _BYTE v18[12]; // [rsp+44h] [rbp-24h]
  __int128 v19; // [rsp+50h] [rbp-18h]
  unsigned __int16 v21; // [rsp+B8h] [rbp+50h]
  _PROCESSOR_NUMBER v22; // [rsp+C0h] [rbp+58h]
  int v23; // [rsp+C8h] [rbp+60h]

  v2 = *(char **)(a2 + 40);
  v3 = -1;
  *(_DWORD *)&v18[8] = 0;
  v17 = -1;
  CombinedNdisRSSParameters = 0LL;
  v5 = 0LL;
  v6 = &v2[*((unsigned int *)v2 + 3)];
  *(_QWORD *)v18 = *((unsigned int *)v2 + 4);
  v7 = 0;
  v21 = 0;
  if ( *(_DWORD *)v18 )
  {
    v8 = 0;
    do
    {
      v9 = 3LL * v7;
      v10 = *(_DWORD *)&v6[24 * v7 + 4];
      v11 = *(_DWORD *)&v6[24 * v7 + 20];
      v12 = *(_DWORD *)&v6[24 * v7 + 8];
      v13 = *(_WORD *)&v6[24 * v7 + 12];
      v22 = *(_PROCESSOR_NUMBER *)&v6[24 * v7 + 14];
      v22.Reserved = 0;
      v23 = v11;
      if ( v10 != v3 )
      {
        if ( v10 )
        {
          v17 = *(_DWORD *)&v6[24 * v7 + 4];
          VPortByVPortIdInternal = ndisIovFindVPortByVPortIdInternal((__int64)a1, v10);
          *(_QWORD *)&v18[4] = VPortByVPortIdInternal;
          if ( VPortByVPortIdInternal )
          {
            CombinedNdisRSSParameters = (_NDIS_RECEIVE_SCALE_PARAMETERS *)VPortByVPortIdInternal[112];
          }
          else
          {
            if ( (unsigned __int8)byte_1C00A025A >= 2u )
            {
              WPP_SF_dddD(14LL, v13, v15, v8, v13, v12);
              v11 = v23;
            }
            CombinedNdisRSSParameters = 0LL;
          }
        }
        else
        {
          if ( !v5 )
          {
            v5 = ndisIovFindVPortByVPortIdInternal((__int64)a1, 0);
            if ( !v5 && (unsigned __int8)byte_1C00A025A >= 2u )
            {
              WPP_SF_dddD((unsigned int)(a2 + 13), a2, 0LL, v8, v13, v12);
              v11 = v23;
            }
          }
          CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        }
      }
      if ( v11 )
      {
        if ( (unsigned __int8)byte_1C00A025A >= 2u )
          WPP_SF_dddDL(17LL, a2, *(unsigned int *)&v6[8 * v9 + 4], v8, v13, v12, v11);
      }
      else
      {
        a2 = 1LL;
        v16 = v12 & 1;
        if ( CombinedNdisRSSParameters || v16 )
        {
          if ( (v12 & 2) != 0 )
          {
            CombinedNdisRSSParameters->DefaultProcessorNumber = v22;
          }
          else if ( v16 )
          {
            *((_QWORD *)&v19 + 1) = v22.Group;
            *(_QWORD *)&v19 = 1LL << v22.Number;
            if ( *(_DWORD *)&v6[8 * v9 + 4] )
            {
              if ( *(_QWORD *)&v18[4] )
                *(_OWORD *)(*(_QWORD *)&v18[4] + 664LL) = v19;
            }
            else if ( v5 )
            {
              *(_OWORD *)(v5 + 83) = v19;
            }
          }
          else if ( v13 >= (unsigned int)(CombinedNdisRSSParameters->IndirectionTableSize >> 2) )
          {
            if ( (unsigned __int8)byte_1C00A025A >= 2u )
              WPP_SF_dddd(
                v13,
                1LL,
                *(unsigned int *)&v6[8 * v9 + 4],
                v8,
                v13,
                CombinedNdisRSSParameters->IndirectionTableSize >> 2);
            *(_DWORD *)&v6[8 * v9 + 20] = -1073741811;
          }
          else
          {
            a2 = v13;
            *(_PROCESSOR_NUMBER *)((char *)&CombinedNdisRSSParameters->Header
                                 + 4 * v13
                                 + CombinedNdisRSSParameters->IndirectionTableOffset) = v22;
          }
        }
        else if ( (unsigned __int8)byte_1C00A025A >= 2u )
        {
          WPP_SF_dddDL(15LL, 1LL, *(unsigned int *)&v6[8 * v9 + 4], v8, v13, v12, 0);
        }
      }
      v3 = v17;
      v7 = ++v21;
      v8 = v21;
    }
    while ( (unsigned int)v21 < *(_DWORD *)v18 );
  }
}
