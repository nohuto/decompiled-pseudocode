/*
 * XREFs of ProcLibTraceProcessorSpecificEvent @ 0x1C0002644
 * Callers:
 *     ProcLibTracePccCapChange @ 0x1C0002894 (ProcLibTracePccCapChange.c)
 *     PccInitiateExecuteCallback @ 0x1C000D8F0 (PccInitiateExecuteCallback.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025BE0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C0025D30 (AcpiTStateNotifyWorker.c)
 *     AcpiCStateNotifyWorker @ 0x1C0025E80 (AcpiCStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 *     CpcHighestNotifyWorker @ 0x1C002E008 (CpcHighestNotifyWorker.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00028C0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceProcessorSpecificEvent(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4)
{
  int ProcessorNumber; // eax
  ULONG v9; // r9d
  int v11; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  char *v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  __int64 v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  v11 = 0;
  LOBYTE(ProcessorNumber) = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, a2);
  if ( (_BYTE)ProcessorNumber )
  {
    ProcessorNumber = ProcLibGetProcessorNumber(a1, &v11);
    if ( ProcessorNumber >= 0 )
    {
      UserData.Reserved = 0;
      v15 = 0;
      v9 = 2;
      UserData.Ptr = (unsigned __int64)&v11;
      v13 = (char *)&v11 + 2;
      UserData.Size = 2;
      v14 = 1;
      if ( a4 && a3 )
      {
        v18 = 0;
        v9 = 3;
        v16 = a4;
        v17 = a3;
      }
      LOBYTE(ProcessorNumber) = EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, a2, 0LL, v9, &UserData);
    }
  }
  return ProcessorNumber;
}
