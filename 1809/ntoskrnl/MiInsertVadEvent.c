/*
 * XREFs of MiInsertVadEvent @ 0x140087B30
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402CB050 (MiWaitForVadDeletion.c)
 *     MiAddSecureEntry @ 0x1405F3490 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiCreateVadEventBitmap @ 0x1406961A8 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406CA9E4 (MiCreateRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14085C6D8 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x14085D048 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  LONG *v6; // rdi
  _KPROCESS *Process; // rbx
  char Flink; // al
  __int64 v9; // rbx
  KIRQL v10; // al
  unsigned __int8 v11; // dl

  if ( (_DWORD)a3 == 1 )
  {
    v6 = &dword_14043B700;
    Process = KeGetCurrentThread()->ApcState.Process;
    Flink = (char)Process[2].Header.WaitListHead.Flink;
    v9 = (__int64)&Process[1].IdealNode[12];
    if ( (Flink & 7) != 2 )
      v6 = (LONG *)(v9 + 192);
    v10 = ExAcquireSpinLockExclusive(v6);
    v6[1] = 0;
    v11 = v10;
  }
  else
  {
    v11 = 17;
    v9 = 0LL;
  }
  *a2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = a2;
  if ( v11 != 17 )
    MiUnlockWorkingSetExclusive(v9, v11, a3, a4);
}
