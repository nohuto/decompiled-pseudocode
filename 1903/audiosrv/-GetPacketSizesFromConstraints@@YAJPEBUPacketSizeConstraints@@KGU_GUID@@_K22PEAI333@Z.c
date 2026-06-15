/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180118CCC
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x180116E6C (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  unsigned int *v11; // r11
  unsigned int v14; // ebp
  unsigned int v15; // esi
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r15
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned __int64 v22; // r14
  unsigned int v23; // edx
  unsigned int v24; // r9d
  unsigned __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r10d
  unsigned __int64 v30; // rax
  signed int v31; // r9d
  signed int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // r10d
  unsigned int v37; // ebp
  __int64 v38; // rax
  signed int v39; // eax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned int v42; // edi
  unsigned int v43; // eax
  unsigned int v44; // r10d
  __int64 v45; // rax
  unsigned int v46; // r11d
  unsigned __int64 v47; // rax
  unsigned __int128 v48; // rtt
  unsigned __int64 v49; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v14 = 1;
  v15 = a3;
  v16 = 5000LL;
  v17 = v15;
  v18 = *v11;
  v19 = a2;
  if ( v18 > 0x1388 )
    v16 = (unsigned int)v18;
  v20 = v11[1] + 1;
  v21 = v15;
  v22 = (unsigned int)v16;
  if ( v15 >= v20 )
    v17 = v11[1] + 1;
  if ( v15 <= v20 )
    v21 = v11[1] + 1;
  v23 = v21 % v17;
  while ( 1 )
  {
    v24 = v23;
    if ( !v23 )
      break;
    v23 = v17 % v23;
    v17 = v24;
  }
  v25 = v20 * (unsigned __int64)(v15 / v17);
  if ( v25 > 0xFFFFFFFF )
  {
    v35 = 5414LL;
    goto LABEL_70;
  }
  v26 = (unsigned int)v25 / v15;
  if ( a9 )
    *a9 = (unsigned int)v25 / v15;
  v27 = 0LL;
  if ( v11[3] )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)&v11[6 * v27 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v28 )
        v28 = *(_QWORD *)&v11[6 * v27 + 6] - *(_QWORD *)a4->Data4;
      if ( !v28 )
        break;
      v27 = (unsigned int)(v27 + 1);
      if ( (unsigned int)v27 >= v11[3] )
        goto LABEL_23;
    }
    v16 = v11[6 * v27 + 9];
    if ( v22 > v16 )
      v16 = v22;
    if ( v11[6 * v27 + 8] )
      v14 = v11[6 * v27 + 8];
  }
LABEL_23:
  v29 = -1;
  v30 = v16 * v19;
  v31 = -2147024362;
  if ( is_mul_ok(v16, v19) )
  {
    if ( v30 )
    {
      v33 = (v30 - 1) / (10000000 * v15);
      v34 = v33 + 1;
      if ( v33 + 1 < v33 )
      {
        v32 = -2147024362;
      }
      else
      {
        if ( v34 <= 0xFFFFFFFF )
          v29 = v33 + 1;
        v32 = v34 > 0xFFFFFFFF ? 0x80070216 : 0;
      }
    }
    else
    {
      v29 = 0;
      v32 = 0;
    }
  }
  else
  {
    v32 = -2147024362;
  }
  if ( v32 < 0 )
  {
    v35 = 5437LL;
    goto LABEL_70;
  }
  if ( v14 <= v29 )
    v14 = v29;
  v36 = -1;
  v37 = v14 - 1 + v26 - (v14 - 1) % v26;
  v38 = 100000 * v19;
  *a10 = v37;
  if ( is_mul_ok(0x186A0uLL, v19) )
  {
    if ( !v38 )
    {
      v36 = 0;
      v39 = 0;
      goto LABEL_44;
    }
    v40 = (v38 - 1) / (unsigned __int64)(10000000 * v15);
    v41 = v40 + 1;
    if ( v40 + 1 >= v40 )
    {
      if ( v41 <= 0xFFFFFFFF )
        v36 = v40 + 1;
      v39 = v41 > 0xFFFFFFFF ? 0x80070216 : 0;
      goto LABEL_44;
    }
  }
  v39 = -2147024362;
LABEL_44:
  if ( v39 >= 0 )
  {
    if ( v36 <= v37 )
      v36 = v37;
    v42 = v36 - 1 + v26 - (v36 - 1) % v26;
    *a8 = v42;
    if ( *(_BYTE *)a1 )
    {
      v43 = v11[2];
      v44 = -1;
      if ( v43 )
        v44 = v26 * (v43 / (v26 * v15));
      v45 = 2000000 * v19;
      v46 = -1;
      if ( is_mul_ok(0x1E8480uLL, v19) )
      {
        if ( v45 )
        {
          *(_QWORD *)&v48 = v45 - 1;
          *((_QWORD *)&v48 + 1) = (0x1E8480 * (unsigned __int128)v19) >> 64;
          v47 = v48 / (10000000 * v15);
          v49 = v47 + 1;
          if ( v47 + 1 >= v47 )
          {
            if ( v49 <= 0xFFFFFFFF )
              v46 = v47 + 1;
            v31 = v49 > 0xFFFFFFFF ? 0x80070216 : 0;
          }
        }
        else
        {
          v46 = 0;
          v31 = 0;
        }
      }
      if ( v31 < 0 )
      {
        v35 = 5460LL;
        goto LABEL_70;
      }
      if ( v46 <= v37 )
        v46 = v37;
      if ( v44 >= v26 - (v46 - 1) % v26 + v46 - 1 )
        v44 = v26 - (v46 - 1) % v26 + v46 - 1;
      if ( v44 <= v42 )
        v44 = v42;
    }
    else
    {
      v44 = v36 - 1 + v26 - (v36 - 1) % v26;
    }
    *a11 = v44;
    return 0LL;
  }
  v35 = 5443LL;
LABEL_70:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
