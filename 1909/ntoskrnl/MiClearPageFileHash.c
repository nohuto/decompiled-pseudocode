/*
 * XREFs of MiClearPageFileHash @ 0x140159AE0
 * Callers:
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdatePageFileHighInPte @ 0x1400BBAB0 (MiUpdatePageFileHighInPte.c)
 *     KeFlushSingleTb @ 0x1400C5914 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  _SLIST_ENTRY *v8; // r14
  __int64 Next; // rcx
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // r9
  int v14; // r10d
  int v15; // r11d
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // rdx
  int v19; // r9d
  char v20; // r8
  char v21; // r8
  __int64 updated; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 216);
  if ( !v2 )
    return;
  v4 = v2 + 4LL * a2;
  v5 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
  updated = v6;
  v7 = v6;
  if ( (v6 & 1) == 0 )
  {
    if ( qword_140465800 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140465800;
    updated = MiUpdatePageFileHighInPte(v7, (unsigned int)(HIDWORD(v6) - 1));
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
      goto LABEL_25;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_1404658EC) )
      {
LABEL_25:
        *v5 = v18;
        if ( v19 )
          MiWritePteShadow((__int64)v5);
        return;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_25;
    }
    if ( (v20 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_25;
  }
  *(_DWORD *)v4 = 1;
  v8 = (_SLIST_ENTRY *)(48
                      * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&updated) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL);
  Next = (__int64)v8[1].Next;
  HIDWORD(v10) = HIDWORD(Next);
  if ( qword_140465800 && (Next & 0x10) == 0 )
    v10 = Next & ~qword_140465800;
  updated = MiUpdatePageFileHighInPte(Next, (unsigned int)(HIDWORD(v10) - 1));
  if ( MiPteInShadowRange(v11) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_8;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_8;
    }
    if ( (v21 & 1) != 0 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v13 = v12;
  if ( v14 )
    MiWritePteShadow((__int64)v13);
  if ( !v15 )
  {
    --*(_DWORD *)(a1 + 208);
    if ( !MiPteInShadowRange((unsigned __int64)v5) )
    {
LABEL_12:
      *v5 = v16;
      if ( v17 )
        MiWritePteShadow((__int64)v5);
      KeFlushSingleTb(v4, 0, 1u);
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v8);
      return;
    }
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_12;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_12;
    }
    if ( (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_12;
  }
}
