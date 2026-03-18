/*
 * XREFs of Controller_TelemetryReport @ 0x1C000E2D4
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1C000E620 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C0009144 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     TelemetryData_CloseHandle @ 0x1C0043158 (TelemetryData_CloseHandle.c)
 *     TelemetryData_CreateReport @ 0x1C00431A4 (TelemetryData_CreateReport.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1C004330C (TelemetryData_InsertTriageDataBlock.c)
 *     Controller_TelemetryAddControllerData @ 0x1C005B3F0 (Controller_TelemetryAddControllerData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x1C005B5C0 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x1C005B830 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     TelemetryData_SubmitReport @ 0x1C006338C (TelemetryData_SubmitReport.c)
 */

__int64 __fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 result; // rax
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Report; // rax
  void *v13; // rbx
  unsigned int i; // esi
  __int64 v15; // r14
  int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v19; // [rsp+38h] [rbp-59h] BYREF
  __int64 v20; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[64]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v22[16]; // [rsp+90h] [rbp-1h] BYREF

  result = Controller_TelemetryOkToGenerateReport(a1, a2, *(unsigned int *)(a3 + 16));
  if ( (_BYTE)result )
  {
    memset(pszDest, 0, sizeof(pszDest));
    v9 = *(_DWORD *)(a1 + 180) == 1;
    *(_QWORD *)&pszDest[40] = *(_QWORD *)(a3 + 24);
    *(_QWORD *)&pszDest[48] = *(_QWORD *)(a3 + 32);
    *(_QWORD *)&pszDest[56] = *(_QWORD *)(a3 + 40);
    *(_QWORD *)&pszDest[32] = a1;
    if ( v9 )
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 184));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 188));
      RtlStringCchPrintfA(&pszDest[10], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 192));
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 240));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 245));
      RtlStringCchPrintfA(&pszDest[10], 5uLL, "%s", (const char *)(a1 + 250));
    }
    RtlStringCchPrintfA(&pszDest[15], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 264));
    Report = TelemetryData_CreateReport(v11, v10, *(unsigned int *)(a3 + 16), pszDest);
    v13 = (void *)Report;
    if ( Report )
    {
      if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
        && (int)TelemetryData_InsertTriageDataBlock(v13, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
        && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
         || (int)TelemetryData_InsertTriageDataBlock(v13, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
      {
        Controller_TelemetryAddControllerData(a1, v13);
        if ( (int)TelemetryData_InsertTriageDataBlock(v13, &WPP_GLOBAL_Control, 8LL) >= 0
          && (!WPP_GLOBAL_Control || (int)TelemetryData_InsertTriageDataBlock(v13, WPP_GLOBAL_Control, 80LL) >= 0)
          && (int)imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v19, &v17, v22) >= 0
          && (!v19 || (int)TelemetryData_InsertTriageDataBlock(v13, v19, v17) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v13, *a4, 336LL) < 0 )
              break;
            v15 = *(_QWORD *)(*a4 + 64LL);
            if ( *(_QWORD *)(v15 + 8) == a1
              && ((int)TelemetryData_InsertTriageDataBlock(v13, *(_QWORD *)(*a4 + 64LL), 48LL) < 0
               || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v15 + 16), &v20, &v18, v22) < 0
               || (int)TelemetryData_InsertTriageDataBlock(v13, v20, v18) < 0) )
            {
              break;
            }
            ++i;
          }
          v16 = TelemetryData_SubmitReport(v13);
          if ( v16 >= 0 )
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          else
            WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0xDAu, (__int64)&Context.Logger + 4, v16);
        }
      }
      return TelemetryData_CloseHandle(v13);
    }
    else
    {
      return WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD9u, (__int64)&Context.Logger + 4);
    }
  }
  return result;
}
