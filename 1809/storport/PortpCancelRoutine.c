/*
 * XREFs of PortpCancelRoutine @ 0x1C0052DC0
 * Callers:
 *     <none>
 * Callees:
 *     PortpCompleteRequestIrp @ 0x1C0022034 (PortpCompleteRequestIrp.c)
 */

void __fastcall PortpCancelRoutine(__int64 a1, __int64 a2)
{
  PIRP *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  KIRQL Irql; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(PIRP **)(*(_QWORD *)(a2 + 184) + 32LL);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
  if ( v3 )
  {
    IoCancelIrp(v3[1]);
    IoAcquireCancelSpinLock(&Irql);
    v4 = *(_QWORD *)(a2 + 184);
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    IoReleaseCancelSpinLock(Irql);
    if ( !v5 )
      PortpCompleteRequestIrp(a2, v3, v6);
  }
}
