/*
 * XREFs of ACPIInternalEvaluateOST @ 0x1C0054E4C
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 *     ACPICheckModuleStarted @ 0x1C0056AAC (ACPICheckModuleStarted.c)
 *     ACPIInitShutdownInProgress @ 0x1C005C720 (ACPIInitShutdownInProgress.c)
 *     ACPINotifyOsShutdownWorker @ 0x1C005C860 (ACPINotifyOsShutdownWorker.c)
 *     ACPIRootEvent @ 0x1C005C990 (ACPIRootEvent.c)
 *     AcpiShutdownNotificationTimerWorkItem @ 0x1C005D000 (AcpiShutdownNotificationTimerWorkItem.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009FA60 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIInternalEvaluateOST(__int64 a1, int a2, int a3)
{
  int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx
  _QWORD v15[16]; // [rsp+50h] [rbp-A8h] BYREF

  v6 = -1073741823;
  v7 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1414745951);
  if ( v7 )
  {
    memset(v15, 0, 0x78uLL);
    LODWORD(v15[7]) = a3;
    WORD1(v15[0]) = 1;
    LODWORD(v15[2]) = a2;
    WORD1(v15[10]) = 2;
    WORD1(v15[5]) = 1;
    v15[14] = 0LL;
    v6 = AMLIAsyncEvalObject(v7, 0LL, 3u, v15, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v7);
    if ( v6 == 259 )
      v6 = 0;
    if ( v6 < 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = (const char *)&unk_1C006E28A;
      v10 = (const char *)&unk_1C006E28A;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
        v6,
        a1,
        v9,
        v10);
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = (const char *)&unk_1C006E28A;
    v13 = (const char *)&unk_1C006E28A;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(const char **)(a1 + 560);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_c50cf807c7783e6199ec897531ccbc60_Traceguids,
      a1,
      v12,
      v13);
  }
  return (unsigned int)v6;
}
