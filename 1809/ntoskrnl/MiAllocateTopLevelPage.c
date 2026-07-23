/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406D2E6C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406D2D8C (MiAllocateProcessShadow.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
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
  int v16; // r11d
  int v17; // edx
  unsigned __int64 *v18; // r8
  int v19; // r11d
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1280, v6, (__int64)v21);
  NextPageColor = MiGetNextPageColor((__int64)v21);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 0x302u);
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
      v15 = v16;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_11;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_11;
    }
    if ( ((unsigned __int8)v14 & (unsigned __int8)v16) != 0 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_11:
  *(_QWORD *)a2 = v14;
  if ( v15 )
    MiWritePteShadow(a2, v14);
  if ( MiPteInShadowRange(((__int64)(a2 << 25) >> 16) + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = v19;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_20;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
    {
      goto LABEL_20;
    }
    if ( ((unsigned __int8)v13 & (unsigned __int8)v19) != 0 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_20:
  *v18 = v13;
  if ( v17 )
    MiWritePteShadow((__int64)v18, v13);
  return v10;
}
