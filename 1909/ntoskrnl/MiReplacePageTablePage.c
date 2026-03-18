/*
 * XREFs of MiReplacePageTablePage @ 0x140122280
 * Callers:
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14018F434 (MmStealTopLevelPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiIsPdeOrAboveAccessible @ 0x1401200F0 (MiIsPdeOrAboveAccessible.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v2; // r11
  int v3; // esi
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // r13
  int v11; // r10d
  unsigned __int64 LeafVa; // r9
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // r14
  __int64 v23; // r9
  int v24; // edi
  unsigned __int64 v25; // rsi
  __int64 v26; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // r11
  __int64 v33; // rbx
  _BOOL8 v34; // r10
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  __int64 v43; // r11
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  __int64 v47; // r10
  int SystemRegionType; // eax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // r9
  __int64 v51; // r11
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+24h] [rbp-DCh]
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+2Ch] [rbp-D4h]
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 *v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  __int64 v66; // [rsp+80h] [rbp-80h]
  _QWORD v67[24]; // [rsp+90h] [rbp-70h] BYREF

  v62 = a1;
  memset(v67, 0, 0xB8uLL);
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(a1 + 56) = -1073741823;
  v60 = v4;
  v58 = v2;
  v64 = v6;
  v63 = v7;
  v8 = 48 * v2 - 0x58000000000LL;
  v9 = *(_DWORD *)(a1 + 60);
  v10 = 48 * v6 - 0x58000000000LL;
  v55 = 0;
  v66 = v10;
  v53 = 0;
  v52 = 0;
  v54 = 0;
  if ( v9 == 1 )
  {
    v45 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 1544LL);
    if ( !v45 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16));
    v65 = MI_READ_PTE_LOCK_FREE(((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v46 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v65);
    if ( (v47 & (v46 >> 12)) != v2 )
      return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16));
  }
  v11 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v2 )
  {
    v59 = 1;
    if ( v9 == 1 )
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 12;
  }
  else
  {
    v59 = 0;
    LeafVa = MiGetLeafVa(v4);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_1404672B0 || LeafVa > qword_140465BE0)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v11 = 0;
      if ( SystemRegionType == 1 )
        v11 = 2;
    }
  }
  v67[2] = 0LL;
  v13 = v7;
  v67[3] = 0LL;
  LODWORD(v67[0]) = v11;
  WORD2(v67[0]) = 0;
  LODWORD(v67[1]) = 20;
  do
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v4);
      v57 = v14;
      v15 = v14;
      if ( (v14 & 1) != 0 )
        break;
      if ( (v14 & 0x400) != 0 || (v14 & 0x800) == 0 )
        goto LABEL_8;
      v34 = v3 != 0;
      v35 = (__int64)(v4 << 25) >> 16;
      if ( v35 >= 0xFFFFF68000000000uLL && v35 <= 0xFFFFF6FFFFFFFFFFuLL && !MiIsPdeOrAboveAccessible(v4) )
        goto LABEL_94;
      if ( MiLockTransitionLeafPage(v4, (unsigned __int8 *)v34) )
      {
        v36 = MI_READ_PTE_LOCK_FREE(v4);
        v38 = *(_QWORD *)(v37 + 40) & 0xFFFFFFFFFLL;
        v57 = v36;
        v15 = v36;
        if ( v38 != v5 && ((v38 - 0xFFFFFFFFBLL) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && v38 != 0xFFFFFFFFDLL )
          ++v54;
        if ( (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_94;
        }
        ++v3;
LABEL_8:
        v16 = v58;
        goto LABEL_9;
      }
    }
    ++v52;
    if ( (v14 & 0x80u) != 0LL )
      goto LABEL_86;
    v28 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL;
    if ( v28 != qword_140466548 )
    {
      if ( ((*(_QWORD *)(48 * v28 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
        goto LABEL_29;
      v29 = *(_QWORD *)(48 * v28 - 0x57FFFFFFFD8LL) & 0xFFFFFFFFFLL;
      if ( ((v29 - 0xFFFFFFFFBLL) & 0xFFFFFFFFFFFFFFFCuLL) != 0 || v29 == 0xFFFFFFFFDLL )
        goto LABEL_29;
LABEL_86:
      ++v53;
      goto LABEL_29;
    }
    ++v55;
LABEL_29:
    if ( v5 == v58 )
      goto LABEL_11;
    v15 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v62 + 64) + 8 * (v13 - v63));
    v57 = v15;
LABEL_9:
    if ( v5 != v16 )
    {
      v15 &= -(__int64)((v15 & 1) != 0);
      v57 = v15;
    }
LABEL_11:
    *v13 = v15;
    v4 += 8LL;
    ++v13;
  }
  while ( (v4 & 0xFFF) != 0 );
  if ( v3 )
  {
    MiLockNestedPageAtDpcInline(v8);
  }
  else
  {
    v61 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v61);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v17 = *(_QWORD *)(v8 + 24);
  v18 = v17 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v59 || (unsigned __int16)v17 == (unsigned __int64)(unsigned int)(v3 + v52 - v54 - v55 - v53 + 1))
    && *(_WORD *)(v8 + 32) == 1
    && v18 < 0x10000 )
  {
    MiLockNestedPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 24) = v18 | *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v60;
    v22 = v58;
    v23 = v60;
    if ( v3 )
    {
      v39 = v64;
      do
      {
        v40 = MI_READ_PTE_LOCK_FREE(v23);
        if ( (v40 & 1) == 0 && (v40 & 0x400) == 0 && (v40 & 0x800) != 0 )
        {
          if ( qword_140465800 && (v40 & 0x10) == 0 )
            v40 &= ~qword_140465800;
          v44 = 48 * (v43 & (v40 >> 12)) - 0x58000000000LL;
          v19 = *(_QWORD *)(v44 + 40);
          if ( (v43 & v19) == v5 && v5 == v22 )
            *(_QWORD *)(v44 + 40) = v19 ^ v43 & (v39 ^ v19);
          --v3;
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), v42);
        }
        v23 = v41 + 8;
      }
      while ( v3 );
      v21 = v60;
    }
    v24 = v52;
    v25 = v21;
    if ( v52 )
    {
      v26 = (__int64)v63 - v21;
      do
      {
        v57 = MI_READ_PTE_LOCK_FREE(v25);
        v23 = v57;
        if ( (v57 & 1) != 0 )
        {
          --v24;
          v30 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL;
          v33 = 48 * v30;
          v19 = (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) >> 53) & 1LL;
          if ( ((*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 && v30 != v5 )
          {
            v56 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 - 0x58000000000LL + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v56);
                while ( *(__int64 *)(v33 - 0x58000000000LL + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 - 0x58000000000LL + 24), 0x3FuLL) );
              v32 = v60;
              v31 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v19 = 0xFFFFFFFFFLL;
            if ( (*(_QWORD *)(v33 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL) == v5 && v5 == v22 )
              *(_QWORD *)(v33 - 0x58000000000LL + 40) ^= (v64 ^ *(_QWORD *)(v33 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v33 - 0x58000000000LL + 24), v31);
            v23 = v57;
          }
          if ( v5 != v22 )
            v23 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v62 + 64) + 8 * ((__int64)(v25 - v32) >> 3));
          if ( (v23 & 1) != 0 )
          {
            MiWriteValidPteNewProtection(v25 + v26);
            if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
              MiInsertTbFlushEntry((__int64)v67, (__int64)(v25 << 25) >> 16, 1LL, 0);
          }
        }
        v25 += 8LL;
      }
      while ( v24 );
    }
    MiFlushTbList((int *)v67, v19, v20, v23);
    result = v62;
    *(_DWORD *)(v62 + 56) = 0;
    return result;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_94:
  if ( v3 )
  {
    do
    {
      v4 -= 8LL;
      v49 = MI_READ_PTE_LOCK_FREE(v4);
      if ( (v49 & 1) == 0 && (v49 & 0x400) == 0 && (v49 & 0x800) != 0 )
      {
        if ( qword_140465800 && (v49 & 0x10) == 0 )
          v49 &= ~qword_140465800;
        --v3;
        _InterlockedAnd64((volatile signed __int64 *)(48 * (v51 & (v49 >> 12)) - 0x57FFFFFFFE8LL), v50);
      }
    }
    while ( v3 );
    v10 = v66;
  }
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v10 + 16));
}
