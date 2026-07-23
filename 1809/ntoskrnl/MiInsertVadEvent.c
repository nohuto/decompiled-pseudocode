/*
 * XREFs of MiInsertVadEvent @ 0x140087B20
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
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
    v6 = &dword_14043C7C0;
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
