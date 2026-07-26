/*
 * XREFs of ndisXlateAddPacketPatternToWolPatternOid @ 0x1C00E9224
 * Callers:
 *     ndisOidPreAddWakeUpPattern @ 0x1C00E6850 (ndisOidPreAddWakeUpPattern.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ??$?8U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@0@$$T@Z @ 0x1C00497BC (--$-8U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV-$unique_ptr@U.c)
 */

__int64 __fastcall ndisXlateAddPacketPatternToWolPatternOid(__int64 a1, _BYTE *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  _DWORD *v9; // r12
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int v12; // r14d
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  _DWORD *v15; // rbx
  _DWORD *v16; // r15
  _DWORD *v17; // r14
  _DWORD *v18; // rax
  int v19; // edx
  int v20; // ecx
  _QWORD *v22; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v23; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x20uLL);
  v22 = v5;
  if ( wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&v22) )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_q(0x6Bu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
    v6 = -1073741670;
    if ( !v5 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v7 = -1;
  *(_DWORD *)v5 = *(_DWORD *)(a1 + 32);
  v8 = -1;
  v5[1] = *(_QWORD *)(a1 + 40);
  *((_DWORD *)v5 + 4) = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 40);
  v10 = v9[2];
  if ( v10 < 0xFFFFFFE8 )
    v8 = v10 + 24;
  if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v10 >= 0xFFFFFFE8 ? 0xC0000095 : 0) )
  {
    v11 = v9[3];
    if ( v11 >= v8 )
    {
      v12 = v9[4];
      v13 = -1;
      if ( v11 + v12 >= v11 )
        v13 = v11 + v12;
      if ( !(unsigned int)NdisConvertNtStatusToNdisStatus(v11 + v12 < v11 ? 0xC0000095 : 0) )
      {
        if ( *(_DWORD *)(a1 + 48) >= v13 )
        {
          v14 = -1;
          if ( v10 + v12 >= v10 )
            v14 = v10 + v12;
          v6 = NdisConvertNtStatusToNdisStatus(v10 + v12 < v10 ? 0xC0000095 : 0);
          if ( !v6 )
          {
            LODWORD(v22) = 0;
            if ( v14 + 196 >= 0xC4 )
              v7 = v14 + 196;
            if ( v14 < 0xFFFFFF3C )
            {
              v18 = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x7877444Eu);
              v15 = v18;
              v17 = v18;
              if ( v18 )
              {
                memset(v18, 0, v7);
                memset(v15, 0, 0xC4uLL);
                LODWORD(v22) = v7;
                v16 = v15;
              }
              else
              {
                v16 = 0LL;
              }
            }
            else
            {
              v15 = 0LL;
              v16 = 0LL;
              v17 = 0LL;
            }
            v23 = v15;
            if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&v23) )
            {
              *v15 = 12845440;
              v15[37] = v9[1];
              v15[2] = *v9;
              v15[3] = 1;
              v15[40] = v19;
              v20 = v9[2];
              v15[41] = v20;
              v15[42] = v15[40] + v20;
              v15[43] = v9[4];
              memmove((char *)v16 + (unsigned int)v15[40], v9 + 6, (unsigned int)v9[2]);
              memmove((char *)v16 + (unsigned int)v15[42], (char *)v9 + (unsigned int)v9[3], (unsigned int)v9[4]);
              *(_DWORD *)(a1 + 48) = (_DWORD)v22;
              *(_DWORD *)(a1 + 32) = -50265846;
              *(_QWORD *)(a1 + 40) = v15;
              v5[3] = v16;
              *(_QWORD *)(a1 + 144) = v5;
              return v6;
            }
            if ( (unsigned __int8)byte_1C00A025A >= 4u )
              WPP_SF_q(0x6Cu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
            v6 = -1073741670;
            if ( v17 )
              ExFreePoolWithTag(v15, 0);
            goto LABEL_33;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 56) = v13;
        }
      }
    }
  }
  v6 = -1073676267;
LABEL_33:
  ExFreePoolWithTag(v5, 0);
LABEL_34:
  *a2 = 1;
  return v6;
}
