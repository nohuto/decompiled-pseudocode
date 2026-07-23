/*
 * XREFs of sub_1800D8220 @ 0x1800D8220
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7B10 (RtlSetProcessDebugInformation.c)
 */

void __fastcall __noreturn sub_1800D8220(_RTL_DEBUG_INFORMATION *BaseAddress)
{
  ULONG_PTR ViewBaseDelta; // rcx
  PRTL_PROCESS_VERIFIER_OPTIONS VerifierOptions; // rax
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx

  ViewBaseDelta = BaseAddress->ViewBaseDelta;
  if ( ViewBaseDelta )
  {
    VerifierOptions = BaseAddress->VerifierOptions;
    if ( VerifierOptions )
      BaseAddress->VerifierOptions = (PRTL_PROCESS_VERIFIER_OPTIONS)((char *)VerifierOptions - ViewBaseDelta);
    BackTraces = BaseAddress->BackTraces;
    if ( BackTraces )
      BaseAddress->BackTraces = (PRTL_PROCESS_BACKTRACES)((char *)BackTraces - ViewBaseDelta);
  }
  v5 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, BaseAddress->Flags, BaseAddress);
  BaseAddress->ViewBaseTarget = 0LL;
  v6 = v5;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  RtlExitUserThread(v6);
}
