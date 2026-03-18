/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1402E3994
 * Callers:
 *     MiUpdateForkMaps @ 0x1402E4DC0 (MiUpdateForkMaps.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiFinishLastForkPageTable @ 0x1402E3E90 (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, KIRQL a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  signed __int32 v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // r15
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  __int64 Page; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  volatile signed __int32 *v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]

  v4 = a2 + 1280;
  v5 = *a1;
  v19 = 0LL;
  v20 = 0LL;
  if ( v5 != -1 )
    MiFinishLastForkPageTable(a1, v5);
  MiInitializePageColorBase(v4, 0, (__int64)&v19);
  v9 = _InterlockedExchangeAdd(v19, 1u);
  v10 = HIDWORD(v20) | v9 & v20;
  v11 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a3 + 1454));
  while ( 1 )
  {
    Page = MiGetPage(v11, v10, 770LL);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v15) = a4;
    MiUnlockWorkingSetExclusive(v4, v15, v16, v17);
    MiWaitForFreePage(v11);
    SharedVm = MiGetSharedVm(v4);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v13;
  }
  result = 6 * Page;
  *(_QWORD *)(8 * result - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
