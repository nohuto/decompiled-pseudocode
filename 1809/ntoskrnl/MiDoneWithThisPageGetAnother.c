/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1402C97E0
 * Callers:
 *     MiUpdateForkMaps @ 0x1402CAB08 (MiUpdateForkMaps.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 *     MiFinishLastForkPageTable @ 0x1402C9CF0 (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x1402CB3A4 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  __int16 v8; // ax
  unsigned int v9; // ebp
  __int64 v10; // r15
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  __int64 Page; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  volatile signed __int32 *v17; // [rsp+20h] [rbp-28h] BYREF
  __int16 v18; // [rsp+28h] [rbp-20h]
  unsigned __int16 v19; // [rsp+2Ah] [rbp-1Eh]

  v4 = a2 + 1280;
  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  MiInitializePageColorBase(v4, 0, (__int64)&v17);
  v8 = _InterlockedExchangeAdd(v17, 1u);
  v9 = v19 | (unsigned __int16)(v8 & v18);
  v10 = *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a3 + 1454));
  while ( 1 )
  {
    Page = MiGetPage(v10, v9, 0x302u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    MiUnlockWorkingSetExclusive(v4, a4, v14, v15);
    MiWaitForFreePage(v10);
    SharedVm = MiGetSharedVm(v4);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v12;
  }
  result = 6 * Page;
  *(_QWORD *)(8 * result - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
