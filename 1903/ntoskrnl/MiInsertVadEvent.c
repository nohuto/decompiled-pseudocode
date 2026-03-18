/*
 * XREFs of MiInsertVadEvent @ 0x1400727FC
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402E5678 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x140609DB0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x14066FCC8 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406EA100 (MiCreateRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x14089922C (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140899B54 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rsi
  LONG *v5; // rdi
  _KPROCESS *Process; // rbx
  char SecureHandle; // al
  unsigned __int16 *v8; // rbx
  KIRQL v9; // al
  __int64 result; // rax

  v3 = a2;
  if ( a3 == 1 )
  {
    v5 = &dword_140467200;
    Process = KeGetCurrentThread()->ApcState.Process;
    SecureHandle = Process[1].SecureState.SecureHandle;
    v8 = &Process[1].IdealNode[6];
    if ( (SecureHandle & 7) != 2 )
      v5 = (LONG *)(v8 + 96);
    v9 = ExAcquireSpinLockExclusive(v5);
    v5[1] = 0;
    LOBYTE(a2) = v9;
  }
  else
  {
    LOBYTE(a2) = 17;
    v8 = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *v3 = result;
  *(_QWORD *)(a1 + 56) = v3;
  if ( (_BYTE)a2 != 17 )
    return MiUnlockWorkingSetExclusive(v8, a2);
  return result;
}
