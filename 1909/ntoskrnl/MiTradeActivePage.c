/*
 * XREFs of MiTradeActivePage @ 0x1400F9DC4
 * Callers:
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFinalizePageAttribute @ 0x140096D78 (MiFinalizePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPfnEntryEx @ 0x1400C2B70 (MiCopyPfnEntryEx.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWriteValidPteNewPage @ 0x1400FA008 (MiWriteValidPteNewPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG_PTR v8; // rbp
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rbx
  unsigned int v13; // r13d
  char v14; // al
  char v15; // al
  __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v21; // rdx
  int v22; // r8d
  int v23; // r10d
  int v24; // edx
  bool v25; // zf
  int v26; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp+18h]
  unsigned int v28; // [rsp+78h] [rbp+20h]

  v28 = a4;
  v27 = a3;
  if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(BugCheckParameter2 + 32) != 1 )
    return 0LL;
  v8 = (a2 + 0x58000000000LL) / 48;
  if ( (MiFlags & 0x8000) != 0 )
    MiGetPagePrivilege(BugCheckParameter2, 0, 0LL);
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
  v12 = v10;
  if ( a5 == 2 )
  {
    if ( (v10 & 0x42) == 0 && !v11 )
      goto LABEL_8;
    return 0LL;
  }
  if ( MiPteInShadowRange((unsigned __int64)v9) && (unsigned int)MiPteHasShadow() )
    v22 = v23;
  *v9 = v21;
  if ( v22 )
    MiWritePteShadow((__int64)v9);
  KeFlushSingleTb(a3, v28, a5);
LABEL_8:
  v13 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v13, 1u);
  MiCopyPfnEntryEx(a2, (__int128 *)BugCheckParameter2);
  MiCopyPage(v8, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v14 = *(_BYTE *)(BugCheckParameter2 + 35);
  *(_QWORD *)(BugCheckParameter2 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(BugCheckParameter2 + 35) = v14 & 0xF7;
  v15 = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
  *(_BYTE *)(BugCheckParameter2 + 34) = v15;
  *(_BYTE *)(BugCheckParameter2 + 34) = v15 & 0xC7;
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = (v8 & 0xFFFFFFFFFLL) << 12;
  v17 = v16 | v12 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    if ( MiPteInShadowRange((unsigned __int64)v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v25 = (v17 & 1) == 0;
          goto LABEL_30;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v25 = (v17 & 1) == 0;
LABEL_30:
        if ( !v25 )
          v17 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v17;
    if ( v24 )
      MiWritePteShadow((__int64)v9);
    goto LABEL_12;
  }
  MiWriteValidPteNewPage(v9, v17, 0LL);
LABEL_12:
  KeFlushSingleTb(v27, v28, a5);
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) != 0 )
  {
    v18 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
    MiWriteValidPteNewPage(v19, v16 | v18 & 0xFFFF000000000FFFuLL, 0LL);
  }
  return 1LL;
}
