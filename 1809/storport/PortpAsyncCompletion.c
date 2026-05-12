/*
 * XREFs of PortpAsyncCompletion @ 0x1C0021FE0
 * Callers:
 *     <none>
 * Callees:
 *     PortpCompleteRequestIrp @ 0x1C0022034 (PortpCompleteRequestIrp.c)
 */

__int64 __fastcall PortpAsyncCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v5; // cl
  __int64 v7; // rax
  __int64 v8; // rbx
  KIRQL Irql; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  v5 = 1;
  if ( _InterlockedExchange64((volatile __int64 *)(v3 + 104), 0LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v3 + 184) + 32LL) = 0LL;
  }
  else
  {
    IoAcquireCancelSpinLock(&Irql);
    v7 = *(_QWORD *)(v3 + 184);
    v8 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    v5 = v8 == 0;
  }
  if ( v5 )
    PortpCompleteRequestIrp(*(_QWORD *)(a3 + 16), a3);
  return 3221225494LL;
}
