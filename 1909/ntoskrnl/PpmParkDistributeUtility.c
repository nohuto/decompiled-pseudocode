/*
 * XREFs of PpmParkDistributeUtility @ 0x14009D6B0
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x14009D620 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x140300880 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x140300C08 (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x140300D50 (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int16 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  unsigned __int16 v8; // r10
  unsigned __int8 v10; // di
  char v11; // bl
  char v12; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  char v21; // r12
  unsigned int v22; // edi
  unsigned int v23; // esi
  bool v24; // zf
  unsigned __int16 v25; // r13
  int v26; // r11d
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned int v31; // r10d
  unsigned int v32; // eax
  unsigned int v33; // r9d
  int v34; // r9d
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // rbx
  __int64 Prcb; // rax
  __int64 v42; // rdx
  unsigned __int8 v43; // bl
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // r9d
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // edi
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v55; // [rsp+20h] [rbp-28h]
  __int64 v56; // [rsp+28h] [rbp-20h] BYREF
  __int64 v57; // [rsp+30h] [rbp-18h]
  unsigned __int16 v58; // [rsp+38h] [rbp-10h]
  int v59; // [rsp+3Ah] [rbp-Eh]
  __int16 v60; // [rsp+3Eh] [rbp-Ah]
  __int64 v61; // [rsp+90h] [rbp+48h]
  unsigned __int16 v63; // [rsp+A0h] [rbp+58h]
  ULONG v64; // [rsp+A8h] [rbp+60h] BYREF

  v63 = a3;
  v7 = a6;
  v8 = a3;
  v58 = a3;
  v59 = 0;
  v10 = 0;
  v60 = 0;
  v11 = 0;
  v56 = 0LL;
  v12 = 0;
  a6 = (unsigned __int16)a3;
  v61 = a2 ^ a1;
  v14 = a2 ^ a1;
  v15 = a2 ^ a1;
  v16 = 0LL;
  a3 = (unsigned __int16)a3;
  while ( v15 )
  {
LABEL_3:
    a3 = v58;
    _BitScanForward64(&v17, v15);
    v57 = v15 & ~(1LL << v17);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v58 + (unsigned __int8)v17];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v18 = 0LL;
    else
      v18 = KiProcessorBlock[v64];
    if ( *(_BYTE *)(v18 + 24224) )
    {
      ++v12;
      v16 |= *(_QWORD *)(v18 + 200);
    }
    else
    {
      ++v11;
    }
    v19 = *(_DWORD *)(v18 + 24244);
    if ( PpmHeteroImplementationGeneration )
    {
      v20 = *(_DWORD *)(v18 + 24240);
      if ( v20 )
        v19 = (v20 * v19) >> 16;
    }
    v15 = v57;
    ++v10;
    v7 += v19;
  }
  while ( ++v58 < (unsigned int)(a3 + 1) )
  {
    v57 = *(_QWORD *)(8LL * v58 + 8);
    v15 = v57;
    if ( v57 )
      goto LABEL_3;
  }
  v55 = v16;
  v58 = v8;
  v57 = a2;
  v56 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v64, &v56) )
  {
    Prcb = KeGetPrcb(v64);
    v42 = (unsigned int)(*(_DWORD *)(Prcb + 24244) - *(_DWORD *)(Prcb + 24248));
    if ( PpmHeteroImplementationGeneration )
      LODWORD(v42) = PpmHeteroUtilityToNormalizedUtility(Prcb + 23808, v42);
    v7 += v42;
  }
  if ( v10 <= 1u )
    v10 = 1;
  if ( a4 >= v10 )
    a4 = v10;
  if ( a4 <= 1u )
    a4 = 1;
  v21 = a5;
  v22 = v7 / v10;
  v23 = v7 / a4;
  if ( v11 )
  {
    v24 = v12 == 0;
    v25 = v63;
    if ( !v24 )
    {
      v57 = v55;
      v58 = v63;
      v56 = 0LL;
      while ( 1 )
      {
        v43 = a4;
        if ( (unsigned int)KeEnumerateNextProcessor(&v64, &v56) )
          break;
        v44 = KeGetPrcb(v64);
        v14 ^= *(_QWORD *)(v44 + 200);
        v45 = PpmHeteroNormalizedUtilityToUtility(v44 + 23808, v23);
        v47 = v45;
        if ( v45 <= *(_DWORD *)(v46 + 436) )
        {
          if ( v21 )
          {
            v48 = *(_DWORD *)(v46 + 440);
            if ( v48 <= v47 )
              v48 = v47;
            *(_DWORD *)(v46 + 436) = v48;
          }
        }
        else
        {
          *(_DWORD *)(v46 + 436) = v45;
        }
        --a4;
        if ( !v43 )
          a4 = 0;
      }
    }
  }
  else
  {
    v25 = v63;
  }
  v26 = a6;
  v58 = v25;
  v27 = v14;
  while ( v27 )
  {
LABEL_24:
    v26 = v58;
    _BitScanForward64(&v28, v27);
    v57 = v27 & ~(1LL << v28);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v58 + (unsigned __int8)v28];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v29 = 0LL;
    else
      v29 = KiProcessorBlock[v64];
    v30 = *(_DWORD *)(v29 + 24240);
    v31 = *(_DWORD *)(v29 + 24244);
    if ( v30 )
      v32 = (v31 * v30) >> 16;
    else
      v32 = *(_DWORD *)(v29 + 24244);
    if ( v22 <= v32 )
    {
      v14 ^= *(_QWORD *)(v29 + 200);
      v33 = v23;
      if ( v30 )
      {
        if ( v30 == 0x10000 )
          v33 = (unsigned __int16)v23;
        else
          v33 = (v23 << 16) / v30;
      }
      if ( v33 <= v31 )
      {
        if ( !v21 )
          goto LABEL_29;
        v49 = *(_DWORD *)(v29 + 24248);
        v27 = v57;
        if ( v49 <= v33 )
          v49 = v33;
        *(_DWORD *)(v29 + 24244) = v49;
      }
      else
      {
        v27 = v57;
        *(_DWORD *)(v29 + 24244) = v33;
      }
    }
    else
    {
LABEL_29:
      v27 = v57;
    }
  }
  while ( ++v58 < (unsigned int)(v26 + 1) )
  {
    v57 = *(_QWORD *)(8LL * v58 + 8);
    v27 = v57;
    if ( v57 )
      goto LABEL_24;
  }
  v34 = a6;
  v58 = v25;
  v56 = 0LL;
  while ( v14 )
  {
LABEL_38:
    v34 = v58;
    _BitScanForward64(&v35, v14);
    v57 = v14 & ~(1LL << v35);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v58 + (unsigned __int8)v35];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v36 = 0LL;
    else
      v36 = KiProcessorBlock[v64];
    v37 = *(_DWORD *)(v36 + 24240);
    v38 = v22;
    if ( v37 )
    {
      if ( v37 == 0x10000 )
        v38 = (unsigned __int16)v22;
      else
        v38 = (v22 << 16) / v37;
    }
    v14 = v57;
    *(_DWORD *)(v36 + 24244) = v38;
  }
  while ( 1 )
  {
    LOWORD(v39) = ++v58;
    if ( v58 >= (unsigned int)(v34 + 1) )
      break;
    v57 = *(_QWORD *)(8LL * v58 + 8);
    v14 = v57;
    if ( v57 )
      goto LABEL_38;
  }
  v40 = a7;
  if ( a7 )
  {
    v50 = 0;
    v57 = v61;
    v56 = 0LL;
    v58 = v25;
    while ( 1 )
    {
      v39 = KeEnumerateNextProcessor(&v64, &v56);
      if ( v39 )
        break;
      v51 = KeGetPrcb(v64);
      v52 = *(_DWORD *)(v51 + 24244);
      if ( v52 > 0x2710 )
        v50 += PpmHeteroUtilityToNormalizedUtility(v51 + 23808, v52 - 10000);
    }
    *v40 = v50;
  }
  if ( v21 )
  {
    v57 = a2;
    v58 = v25;
    v56 = 0LL;
    while ( 1 )
    {
      v39 = KeEnumerateNextProcessor(&v64, &v56);
      if ( v39 )
        break;
      v53 = KeGetPrcb(v64);
      *(_DWORD *)(v53 + 24244) = *(_DWORD *)(v53 + 24248);
    }
  }
  return v39;
}
