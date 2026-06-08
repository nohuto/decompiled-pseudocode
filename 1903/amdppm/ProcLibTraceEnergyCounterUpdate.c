/*
 * XREFs of ProcLibTraceEnergyCounterUpdate @ 0x1C0002910
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C00010B0 (ComputeProcessorEnergyUsingMsr.c)
 *     ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001160 (ComputeHyperThreadedProcessorEnergyUsingMsr.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00028C0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceEnergyCounterUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  int ProcessorNumber; // eax
  unsigned __int8 Number; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int16 Group; // [rsp+34h] [rbp-15h] BYREF
  struct _PROCESSOR_NUMBER v8; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  __int64 *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]
  __int64 v20; // [rsp+C0h] [rbp+77h] BYREF

  v20 = a3;
  v8 = 0;
  v9 = -1073675622;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(
                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                              &PPM_ETW_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v8);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      Group = v8.Group;
      Number = v8.Number;
      UserData.Ptr = (unsigned __int64)&Group;
      p_Number = &Number;
      v14 = &v9;
      v17 = &v20;
      UserData.Size = 2;
      v12 = 1;
      v15 = 4;
      v18 = 8;
      LOBYTE(ProcessorNumber) = EtwWrite(
                                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                  &PPM_ETW_ENERGY_COUNTER_UPDATE,
                                  0LL,
                                  4u,
                                  &UserData);
    }
  }
  return ProcessorNumber;
}
