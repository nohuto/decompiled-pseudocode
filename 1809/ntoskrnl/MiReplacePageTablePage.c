/*
 * XREFs of MiReplacePageTablePage @ 0x14011BEFC
 * Callers:
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiReplacePageTablePage(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rbx
  int v4; // r14d
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  int v9; // r10d
  __int64 v10; // r13
  int v11; // r9d
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  char v19; // r10
  volatile signed __int64 *v20; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // r13
  __int64 v26; // r9
  int v27; // edi
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // r11
  int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int16 v32; // r11
  __int64 v33; // rbx
  unsigned __int64 result; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  bool v37; // zf
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r10
  unsigned __int8 v41; // r11
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  int SystemRegionType; // eax
  unsigned __int64 v47; // rax
  unsigned __int8 v48; // r10
  int v49; // [rsp+28h] [rbp-E0h]
  int v50; // [rsp+2Ch] [rbp-DCh]
  int v51; // [rsp+30h] [rbp-D8h]
  __int64 v52; // [rsp+38h] [rbp-D0h] BYREF
  int v53; // [rsp+40h] [rbp-C8h]
  int v54; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v55; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v59; // [rsp+68h] [rbp-A0h]
  __int64 v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+78h] [rbp-90h] BYREF
  __int64 v62; // [rsp+80h] [rbp-88h]
  int v63; // [rsp+88h] [rbp-80h] BYREF
  __int16 v64; // [rsp+8Ch] [rbp-7Ch]
  int v65; // [rsp+90h] [rbp-78h]
  int v66; // [rsp+94h] [rbp-74h]
  __int64 v67; // [rsp+98h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-68h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  v58 = a1;
  v5 = v1;
  *(_DWORD *)(a1 + 56) = -1073741823;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 32);
  v56 = v6;
  v59 = v3;
  v55 = v1;
  v60 = v7;
  v8 = 48 * v1 - 0x58000000000LL;
  v9 = *(_DWORD *)(v2 + 60);
  v10 = 48 * v7 - 0x58000000000LL;
  v62 = v10;
  if ( v9 == 1 )
  {
    v43 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 1544LL);
    if ( !v43 )
      return MiSetOriginalPtePfnFromFreeList((_QWORD *)(v10 + 16));
    v61 = MI_READ_PTE_LOCK_FREE(((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v44 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v61);
    if ( (v45 & (v44 >> 12)) != v1 )
      return MiSetOriginalPtePfnFromFreeList((_QWORD *)(v10 + 16));
  }
  v11 = 1;
  if ( (*(_QWORD *)(v8 + 40) & 0xFFFFFFFFFLL) == v1 )
  {
    v53 = 1;
    if ( v9 == 1 )
      v5 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 40LL) >> 12;
  }
  else
  {
    v53 = 0;
    LeafVa = MiGetLeafVa(v3);
    if ( LeafVa > 0x7FFFFFFEFFFFLL
      && (LeafVa < qword_14043CB80 || LeafVa > qword_14043B5F0)
      && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      SystemRegionType = MiGetSystemRegionType(LeafVa);
      v11 = 0;
      if ( SystemRegionType == 1 )
        v11 = 2;
    }
  }
  v66 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v13 = v3;
  v49 = 0;
  v14 = v6 - v3;
  v51 = 0;
  v50 = 0;
  v63 = v11;
  v64 = 0;
  v65 = 20;
  while ( 1 )
  {
    v15 = MI_READ_PTE_LOCK_FREE(v13);
    v17 = 1LL;
    v52 = v15;
    v18 = v15;
    if ( (v15 & 1) != 0 )
    {
      ++v49;
      v30 = v51 + 1;
      if ( (v18 & 0x80u) == 0LL )
        v30 = v51;
      v51 = v30;
      if ( (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFLL) == qword_14043BE88 )
        ++v50;
      if ( v5 != v55 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v58 + 64) + 8 * ((__int64)(v13 + v14 - v56) >> 3));
        v52 = v18;
        v19 = v18;
      }
      v17 = 1LL;
      goto LABEL_8;
    }
    v19 = v15;
    if ( (v15 & 0x400) != 0 || (v15 & 0x800) == 0 )
      goto LABEL_8;
    v35 = MiLockTransitionLeafPage(v13, (unsigned __int8 *)(v4 != 0));
    if ( v35 )
    {
      v36 = MI_READ_PTE_LOCK_FREE(v13);
      v37 = (*(_BYTE *)(v35 + 34) & 0x20) == 0;
      v18 = v36;
      v19 = v36;
      v52 = v36;
      if ( !v37 )
      {
        v20 = (volatile signed __int64 *)(v35 + 24);
        goto LABEL_75;
      }
      v17 = 1LL;
      ++v4;
LABEL_8:
      if ( v5 != v55 )
      {
        v18 &= -(__int64)((v19 & 1) != 0);
        v52 = v18;
      }
      *(_QWORD *)(v14 + v13) = v18;
      v13 += 8LL;
      if ( (v13 & 0xFFF) == 0 )
        break;
    }
  }
  if ( v4 )
  {
    MiLockNestedPageAtDpcInline(v8);
  }
  else
  {
    LODWORD(v57) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v57, v17, v16);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  v20 = (volatile signed __int64 *)(v8 + 24);
  v21 = *(_QWORD *)(v8 + 24);
  v22 = v21 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v53 || (unsigned __int16)v21 == (unsigned __int64)(unsigned int)(v4 + v49 - v50 - v51 + 1))
    && *(_WORD *)(v8 + 32) == 1
    && v22 < 0x10000 )
  {
    MiLockNestedPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 24) = v22 | *(_QWORD *)(v10 + 24) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64(v20, 0x7FFFFFFFFFFFFFFFuLL);
    v25 = v59;
    v26 = v59;
    if ( v4 )
    {
      do
      {
        v38 = MI_READ_PTE_LOCK_FREE(v26);
        if ( ((unsigned __int8)v38 & v41) == 0 && (v38 & 0x400) == 0 && (v38 & 0x800) != 0 )
        {
          if ( qword_14043B180 && (v38 & 0x10) == 0 )
            v38 &= ~qword_14043B180;
          v42 = 48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v23 = *(_QWORD *)(v42 + 40);
          if ( (v23 & 0xFFFFFFFFFLL) == v5 && v5 == v55 )
            *(_QWORD *)(v42 + 40) = v23 ^ (v40 ^ v23) & 0xFFFFFFFFFLL;
          --v4;
          _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v26 = v39 + 8;
      }
      while ( v4 );
      v25 = v59;
    }
    v27 = v49;
    v28 = v25;
    while ( v27 )
    {
      v52 = MI_READ_PTE_LOCK_FREE(v28);
      v26 = v52;
      if ( ((unsigned __int8)v52 & v29) != 0 )
      {
        --v27;
        v31 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v52) >> 12) & 0xFFFFFFFFFLL;
        v33 = 48 * v31;
        if ( (v32 & (*(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) >> 53)) != 0 && v31 != v5 )
        {
          v54 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v33 - 0x58000000000LL + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v54, v23, v24);
              while ( *(__int64 *)(v33 - 0x58000000000LL + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 - 0x58000000000LL + 24), 0x3FuLL) );
            LOBYTE(v32) = 1;
          }
          if ( (*(_QWORD *)(v33 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL) == v5 && v5 == v55 )
            *(_QWORD *)(v33 - 0x58000000000LL + 40) ^= (v60 ^ *(_QWORD *)(v33 - 0x58000000000LL + 40)) & 0xFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v33 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = v52;
        }
        if ( v5 != v55 )
          v26 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v58 + 64) + 8 * ((__int64)(v28 - v25) >> 3));
        if ( ((unsigned __int8)v26 & (unsigned __int8)v32) != 0 )
        {
          MiWriteValidPteNewProtection(v56, v26 | 0x20);
          if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
            MiInsertTbFlushEntry((__int64)&v63, (__int64)(v28 << 25) >> 16, 1LL, 0);
        }
      }
      v28 += 8LL;
      v56 += 8LL;
    }
    MiFlushTbList(&v63, v23, v24, v26);
    result = v58;
    *(_DWORD *)(v58 + 56) = 0;
    return result;
  }
LABEL_75:
  _InterlockedAnd64(v20, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 )
  {
    do
    {
      v13 -= 8LL;
      v47 = MI_READ_PTE_LOCK_FREE(v13);
      if ( ((unsigned __int8)v47 & v48) == 0 && (v47 & 0x400) == 0 && (v47 & 0x800) != 0 )
      {
        if ( qword_14043B180 && (v47 & 0x10) == 0 )
          v47 &= ~qword_14043B180;
        --v4;
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFE8LL),
          0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    while ( v4 );
    v10 = v62;
  }
  return MiSetOriginalPtePfnFromFreeList((_QWORD *)(v10 + 16));
}
