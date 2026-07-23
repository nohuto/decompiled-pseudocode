/*
 * XREFs of MiWaitForVadDeletion @ 0x1402CB340
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x1400861C0 (MiObtainReferencedSecureVad.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCleanVad @ 0x140618088 (MiCleanVad.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  __int16 v7; // [rsp+28h] [rbp-50h] BYREF
  char v8; // [rsp+2Ah] [rbp-4Eh]
  int v9; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v10[6]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+60h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = 1;
    v9 = 0;
    v7 = 263;
    v8 = 6;
    v10[1] = v10;
    v10[0] = v10;
    MiInsertVadEvent(a1, &v6, 1LL, a4);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v7, 0x12u);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
