/*
 * XREFs of ndisCpuHotAddHandler @ 0x1C00EA6F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     ndisDmaAddCpuNotify @ 0x1C004C37C (ndisDmaAddCpuNotify.c)
 *     ndisPeriodicReceivesAddCpu @ 0x1C0050588 (ndisPeriodicReceivesAddCpu.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  unsigned int v5; // r8d
  int v6; // eax
  NTSTATUS v7; // ebx

  if ( ChangeContext->State )
  {
    if ( ChangeContext->State == KeProcessorAddCompleteNotify )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_D(0x13u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, *OperationStatus);
      ndisPeriodicReceivesAddCpu(ChangeContext->NtNumber);
      v5 = 0;
    }
    else
    {
      if ( ChangeContext->State != KeProcessorAddFailureNotify )
        return;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_D(0x14u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, *OperationStatus);
      v5 = -1073741823;
    }
    ndisDmaAddCpuNotify(0, ChangeContext->NtNumber, v5);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_dd(0x11u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, *OperationStatus, ChangeContext->NtNumber);
    v6 = ndisDmaAddCpuNotify(1, ChangeContext->NtNumber, *OperationStatus);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 3u )
        WPP_SF_D(0x12u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v6);
      *OperationStatus = v7;
    }
  }
}
