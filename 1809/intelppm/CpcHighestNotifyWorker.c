/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C002AA24
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C002AD00 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C002DE20 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002D8C (WPP_RECORDER_SF_s.c)
 *     EnumerateNextDevice @ 0x1C0002F1C (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002F5C (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004318 (ReadGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00080E4 (ProcLibTraceProcessorSpecificEvent.c)
 *     GetPerfDomain @ 0x1C0023648 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  char v10; // r14
  unsigned __int64 GenAddrMaybeHidden; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16[4]; // [rsp+38h] [rbp-C8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-A8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v19[44]; // [rsp+80h] [rbp-80h] BYREF

  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 264);
  if ( (result & 0x8000000) == 0 )
  {
    v7 = 20;
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             v7,
             (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
             a3);
  }
  v8 = *(_QWORD *)(v5 + 240);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( *(_BYTE *)(v9 + 8) == 126 )
    {
      v7 = 21;
      return WPP_RECORDER_SF_s(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               1u,
               v7,
               (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
               a3);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A398,
      0LL);
    if ( !*(_BYTE *)(v8 + 102)
      || (*(int (__fastcall **)(_QWORD))(qword_1C001A8B0 + 88))(*(_QWORD *)(qword_1C001A8B0 + 56)) >= 0
      && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C001A8B0 + 104))(*(_QWORD *)(qword_1C001A8B0 + 56), 0LL) >= 0 )
    {
      if ( *(_BYTE *)(v9 + 8) != 127 || *(_BYTE *)(v5 + 78) )
      {
        v10 = 0;
      }
      else
      {
        KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v10 = 1;
      }
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v5, (char *)(v9 + 8));
      if ( v10 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v12 = *(_QWORD *)(v8 + 16);
      if ( GenAddrMaybeHidden < v12 )
      {
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x16u,
          (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
          a3);
        GenAddrMaybeHidden = *(_QWORD *)(v8 + 16);
        v12 = GenAddrMaybeHidden;
      }
      *(_QWORD *)(v8 + 8) = GenAddrMaybeHidden;
      v13 = 100 * GenAddrMaybeHidden / v12;
      *(_DWORD *)(v8 + 68) = v13;
      if ( (unsigned int)v13 > *(_DWORD *)(v8 + 72) )
        *(_DWORD *)(v8 + 72) = v13;
      memset(v19, 0, sizeof(v19));
      v19[0] = *(_DWORD *)(v8 + 68);
      KeInitializeAffinityEx(&v19[2]);
      GetPerfDomain(v5, (__int64)v16, &v15);
      ResetEnumerationContext(v16);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v16, &v15) )
      {
        v14 = v15;
        KeAddProcessorAffinityEx(&v19[2], *(unsigned int *)(v15 + 56));
        if ( v5 != v14 )
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 240) + 8LL) = *(_QWORD *)(v8 + 8);
          *(_DWORD *)(*(_QWORD *)(v14 + 240) + 68LL) = *(_DWORD *)(v8 + 68);
          *(_DWORD *)(*(_QWORD *)(v14 + 240) + 72LL) = *(_DWORD *)(v8 + 72);
        }
      }
      ((void (__fastcall *)(_DWORD *))qword_1C001A5A0)(v19);
      ProcLibTraceProcessorSpecificEvent(v5, &PPM_ETW_NOTIFY_85, 0, 0LL);
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C001A398);
  }
  return result;
}
