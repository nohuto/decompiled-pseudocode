/*
 * XREFs of MiAllocateTopLevelPage @ 0x140646B08
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x14064495C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     MiSetPageTablePfnBuddy @ 0x140090FDC (MiSetPageTablePfnBuddy.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiSetPfnLink @ 0x1400B8CB8 (MiSetPfnLink.c)
 *     MiGetNextPageColor @ 0x1400BAD8C (MiGetNextPageColor.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *ProcessPartition; // rbx
  int v6; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 Page; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // edx
  unsigned __int64 *v17; // r8
  int v19; // r11d
  int v20; // r11d
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v21[0] = 0LL;
  v21[1] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1280, v6, (__int64)v21);
  NextPageColor = MiGetNextPageColor((__int64)v21);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 770LL);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v11 = (_QWORD *)(48 * Page - 0x58000000000LL);
  MiSetPfnLink(v11, 0LL);
  ValidPte = MiMakeValidPte(0LL, v10, -1879048186);
  *v11 = 0LL;
  v11[5] ^= (v10 ^ v11[5]) & 0xFFFFFFFFFLL;
  v13 = ValidPte & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPageTablePfnBuddy((__int64)v11, a1, 0);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512);
  MiMakeValidPte(0LL, v10, -1610612732);
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = v19;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_4;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_4;
    }
    if ( ((unsigned __int8)v14 & (unsigned __int8)v19) != 0 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = v14;
  if ( v15 )
    MiWritePteShadow(a2);
  if ( MiPteInShadowRange(((__int64)(a2 << 25) >> 16) + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = v20;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_7;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_7;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v20) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v17 = v13;
  if ( v16 )
    MiWritePteShadow((__int64)v17);
  return v10;
}
