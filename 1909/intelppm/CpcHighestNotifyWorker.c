/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C002CAA0
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C002CDE0 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C0030410 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0003520 (WPP_RECORDER_SF_s.c)
 *     EnumerateNextDevice @ 0x1C0003934 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003974 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000805C (ProcLibTraceProcessorSpecificEvent.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00083A4 (ReadGenAddrMaybeHidden.c)
 *     GetPerfDomain @ 0x1C0024474 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rsi
  char v11; // r14
  unsigned __int64 GenAddrMaybeHidden; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17[4]; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v20[44]; // [rsp+80h] [rbp-80h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  memset(v17, 0, sizeof(v17));
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( a2 )
    IoFreeWorkItem(a2);
  v6 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v6 + 264);
  if ( (result & 0x8000000) == 0 )
  {
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v8 = 20;
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             v8,
             (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
             a3);
  }
  v9 = *(_QWORD *)(v6 + 240);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 112);
    if ( *(_BYTE *)(v10 + 8) == 126 )
    {
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 21;
        return WPP_RECORDER_SF_s(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 2u,
                 1u,
                 v8,
                 (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
                 a3);
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001B398,
        0LL);
      if ( !*(_BYTE *)(v9 + 102)
        || (*(int (__fastcall **)(_QWORD))(qword_1C001B8C0 + 88))(*(_QWORD *)(qword_1C001B8C0 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C001B8C0 + 104))(*(_QWORD *)(qword_1C001B8C0 + 56), 0LL) >= 0 )
      {
        if ( *(_BYTE *)(v10 + 8) != 127 || *(_BYTE *)(v6 + 78) )
        {
          v11 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v6 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v11 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v6, (char *)(v10 + 8));
        if ( v11 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v13 = *(_QWORD *)(v9 + 16);
        if ( GenAddrMaybeHidden < v13 )
        {
          GenAddrMaybeHidden = *(_QWORD *)(v9 + 16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x16u,
              (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
              a3);
            GenAddrMaybeHidden = *(_QWORD *)(v9 + 16);
          }
          v13 = GenAddrMaybeHidden;
        }
        *(_QWORD *)(v9 + 8) = GenAddrMaybeHidden;
        v14 = 100 * GenAddrMaybeHidden / v13;
        *(_DWORD *)(v9 + 68) = v14;
        if ( (unsigned int)v14 > *(_DWORD *)(v9 + 72) )
          *(_DWORD *)(v9 + 72) = v14;
        v20[0] = 100 * GenAddrMaybeHidden / v13;
        KeInitializeAffinityEx(&v20[2]);
        GetPerfDomain(v6, (__int64)v17, &v16);
        ResetEnumerationContext(v17);
        while ( !(unsigned int)EnumerateNextDevice((__int64)v17, &v16) )
        {
          v15 = v16;
          KeAddProcessorAffinityEx(&v20[2], *(unsigned int *)(v16 + 56));
          if ( v6 != v15 )
          {
            *(_QWORD *)(*(_QWORD *)(v15 + 240) + 8LL) = *(_QWORD *)(v9 + 8);
            *(_DWORD *)(*(_QWORD *)(v15 + 240) + 68LL) = *(_DWORD *)(v9 + 68);
            *(_DWORD *)(*(_QWORD *)(v15 + 240) + 72LL) = *(_DWORD *)(v9 + 72);
          }
        }
        ((void (__fastcall *)(_DWORD *))qword_1C001B5B0)(v20);
        ProcLibTraceProcessorSpecificEvent(v6, &PPM_ETW_NOTIFY_85, 0, 0LL);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C001B398);
    }
  }
  return result;
}
