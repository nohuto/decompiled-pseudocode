/*
 * XREFs of MiReplacePageOfProtoPool @ 0x14012858C
 * Callers:
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPrototypePteRanges @ 0x140128B0C (MiGetPrototypePteRanges.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeCopyPage @ 0x1401C8630 (KeCopyPage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r13d
  unsigned int m; // r14d
  int v9; // esi
  char *v10; // rdi
  unsigned int v11; // r9d
  int v12; // eax
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  char *v15; // rdx
  __int64 j; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rdi
  unsigned int v20; // ebx
  signed __int32 *v21; // rdx
  int v22; // r8d
  int v23; // r9d
  unsigned int k; // eax
  _QWORD *v25; // r15
  int v26; // ebx
  unsigned __int64 *v27; // rsi
  __int64 v28; // rax
  char v29; // r9
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  unsigned int v36; // r9d
  unsigned int v37; // r11d
  char *v38; // r15
  int v39; // r10d
  int v40; // eax
  unsigned int v41; // edi
  unsigned int v42; // ecx
  char *v43; // rdx
  __int64 n; // r8
  unsigned __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // r10
  unsigned __int64 v48; // rax
  int v49; // r10d
  signed __int32 *v51; // rdx
  unsigned int v52; // eax
  unsigned int v53; // eax
  int v54; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v56; // [rsp+28h] [rbp-D8h]
  char *i; // [rsp+30h] [rbp-D0h]
  __int64 v58; // [rsp+38h] [rbp-C8h]
  _DWORD v59[2]; // [rsp+40h] [rbp-C0h] BYREF
  signed __int32 *v60; // [rsp+48h] [rbp-B8h]
  int v61; // [rsp+50h] [rbp-B0h]
  int v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  _QWORD v64[8]; // [rsp+70h] [rbp-90h] BYREF
  signed __int32 v65[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v66[64]; // [rsp+100h] [rbp+0h] BYREF

  v56 = a3;
  v58 = a1;
  v63 = a4;
  memset(&v64[1], 0, 0x30uLL);
  v59[1] = 0;
  v60 = v65;
  v59[0] = 512;
  memset(v65, 0, sizeof(v65));
  if ( !(unsigned int)MiGetPrototypePteRanges(a1, v59) )
    return 0LL;
  v7 = 0;
  KeCopyPage(a4, a1);
  m = 0;
  v9 = (((unsigned __int8)v66 - 80) & 4) != 0LL ? 0x20 : 0;
  v54 = v9;
  v10 = (char *)v65 - ((((unsigned __int8)v66 - 80) & 4) != 0LL ? 4 : 0);
  for ( i = v10; ; v10 = i )
  {
    v11 = m < v59[0] ? m : 0;
    v12 = v59[0] - 1;
    while ( 1 )
    {
      v13 = v9 + v12;
      v14 = v9 + v11;
      if ( v12 - v11 == -1 )
        goto LABEL_71;
      v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
      for ( j = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v15 )
      {
        v15 += 8;
        if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
          goto LABEL_71;
      }
      _BitScanForward64(&v17, ~j);
      v18 = v17 + ((unsigned int)((v15 - v10) >> 3) << 6);
      v61 = v17;
      if ( v18 > v13 )
      {
LABEL_71:
        v18 = -1;
      }
      else if ( v18 != -1 )
      {
        break;
      }
      if ( !v11 )
        break;
      v52 = m + 1;
      if ( m + 1 > v59[0] )
        v52 = v59[0];
      v12 = v52 - 1;
      v11 = 0;
    }
    v19 = v18 - v9;
    if ( v18 == -1 )
      v19 = 0xFFFFFFFFLL;
    if ( (unsigned int)v19 < m || (_DWORD)v19 == -1 )
      break;
    if ( (unsigned int)v19 < 0x200 )
    {
      v20 = v19;
      v21 = &v65[(unsigned __int64)(unsigned int)v19 >> 5];
      if ( v21 != &v65[15] && (*v21 | dword_14037C900[v19 & 0x1F]) == 0xFFFFFFFF )
      {
        v20 = v19 - (v19 & 0x1F) + 32;
        for ( ++v21; v21 < &v65[15] && *v21 == -1; ++v21 )
          v20 += 32;
      }
      while ( v20 < 0x200 && _bittest(v65, v20) )
        ++v20;
      v22 = 0;
      if ( v21 == &v65[15] )
        goto LABEL_27;
      v23 = v20 & 0x1F;
      if ( (*v21 & ~dword_14037C900[v20 & 0x1F]) != 0 )
        goto LABEL_27;
      v22 = 32 - v23;
      if ( v23 != 33 )
      {
        v51 = v21 + 1;
        while ( v51 < &v65[15] && !*v51 )
        {
          ++v51;
          v22 += 32;
          if ( v22 == -1 )
            goto LABEL_32;
        }
LABEL_27:
        for ( k = v22 + v20; k < 0x200 && !_bittest(v65, k) && v22 != -1; ++k )
          ++v22;
      }
LABEL_32:
      if ( v22 )
        goto LABEL_33;
      goto LABEL_79;
    }
    v22 = 0;
LABEL_79:
    v20 = 512;
LABEL_33:
    v25 = (_QWORD *)(v63 + 8 * v19);
    v26 = v20 - v19;
    v27 = (unsigned __int64 *)(v58 + 8 * v19);
    for ( m = v19 + v22 + v26; v26; --v26 )
    {
      v28 = MiLockLeafPage(v27, v7);
      if ( v28 )
      {
        ++v7;
        if ( (*(_BYTE *)(v28 + 34) & 8) != 0
          || (MI_READ_PTE_LOCK_FREE((unsigned __int64)v27) & 1) == 0 && (v29 & 0x20) != 0 )
        {
          v31 = v56;
          goto LABEL_91;
        }
      }
      else
      {
        _bittestandreset(v65, v19);
      }
      LODWORD(v19) = v19 + 1;
      *v25++ = *v27++;
    }
    if ( m >= 0x200 )
      break;
    v9 = (((unsigned __int8)v66 - 80) & 4) != 0LL ? 0x20 : 0;
  }
  v30 = 48 * a2;
  v31 = v56;
  v32 = v30 - 0x58000000000LL;
  v33 = 48 * v56 - 0x58000000000LL;
  if ( v7 )
  {
    MiLockNestedPageAtDpcInline(v32);
  }
  else
  {
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(__int64 *)(v32 + 24) < 0 );
    }
  }
  if ( *(_WORD *)(v32 + 32) == 2
    && (v34 = *(_QWORD *)(v32 + 24), (unsigned __int16)v34 == (unsigned __int64)(unsigned int)(v7 + 1))
    && (v35 = v34 & 0x3FFFFFFFFFFFFFFFLL, v35 < 0x10000) )
  {
    MiLockNestedPageAtDpcInline(v33);
    *(_QWORD *)(v33 + 24) = v35 | *(_QWORD *)(v33 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v36 = 1;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_91:
    v36 = 0;
  }
  v37 = 0;
  v38 = i;
  while ( v7 )
  {
    v39 = v37 < v59[0] ? v37 : 0;
    v40 = v59[0] - 1;
    while ( 1 )
    {
      v41 = v40 + v54;
      v42 = v39 + v54;
      if ( v40 - v39 == -1 )
        goto LABEL_68;
      v43 = &v38[8 * ((unsigned __int64)v42 >> 6)];
      for ( n = ~*(_QWORD *)v43 | ((1LL << (v42 & 0x3F)) - 1); n == -1; n = ~*(_QWORD *)v43 )
      {
        v43 += 8;
        if ( v43 > &v38[8 * ((unsigned __int64)v41 >> 6)] )
          goto LABEL_68;
      }
      _BitScanForward64(&v45, ~n);
      v46 = v45 + ((unsigned int)((v43 - v38) >> 3) << 6);
      v62 = v45;
      if ( v46 > v41 )
      {
LABEL_68:
        v46 = -1;
      }
      else if ( v46 != -1 )
      {
        break;
      }
      if ( !v39 )
        break;
      v53 = v37 + 1;
      if ( v37 + 1 > v59[0] )
        v53 = v59[0];
      v40 = v53 - 1;
      v39 = 0;
    }
    v47 = v46 - v54;
    if ( v46 == -1 )
      v47 = 0xFFFFFFFFLL;
    v48 = MI_READ_PTE_LOCK_FREE(v58 + 8 * v47);
    v64[0] = v48;
    if ( (v48 & 1) != 0 )
    {
      v48 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v64);
    }
    else if ( qword_140465800 )
    {
      if ( (v48 & 0x10) != 0 )
        v48 &= ~0x10uLL;
      else
        v48 &= ~qword_140465800;
    }
    if ( v36 == 1 )
    {
      v64[6] = *(_QWORD *)(48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) ^ (v31 ^ *(_QWORD *)(48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
      *(_QWORD *)(48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) = v64[6];
    }
    --v7;
    _InterlockedAnd64(
      (volatile signed __int64 *)(48 * ((v48 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 24),
      0x7FFFFFFFFFFFFFFFuLL);
    v37 = v49 + 1;
  }
  return v36;
}
