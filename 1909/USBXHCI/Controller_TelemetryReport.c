/*
 * XREFs of Controller_TelemetryReport @ 0x1C0010A5C
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C0010DF0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     TelemetryData_CloseHandle @ 0x1C0048B9C (TelemetryData_CloseHandle.c)
 *     TelemetryData_CreateReport @ 0x1C0048BE8 (TelemetryData_CreateReport.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C0048D50 (TelemetryData_InsertTriageDataBlock.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0062970 (Controller_TelemetryAddControllerData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C0062B4C (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C0062E28 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     TelemetryData_SubmitReport @ 0x1C006B68C (TelemetryData_SubmitReport.c)
 */

_UNKNOWN **__fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 v9; // r8
  _UNKNOWN **result; // rax
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 Report; // rax
  void *v16; // rbx
  unsigned int i; // esi
  __int64 v18; // r15
  int v19; // ecx
  unsigned int v20; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v22; // [rsp+38h] [rbp-59h] BYREF
  __int64 v23; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[64]; // [rsp+50h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-1h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  v9 = *(unsigned int *)(a3 + 16);
  v25[0] = 0LL;
  v25[1] = 0LL;
  result = (_UNKNOWN **)Controller_TelemetryOkToGenerateReport(a1, a2, v9);
  if ( (_BYTE)result )
  {
    v11 = *(_QWORD *)(a3 + 24);
    memset(pszDest, 0, 32);
    v12 = *(_DWORD *)(a1 + 244) == 1;
    *(_QWORD *)&pszDest[40] = v11;
    *(_QWORD *)&pszDest[48] = *(_QWORD *)(a3 + 32);
    *(_QWORD *)&pszDest[56] = *(_QWORD *)(a3 + 40);
    *(_QWORD *)&pszDest[32] = a1;
    if ( v12 )
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 248));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 252));
      RtlStringCchPrintfA(&pszDest[10], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 256));
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 304));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 309));
      RtlStringCchPrintfA(&pszDest[10], 5uLL, "%s", (const char *)(a1 + 314));
    }
    RtlStringCchPrintfA(&pszDest[15], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 328));
    Report = TelemetryData_CreateReport(v14, v13, *(unsigned int *)(a3 + 16), pszDest);
    v16 = (void *)Report;
    if ( Report )
    {
      if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
        && (int)TelemetryData_InsertTriageDataBlock(v16, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
        && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
         || (int)TelemetryData_InsertTriageDataBlock(v16, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
      {
        Controller_TelemetryAddControllerData(a1, v16);
        if ( (int)TelemetryData_InsertTriageDataBlock(v16, &WPP_GLOBAL_Control, 8LL) >= 0
          && (!WPP_GLOBAL_Control || (int)TelemetryData_InsertTriageDataBlock(v16, WPP_GLOBAL_Control, 80LL) >= 0)
          && (int)imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v22, &v20, v25) >= 0
          && (!v22 || (int)TelemetryData_InsertTriageDataBlock(v16, v22, v20) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v16, *a4, 336LL) < 0 )
              break;
            v18 = *(_QWORD *)(*a4 + 64LL);
            if ( *(_QWORD *)(v18 + 8) == a1
              && ((int)TelemetryData_InsertTriageDataBlock(v16, *(_QWORD *)(*a4 + 64LL), 104LL) < 0
               || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v18 + 16), &v23, &v21, v25) < 0
               || (int)TelemetryData_InsertTriageDataBlock(v16, v23, v21) < 0) )
            {
              break;
            }
            ++i;
          }
          v19 = TelemetryData_SubmitReport(v16);
          if ( v19 >= 0 )
          {
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0xDDu, (__int64)&Context.Logger + 4, v19);
          }
        }
      }
      return (_UNKNOWN **)TelemetryData_CloseHandle(v16);
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (_UNKNOWN **)WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xDCu, (__int64)&Context.Logger + 4);
    }
  }
  return result;
}
