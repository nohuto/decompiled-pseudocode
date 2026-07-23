/*
 * XREFs of RemoveListEntryPte @ 0x14012980C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiRemoveSpecialPoolRange @ 0x1402ACAC0 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiGetPteLink @ 0x1400AD6E4 (MiGetPteLink.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

char __fastcall RemoveListEntryPte(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 PteLink; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  __int64 *v8; // r8
  int v9; // r9d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r11
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 *v15; // r8
  int v16; // r9d
  bool v17; // zf
  bool v18; // zf

  PteLink = MiGetPteLink(a2[1]);
  v5 = *(_QWORD *)(a1 + 16);
  if ( PteLink == (__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - v5 - 0x98000000000LL) >> 3 )
    v6 = a1;
  else
    v6 = v5 + 8 * PteLink;
  if ( MiPteInShadowRange(v6) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_4;
      v17 = (v7 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_4;
      v17 = (v7 & 1) == 0;
    }
    if ( !v17 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *v8 = v7;
  if ( v9 )
    MiWritePteShadow((__int64)v8, v7);
  v10 = MiGetPteLink(*a2);
  v11 = *(_QWORD *)(a1 + 16);
  if ( v10 != (v12 - v11 - 0x98000000000LL) >> 3 )
    a1 = v11 + 8 * v10;
  LODWORD(CurrentThread) = MiPteInShadowRange(a1 + 8);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v16 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_9;
      v18 = (v14 & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_9;
      v18 = (v14 & 1) == 0;
    }
    if ( !v18 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v15 = v14;
  if ( v16 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v15, v14);
  return (char)CurrentThread;
}
