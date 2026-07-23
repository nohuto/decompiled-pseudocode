/*
 * XREFs of MiTradeActivePage @ 0x14012DFF4
 * Callers:
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140029658 (MiFinalizePageAttribute.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     KeFlushSingleTb @ 0x1400ECE74 (KeFlushSingleTb.c)
 *     MiWriteValidPteNewPage @ 0x1400EEBAC (MiWriteValidPteNewPage.c)
 *     MiCopyPfnEntryEx @ 0x14010E080 (MiCopyPfnEntryEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiTradeActivePage(
        __int64 BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG_PTR v8; // rbp
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  unsigned int v15; // r13d
  char v16; // al
  char v17; // al
  __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 *v21; // r9
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // edx
  int v26; // r10d
  bool v27; // zf
  int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp+18h]
  unsigned int v30; // [rsp+78h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(BugCheckParameter2 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x8000) != 0 )
    MiGetPagePrivilege(BugCheckParameter2, 0, 0LL);
  v9 = (__int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
  v14 = v10;
  if ( a5 == 2 )
  {
    if ( (v10 & 0x42) == 0 && !v13 )
      goto LABEL_8;
    return 0LL;
  }
  if ( MiPteInShadowRange((unsigned __int64)v9) && (unsigned int)MiPteHasShadow() )
    v24 = v26;
  *v9 = v23;
  if ( v24 )
    MiWritePteShadow((__int64)v9, v23);
  KeFlushSingleTb(a3, v30, a5);
LABEL_8:
  v15 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  v28 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v28, v11, v12);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2, v11, v12);
  MiFinalizePageAttribute(a2, v15, 1u);
  MiCopyPfnEntryEx(a2, BugCheckParameter2);
  MiCopyPage(v8, (BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 35) = v16 & 0xF7;
  v17 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v17;
  *(_BYTE *)(BugCheckParameter2 + 34) = v17 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = (v8 & 0xFFFFFFFFFLL) << 12;
  v19 = v18 | v14 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    if ( !MiPteInShadowRange((unsigned __int64)v9) )
      goto LABEL_21;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v25 = 1;
      if ( !HIBYTE(word_14043B26C) )
      {
        v27 = (v19 & 1) == 0;
        goto LABEL_33;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    {
      v27 = (v19 & 1) == 0;
LABEL_33:
      if ( !v27 )
        v19 |= 0x8000000000000000uLL;
    }
LABEL_21:
    *v9 = v19;
    if ( v25 )
      MiWritePteShadow((__int64)v9, v19);
    goto LABEL_12;
  }
  MiWriteValidPteNewPage(v9, v19, 0);
LABEL_12:
  KeFlushSingleTb(v29, v30, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v20 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    MiWriteValidPteNewPage(v21, v18 | v20 & 0xFFFF000000000FFFuLL, 0);
  }
  return 1LL;
}
