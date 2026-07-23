/*
 * XREFs of PpmParkDistributeUtility @ 0x1401037A0
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x140103710 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x1402E41A0 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x1402E451C (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1402E4660 (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int16 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        char a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  __int64 v8; // r10
  int v9; // r11d
  unsigned __int8 v10; // di
  char v11; // bl
  char v12; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  char v22; // r12
  unsigned int v23; // edi
  unsigned int v24; // esi
  bool v25; // zf
  unsigned __int16 v26; // r13
  int v27; // r11d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  unsigned int v33; // eax
  unsigned int v34; // r9d
  int v35; // r9d
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // rbx
  char v42; // r12
  __int64 Prcb; // rax
  __int64 v44; // rdx
  unsigned __int8 v45; // bl
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // eax
  unsigned int v51; // eax
  int v52; // edi
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v57; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v58; // [rsp+28h] [rbp-20h] BYREF
  __int64 v59; // [rsp+30h] [rbp-18h]
  unsigned __int16 v60; // [rsp+38h] [rbp-10h]
  __int64 v61; // [rsp+90h] [rbp+48h]
  ULONG v64; // [rsp+A8h] [rbp+60h] BYREF

  v7 = a6;
  v8 = 0LL;
  v9 = a3;
  v10 = 0;
  v60 = a3;
  v11 = 0;
  v58 = 0LL;
  v12 = 0;
  a6 = v9;
  v61 = a2 ^ a1;
  v14 = a2 ^ a1;
  v15 = a2 ^ a1;
  v17 = v9;
  while ( v15 )
  {
LABEL_3:
    v17 = v60;
    _BitScanForward64(&v18, v15);
    v59 = v15 & ~(1LL << v18);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v60 + (unsigned __int8)v18];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v19 = 0LL;
    else
      v19 = KiProcessorBlock[v64];
    if ( *(_BYTE *)(v19 + 24224) )
    {
      ++v12;
      v8 |= *(_QWORD *)(v19 + 200);
    }
    else
    {
      ++v11;
    }
    v20 = *(_DWORD *)(v19 + 24244);
    if ( PpmHeteroImplementationGeneration )
    {
      v21 = *(_DWORD *)(v19 + 24240);
      if ( v21 )
        v20 = (v21 * v20) >> 16;
    }
    v15 = v59;
    ++v10;
    v7 += v20;
  }
  while ( ++v60 < (unsigned int)(v17 + 1) )
  {
    v59 = *(_QWORD *)(8LL * v60 + 8);
    v15 = v59;
    if ( v59 )
      goto LABEL_3;
  }
  v57 = v8;
  v60 = v9;
  v59 = a2;
  v58 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v64, &v58) )
  {
    Prcb = KeGetPrcb(v64);
    v44 = (unsigned int)(*(_DWORD *)(Prcb + 24244) - *(_DWORD *)(Prcb + 24248));
    if ( PpmHeteroImplementationGeneration )
      LODWORD(v44) = PpmHeteroUtilityToNormalizedUtility(Prcb + 23808, v44);
    v7 += v44;
  }
  if ( v10 <= 1u )
    v10 = 1;
  if ( a4 >= v10 )
    a4 = v10;
  if ( a4 <= 1u )
    a4 = 1;
  v22 = a5;
  v23 = v7 / v10;
  v24 = v7 / a4;
  if ( v11 )
  {
    v25 = v12 == 0;
    v26 = a3;
    if ( !v25 )
    {
      v59 = v57;
      v60 = a3;
      v58 = 0LL;
      while ( 1 )
      {
        v45 = a4;
        if ( (unsigned int)KeEnumerateNextProcessor(&v64, &v58) )
          break;
        v46 = KeGetPrcb(v64);
        v14 ^= *(_QWORD *)(v46 + 200);
        v47 = PpmHeteroNormalizedUtilityToUtility(v46 + 23808, v24);
        v49 = v47;
        if ( v47 <= *(_DWORD *)(v48 + 436) )
        {
          if ( v22 )
          {
            v50 = *(_DWORD *)(v48 + 440);
            if ( v50 <= v49 )
              v50 = v49;
            *(_DWORD *)(v48 + 436) = v50;
          }
        }
        else
        {
          *(_DWORD *)(v48 + 436) = v47;
        }
        --a4;
        if ( !v45 )
          a4 = 0;
      }
    }
  }
  else
  {
    v26 = a3;
  }
  v27 = a6;
  v28 = v14;
  v60 = v26;
  while ( v28 )
  {
LABEL_24:
    v27 = v60;
    _BitScanForward64(&v29, v28);
    v59 = v28 & ~(1LL << v29);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v60 + (unsigned __int8)v29];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v30 = 0LL;
    else
      v30 = KiProcessorBlock[v64];
    v31 = *(_DWORD *)(v30 + 24240);
    v32 = *(_DWORD *)(v30 + 24244);
    if ( v31 )
      v33 = (v32 * v31) >> 16;
    else
      v33 = *(_DWORD *)(v30 + 24244);
    if ( v23 <= v33 )
    {
      v14 ^= *(_QWORD *)(v30 + 200);
      v34 = v24;
      if ( v31 )
      {
        if ( v31 == 0x10000 )
          v34 = (unsigned __int16)v24;
        else
          v34 = (v24 << 16) / v31;
      }
      if ( v34 <= v32 )
      {
        if ( !v22 )
          goto LABEL_29;
        v51 = *(_DWORD *)(v30 + 24248);
        v28 = v59;
        if ( v51 <= v34 )
          v51 = v34;
        *(_DWORD *)(v30 + 24244) = v51;
      }
      else
      {
        v28 = v59;
        *(_DWORD *)(v30 + 24244) = v34;
      }
    }
    else
    {
LABEL_29:
      v28 = v59;
    }
  }
  while ( ++v60 < (unsigned int)(v27 + 1) )
  {
    v59 = *(_QWORD *)(8LL * v60 + 8);
    v28 = v59;
    if ( v59 )
      goto LABEL_24;
  }
  v35 = a6;
  v60 = a3;
  v58 = 0LL;
  while ( v14 )
  {
LABEL_38:
    v35 = v60;
    _BitScanForward64(&v36, v14);
    v59 = v14 & ~(1LL << v36);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v60 + (unsigned __int8)v36];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v37 = 0LL;
    else
      v37 = KiProcessorBlock[v64];
    v38 = *(_DWORD *)(v37 + 24240);
    v39 = v23;
    if ( v38 )
    {
      if ( v38 == 0x10000 )
        v39 = (unsigned __int16)v23;
      else
        v39 = (v23 << 16) / v38;
    }
    v14 = v59;
    *(_DWORD *)(v37 + 24244) = v39;
  }
  while ( 1 )
  {
    LOWORD(v40) = ++v60;
    if ( v60 >= (unsigned int)(v35 + 1) )
      break;
    v59 = *(_QWORD *)(8LL * v60 + 8);
    v14 = v59;
    if ( v59 )
      goto LABEL_38;
  }
  v41 = a7;
  v42 = a5;
  if ( a7 )
  {
    v52 = 0;
    v59 = v61;
    v58 = 0LL;
    v60 = a3;
    while ( 1 )
    {
      v40 = KeEnumerateNextProcessor(&v64, &v58);
      if ( v40 )
        break;
      v53 = KeGetPrcb(v64);
      v54 = *(_DWORD *)(v53 + 24244);
      if ( v54 > 0x2710 )
        v52 += PpmHeteroUtilityToNormalizedUtility(v53 + 23808, v54 - 10000);
    }
    *v41 = v52;
  }
  if ( v42 )
  {
    v59 = a2;
    v60 = a3;
    v58 = 0LL;
    while ( 1 )
    {
      v40 = KeEnumerateNextProcessor(&v64, &v58);
      if ( v40 )
        break;
      v55 = KeGetPrcb(v64);
      *(_DWORD *)(v55 + 24244) = *(_DWORD *)(v55 + 24248);
    }
  }
  return v40;
}
