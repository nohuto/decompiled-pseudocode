/*
 * XREFs of ?ndisTempRefTimerDpc@@YAXPEAX000@Z @ 0x1C0079370
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 */

void __fastcall ndisTempRefTimerDpc(
        PVOID SystemSpecific1,
        _QWORD *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 v4; // rbx

  v4 = FunctionContext[562];
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v4);
  if ( *(_BYTE *)(v4 + 280) == 1 )
  {
    ndisDereferenceMiniport((__int64)FunctionContext, 2u);
  }
  else
  {
    *(_BYTE *)(v4 + 280) = 1;
    ndisScheduleWorkItemInternal(v4 + 200);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v4);
}
