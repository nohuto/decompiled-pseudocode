/*
 * XREFs of ndisQuerySupportedGuidToOidList @ 0x1C00CC21C
 * Callers:
 *     ndisWmiRegister @ 0x1C00CCD5C (ndisWmiRegister.c)
 * Callees:
 *     ndisQuerySetMiniportEx2 @ 0x1C00206A0 (ndisQuerySetMiniportEx2.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisWmiMapOids @ 0x1C00CC654 (ndisWmiMapOids.c)
 *     ndisQueryCustomGuids @ 0x1C00CC714 (ndisQueryCustomGuids.c)
 */

__int64 __fastcall ndisQuerySupportedGuidToOidList(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // eax
  PVOID v7; // r12
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  int v10; // r9d
  unsigned __int16 v11; // ax
  int v12; // r9d
  __int16 v13; // si
  unsigned __int16 v14; // si
  int *v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  char *PoolWithTag; // rax
  void *v19; // r14
  _DWORD *v20; // rdx
  unsigned __int16 v21; // r10
  __int64 v22; // r8
  int v23; // ecx
  unsigned __int16 v24; // ax
  int v25; // r9d
  unsigned __int16 v26; // ax
  int v27; // r9d
  unsigned __int16 v28; // r9
  _OWORD *v29; // rax
  char *v30; // rcx
  __int128 v31; // xmm1
  char *v32; // rsi
  __int64 v34; // rcx
  unsigned __int16 v35; // r15
  int v36; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v38[2]; // [rsp+50h] [rbp-B0h] BYREF
  UINT v39; // [rsp+54h] [rbp-ACh] BYREF
  UINT v40; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *Src; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[248]; // [rsp+70h] [rbp-90h] BYREF

  v40 = 0;
  P = 0LL;
  v38[0] = 0;
  Src = 0LL;
  v2 = 0LL;
  memset(v43, 0, sizeof(v43));
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x12u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  memset(v43, 0, sizeof(v43));
  *(_QWORD *)v43 = 15466902LL;
  *(_QWORD *)&v43[104] = &ndisIntReqWmi;
  *(_DWORD *)&v43[32] = 65793;
  v3 = 8LL;
  *(_DWORD *)&v43[88] |= 8u;
  *(_DWORD *)&v43[8] = 0;
  *(_QWORD *)&v43[40] = 0LL;
  *(_DWORD *)&v43[48] = 0;
  v6 = ndisQuerySetMiniportEx2(
         (_QWORD *)a1,
         v4,
         (struct _NDIS_OID_REQUEST *)v43,
         v5,
         v36,
         v37,
         0x3277444Eu,
         &P,
         &v40,
         &v39);
  v7 = P;
  v8 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 4u )
      WPP_SF_q(0x13u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1);
  }
  else
  {
    v39 >>= 2;
    v9 = ndisWmiMapOids(0, 0, (_DWORD)P, (unsigned __int16)v39, (__int64)&ndisSupportedGuids, 82);
    v11 = ndisWmiMapOids(0, v9, (_DWORD)v7, v10, (__int64)&ndisCoSupportedGuids, 16);
    v13 = ndisWmiMapOids(0, v11, (_DWORD)v7, v12, (__int64)&ndisMediaSupportedGuids, 49);
    if ( !(unsigned int)ndisQueryCustomGuids(a1, v43, &Src, v38) )
      v13 += v38[0];
    v14 = v13 + 38;
    v15 = (int *)&unk_1C01243C8;
    v16 = 82LL;
    do
    {
      v17 = *v15;
      if ( (*v15 & 0x20000000) != 0
        && ((v17 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4136))
        && ((*(_DWORD *)(a1 + 120) & 0x20000) != 0 || (v17 & 0x10000000) == 0) )
      {
        ++v14;
      }
      v15 += 7;
      --v16;
    }
    while ( v16 );
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 28LL * v14, 0x3177444Eu);
    v19 = Src;
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 28LL * v14);
      v20 = &ndisSupportedGuids;
      v21 = 0;
      v22 = 82LL;
      do
      {
        v23 = v20[6];
        if ( (v23 & 0x20000000) != 0
          && ((v23 & 0x1000000) == 0 || *(_QWORD *)(a1 + 4136))
          && ((*(_DWORD *)(a1 + 120) & 0x20000) != 0 || (v23 & 0x10000000) == 0) )
        {
          v34 = 28LL * v21;
          *(_OWORD *)&v2[v34] = *(_OWORD *)v20;
          *(_QWORD *)&v2[v34 + 16] = *((_QWORD *)v20 + 2);
          *(_DWORD *)&v2[v34 + 24] = v20[6];
          if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
            *(_DWORD *)&v2[v34 + 24] |= 0x10000000u;
          ++v21;
        }
        v20 += 7;
        --v22;
      }
      while ( v22 );
      v24 = ndisWmiMapOids((_DWORD)v2, v21, (_DWORD)v7, (unsigned __int16)v39, (__int64)&ndisSupportedGuids, 82);
      v26 = ndisWmiMapOids((_DWORD)v2, v24, (_DWORD)v7, v25, (__int64)&ndisCoSupportedGuids, 16);
      v28 = ndisWmiMapOids((_DWORD)v2, v26, (_DWORD)v7, v27, (__int64)&ndisMediaSupportedGuids, 49);
      v29 = &ndisStatusSupportedGuids;
      v30 = &v2[28 * v28];
      do
      {
        *(_OWORD *)v30 = *v29;
        *((_OWORD *)v30 + 1) = v29[1];
        *((_OWORD *)v30 + 2) = v29[2];
        *((_OWORD *)v30 + 3) = v29[3];
        *((_OWORD *)v30 + 4) = v29[4];
        *((_OWORD *)v30 + 5) = v29[5];
        *((_OWORD *)v30 + 6) = v29[6];
        v30 += 128;
        v31 = v29[7];
        v29 += 8;
        *((_OWORD *)v30 - 1) = v31;
        --v3;
      }
      while ( v3 );
      *(_OWORD *)v30 = *v29;
      *((_OWORD *)v30 + 1) = v29[1];
      *((_QWORD *)v30 + 4) = *((_QWORD *)v29 + 4);
      *(_QWORD *)(a1 + 1368) = v2;
      *(_WORD *)(a1 + 1386) = v14;
      if ( v19 )
      {
        v35 = v38[0];
        v32 = &v2[28 * (unsigned __int16)(v28 + 38)];
        memmove(v32, v19, 28LL * v38[0]);
        *(_WORD *)(a1 + 1388) = v35;
      }
      else
      {
        *(_WORD *)(a1 + 1388) = 0;
        v32 = 0LL;
      }
      *(_QWORD *)(a1 + 1376) = v32;
      v8 = 0;
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x14u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a1, v8);
  return v8;
}
