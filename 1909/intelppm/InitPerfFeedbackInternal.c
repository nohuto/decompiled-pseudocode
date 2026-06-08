/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C0033AB4
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C002F7F0 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C00354F0 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     InitCommonPerfStateContext @ 0x1C00241F8 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rbx
  int PerfDomain; // r13d
  char *PoolWithTag; // rax
  char *v6; // rsi
  int v7; // edi
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  char *v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r14
  char *v16; // r11
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v20[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+50h] BYREF

  memset(v20, 0, sizeof(v20));
  v3 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B398,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v20, &v22);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * PerfDomain), 0x72637250u);
  v6 = PoolWithTag;
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, (unsigned int)(80 * PerfDomain)),
        v8 = (32 * PerfDomain + 447) & 0xFFFFFFF8,
        v9 = (v8 + 31) & 0xFFFFFFF8,
        v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 8 * PerfDomain, 0x72637250u),
        (v3 = v10) == 0LL) )
  {
    v7 = -1073741670;
    goto LABEL_24;
  }
  memset(v10, 0, v9 + 8 * PerfDomain);
  if ( *(_BYTE *)(a1 + 1122) )
    *((_QWORD *)v3 + 48) = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 264) & 0x10000000000LL) != 0 )
  {
    *((_QWORD *)v3 + 49) = PepParkMask;
    *((_QWORD *)v3 + 50) = PepPerfCheckComplete;
    *((_QWORD *)v3 + 9) = *(_QWORD *)(a1 + 1104);
  }
  *(_DWORD *)v3 = 62;
  *((_QWORD *)v3 + 52) = v3 + 440;
  v11 = v3 + 20;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 4) = PerfDomain;
  *((_QWORD *)v3 + 51) = &v3[v8];
  *((_DWORD *)v3 + 9) = 1;
  *((_QWORD *)v3 + 53) = &v3[v9];
  *((_WORD *)v3 + 2) = v22;
  *((_QWORD *)v3 + 42) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 43) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 41) = PerfSelectionFeedback;
  *((_WORD *)v3 + 3) = 1;
  v3[52] = 1;
  *((_DWORD *)v3 + 6) = 100;
  *((_DWORD *)v3 + 7) = 100;
  *((_DWORD *)v3 + 8) = 100;
  *((_QWORD *)v3 + 7) = 100LL;
  *((_QWORD *)v3 + 8) = 100LL;
  if ( (int)GetRegistryDwordValueNoDefault(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              (__int64)(v3 + 20)) < 0 )
  {
    *v11 = 0;
LABEL_11:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids);
    *(_QWORD *)(a1 + 264) &= ~0x4000000uLL;
    v7 = -1073741823;
    goto LABEL_24;
  }
  if ( !*((_DWORD *)v3 + 5) )
    goto LABEL_11;
  v12 = *(_QWORD *)(a1 + 336);
  if ( v12 )
    *((_QWORD *)v3 + 32) = v12;
  v13 = *((_QWORD *)v3 + 51);
  *(_DWORD *)(v13 + 12) = 0;
  *(_QWORD *)v13 = PerfReadWrappingCounter;
  *(_DWORD *)(v13 + 8) = 100;
  *(_WORD *)(v13 + 16) = 257;
  v14 = *((_QWORD *)v3 + 52);
  v15 = (_QWORD *)*((_QWORD *)v3 + 53);
  ResetEnumerationContext(v20);
  if ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
  {
    v16 = v6 + 56;
    do
    {
      InitCommonPerfStateContext(v22, (_QWORD *)v16 - 7, v14, 100, 0);
      *(_DWORD *)(v17 + 16) = *v11;
      v14 += 32LL;
      *(_QWORD *)v17 = *(_QWORD *)(v18 + 328);
      *v15++ = v17 - 48;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) );
  }
  v7 = a2(v3, v9 + 8 * PerfDomain);
  if ( v7 >= 0 )
  {
    ResetEnumerationContext(v20);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v22) )
    {
      *(_QWORD *)(v22 + 224) = v6;
      v6 += 80;
    }
    v6 = 0LL;
    v7 = 0;
  }
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B398);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return (unsigned int)v7;
}
