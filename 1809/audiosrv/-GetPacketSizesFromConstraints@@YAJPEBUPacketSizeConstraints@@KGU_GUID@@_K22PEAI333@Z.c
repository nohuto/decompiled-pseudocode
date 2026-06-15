/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x18010B290
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180109778 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x18010D5D4 (-ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // r14
  unsigned __int64 v12; // r10
  unsigned int v14; // esi
  unsigned int v15; // r9d
  unsigned __int64 v16; // rax
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned __int64 v21; // r12
  unsigned int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // ebx
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  unsigned int v32; // eax
  unsigned int v33; // esi
  unsigned int v34; // ecx
  const struct PacketSizeConstraints *v35; // rax
  unsigned int v36; // eax
  unsigned int v37[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int *v38; // [rsp+28h] [rbp-50h]
  const struct PacketSizeConstraints *v39; // [rsp+30h] [rbp-48h]
  unsigned int *v40; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v12 = 5000LL;
  v14 = 1;
  v15 = v11[1];
  v40 = a11;
  v38 = a10;
  v16 = *v11;
  v17 = a3;
  v39 = a1;
  v18 = a3;
  if ( v16 > 0x1388 )
    v12 = (unsigned int)v16;
  v37[0] = a2;
  v19 = v15 + 1;
  v20 = a3;
  v21 = (unsigned int)v12;
  if ( a3 >= v19 )
    v18 = v19;
  if ( a3 <= v19 )
    v20 = v19;
  v22 = v20 % v18;
  while ( 1 )
  {
    v23 = v22;
    if ( !v22 )
      break;
    v22 = v18 % v22;
    v18 = v23;
  }
  v24 = -1;
  v25 = v19 * (unsigned __int64)(v17 / v18);
  if ( v25 > 0xFFFFFFFF )
  {
    v26 = 5285LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v26,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v28 = (unsigned int)v25 / v17;
  if ( a9 )
    *a9 = (unsigned int)v25 / v17;
  v29 = 0LL;
  if ( v11[3] )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)&v11[6 * v29 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v30 )
        v30 = *(_QWORD *)&v11[6 * v29 + 6] - *(_QWORD *)a4->Data4;
      if ( !v30 )
        break;
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= v11[3] )
        goto LABEL_25;
    }
    v12 = v11[6 * v29 + 9];
    if ( v21 > v12 )
      v12 = v21;
    if ( v11[6 * v29 + 8] )
      v14 = v11[6 * v29 + 8];
  }
LABEL_25:
  v31 = v37[0];
  if ( (int)ULongLongMultDivToUlongRU(v12, v37[0], 10000000 * v17, v37) < 0 )
  {
    v26 = 5308LL;
    goto LABEL_12;
  }
  v32 = v37[0];
  if ( v14 > v37[0] )
    v32 = v14;
  v33 = v32 - 1 + v28 - (v32 - 1) % v28;
  *v38 = v33;
  if ( (int)ULongLongMultDivToUlongRU(0x186A0uLL, v31, 10000000 * v17, v37) < 0 )
  {
    v26 = 5314LL;
    goto LABEL_12;
  }
  v34 = v33;
  if ( v37[0] > v33 )
    v34 = v37[0];
  v35 = v39;
  *a8 = v28 - (v34 - 1) % v28 + v34 - 1;
  if ( *(_BYTE *)v35 )
  {
    v36 = v11[2];
    if ( v36 )
      v24 = v28 * (v36 / (v28 * v17));
    if ( (int)ULongLongMultDivToUlongRU(0x1E8480uLL, v31, 10000000 * v17, v37) < 0 )
    {
      v26 = 5331LL;
      goto LABEL_12;
    }
    if ( v37[0] > v33 )
      v33 = v37[0];
    if ( v24 >= v28 - (v33 - 1) % v28 + v33 - 1 )
      v24 = v28 - (v33 - 1) % v28 + v33 - 1;
    if ( v24 <= *a8 )
      v24 = *a8;
  }
  else
  {
    v24 = v28 - (v34 - 1) % v28 + v34 - 1;
  }
  *v40 = v24;
  return 0LL;
}
