/*
 * XREFs of MiInsertVadEvent @ 0x140072A6C
 * Callers:
 *     MiWaitForVadDeletion @ 0x1402E53D8 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x14060B8C0 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x14067F6E4 (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406EB1B8 (MiCreateRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x140898A4C (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
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
    v5 = &dword_140466F00;
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
