/*
 * XREFs of IopLiveDumpCorralDpc @ 0x140579690
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveProcessorControlState @ 0x1401BC070 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1401C5650 (RtlCaptureContext.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x14057A558 (IopLiveDumpProcessCorralStateChange.c)
 */

void __fastcall IopLiveDumpCorralDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v6; // edx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v7) = CurrentPrcb->Number;
  RtlCaptureContext(CurrentPrcb->Context);
  KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v6);
  do
    IopLiveDumpProcessCorralStateChange(DeferredContext, &v7);
  while ( HIDWORD(v7) != -1 );
}
