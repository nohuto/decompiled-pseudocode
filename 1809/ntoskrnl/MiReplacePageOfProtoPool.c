/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140124E6C
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPrototypePteRanges @ 0x1401252E4 (MiGetPrototypePteRanges.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 i; // r8
  unsigned int v7; // r14d
  int v8; // edi
  char *v9; // r12
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  char *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int NextForwardRunClearCapped; // eax
  unsigned int v19; // edi
  int v20; // edi
  _QWORD *v21; // r15
  __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // r15d
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v28; // rsi
  unsigned int v29; // r9d
  unsigned int v30; // r11d
  __int64 v31; // r13
  unsigned int v32; // r10d
  unsigned int v33; // eax
  char *v34; // rdi
  unsigned int v35; // esi
  unsigned int v36; // ecx
  char *v37; // rdx
  __int64 j; // r8
  char v39; // r9
  unsigned __int64 v40; // rax
  unsigned int v41; // edx
  __int64 v42; // r10
  unsigned __int64 v43; // rax
  int v44; // r10d
  unsigned int v46; // eax
  unsigned int v47; // eax
  int v48; // [rsp+20h] [rbp-89h]
  int v49; // [rsp+24h] [rbp-85h]
  unsigned int v50; // [rsp+28h] [rbp-81h] BYREF
  int v51; // [rsp+2Ch] [rbp-7Dh] BYREF
  __int64 v52; // [rsp+30h] [rbp-79h]
  __int64 v53; // [rsp+38h] [rbp-71h]
  unsigned int v54; // [rsp+40h] [rbp-69h] BYREF
  signed __int32 *v55; // [rsp+48h] [rbp-61h]
  int v56; // [rsp+50h] [rbp-59h]
  int v57; // [rsp+54h] [rbp-55h]
  __int64 v58; // [rsp+58h] [rbp-51h]
  __int64 v59; // [rsp+60h] [rbp-49h]
  unsigned __int64 v60; // [rsp+68h] [rbp-41h] BYREF
  signed __int32 v61[16]; // [rsp+70h] [rbp-39h] BYREF

  v58 = a2;
  v53 = a3;
  v4 = a1;
  v52 = a1;
  v55 = v61;
  v54 = 512;
  memset(v61, 0, sizeof(v61));
  if ( !(unsigned int)MiGetPrototypePteRanges(v4, &v54) )
    return 0LL;
  v48 = 0;
  KeCopyPage(a4, v4);
  v7 = 0;
  v8 = (((unsigned __int8)((unsigned __int8)&v61[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
  v49 = v8;
  v59 = (((unsigned __int8)((unsigned __int8)&v61[14] + 1) - 57) & 4) != 0LL ? 4 : 0;
  v9 = (char *)v61 - v59;
  while ( 1 )
  {
    v10 = v7 < v54 ? v7 : 0;
    v11 = v54 - 1;
    while ( 1 )
    {
      v12 = v8 + v11;
      v13 = v8 + v10;
      if ( v11 - v10 == -1 )
        goto LABEL_55;
      v14 = &v9[8 * ((unsigned __int64)v13 >> 6)];
      for ( i = ~*(_QWORD *)v14 | ((1LL << (v13 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v14 )
      {
        v14 += 8;
        if ( v14 > &v9[8 * ((unsigned __int64)v12 >> 6)] )
          goto LABEL_55;
      }
      i = ~i;
      _BitScanForward64(&v15, i);
      v16 = (unsigned int)v15 + ((unsigned int)((v14 - v9) >> 3) << 6);
      v56 = v15;
      if ( (unsigned int)v16 > v12 )
      {
LABEL_55:
        v16 = 0xFFFFFFFFLL;
      }
      else if ( (_DWORD)v16 != -1 )
      {
        break;
      }
      if ( !v10 )
        break;
      v46 = v7 + 1;
      if ( v7 + 1 > v54 )
        v46 = v54;
      v11 = v46 - 1;
      v10 = 0;
    }
    v17 = (unsigned int)(v16 - v8);
    if ( (_DWORD)v16 == -1 )
      v17 = 0xFFFFFFFFLL;
    if ( (unsigned int)v17 < v7 || (_DWORD)v17 == -1 )
      break;
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)&v54, v17, 0xFFFFFFFF, &v50);
    v19 = v50;
    if ( !NextForwardRunClearCapped )
      v19 = 512;
    v20 = v19 - v17;
    v21 = (_QWORD *)(a4 + 8 * v17);
    v22 = (__int64 *)(v4 + 8 * v17);
    v7 = v17 + v20 + NextForwardRunClearCapped;
    if ( v20 )
    {
      do
      {
        v23 = MiLockLeafPage(v22, v48);
        if ( v23 )
        {
          ++v48;
          if ( (*(_BYTE *)(v23 + 34) & 8) != 0
            || (MI_READ_PTE_LOCK_FREE((unsigned __int64)v22) & 1) == 0 && (v39 & 0x20) != 0 )
          {
            v25 = v48;
            goto LABEL_67;
          }
        }
        else
        {
          _bittestandreset(v61, v17);
        }
        LODWORD(v17) = v17 + 1;
        *v21++ = *v22++;
      }
      while ( --v20 );
    }
    if ( v7 >= 0x200 )
      break;
    v8 = (((unsigned __int8)((unsigned __int8)&v61[14] + 1) - 57) & 4) != 0LL ? 0x20 : 0;
    v4 = v52;
  }
  v24 = 48 * v58 - 0x58000000000LL;
  v25 = v48;
  v26 = 48 * v53 - 0x58000000000LL;
  if ( v48 )
  {
    MiLockNestedPageAtDpcInline(48 * v58 - 0x58000000000LL, v16, i);
  }
  else
  {
    v51 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v51, v16, i);
      while ( *(__int64 *)(v24 + 24) < 0 );
    }
  }
  if ( *(_WORD *)(v24 + 32) == 2
    && (v27 = *(_QWORD *)(v24 + 24), (unsigned __int16)v27 == (unsigned __int64)(unsigned int)(v48 + 1))
    && (v28 = v27 & 0x3FFFFFFFFFFFFFFFLL, v28 < 0x10000) )
  {
    MiLockNestedPageAtDpcInline(v26, v16, i);
    *(_QWORD *)(v26 + 24) = v28 | *(_QWORD *)(v26 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = 1;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_67:
    v29 = 0;
  }
  v30 = 0;
  v31 = v52;
  while ( v25 )
  {
    v32 = v30 < v54 ? v30 : 0;
    v33 = v54 - 1;
    v34 = (char *)v61 - v59;
    while ( 1 )
    {
      v35 = v49 + v33;
      v36 = v49 + v32;
      if ( v33 - v32 == -1 )
        goto LABEL_52;
      v37 = &v34[8 * ((unsigned __int64)v36 >> 6)];
      for ( j = ~*(_QWORD *)v37 | ((1LL << (v36 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v37 )
      {
        v37 += 8;
        if ( v37 > &v34[8 * ((unsigned __int64)v35 >> 6)] )
          goto LABEL_52;
      }
      _BitScanForward64(&v40, ~j);
      v41 = v40 + ((unsigned int)((v37 - v34) >> 3) << 6);
      v57 = v40;
      if ( v41 > v35 )
      {
LABEL_52:
        v41 = -1;
      }
      else if ( v41 != -1 )
      {
        break;
      }
      if ( !v32 )
        break;
      v47 = v30 + 1;
      if ( v30 + 1 > v54 )
        v47 = v54;
      v33 = v47 - 1;
      v32 = 0;
    }
    v42 = v41 - v49;
    if ( v41 == -1 )
      v42 = 0xFFFFFFFFLL;
    v43 = MI_READ_PTE_LOCK_FREE(v31 + 8 * v42);
    v60 = v43;
    if ( (v43 & 1) != 0 )
    {
      v43 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v60);
    }
    else if ( qword_14043B180 )
    {
      if ( (v43 & 0x10) != 0 )
        v43 &= ~0x10uLL;
      else
        v43 &= ~qword_14043B180;
    }
    if ( v29 == 1 )
      *(_QWORD *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) ^= (v53 ^ *(_QWORD *)(48
                                                                                                 * ((v43 >> 12) & 0xFFFFFFFFFLL)
                                                                                                 - 0x58000000000LL
                                                                                                 + 40)) & 0xFFFFFFFFFLL;
    --v25;
    _InterlockedAnd64(
      (volatile signed __int64 *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 24),
      0x7FFFFFFFFFFFFFFFuLL);
    v30 = v44 + 1;
  }
  return v29;
}
