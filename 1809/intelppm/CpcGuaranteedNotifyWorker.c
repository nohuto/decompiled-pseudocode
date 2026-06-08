/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C002A7B0
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C002AD00 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C002DE00 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002D8C (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHidden @ 0x1C0004318 (ReadGenAddrMaybeHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePccCapChange @ 0x1C0007F88 (ProcLibTracePccCapChange.c)
 *     ProcLibCapChange @ 0x1C0020310 (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // r14
  unsigned __int64 GenAddrMaybeHidden; // rbp
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 264);
  if ( (result & 0x8000000) == 0 )
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x11u,
             (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
             a3);
  v7 = *(_QWORD *)(v5 + 240);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 112);
    if ( *(_BYTE *)(v7 + 99) )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A398,
        0LL);
      if ( !*(_BYTE *)(v7 + 101)
        || (*(int (__fastcall **)(_QWORD))(qword_1C001A8B0 + 88))(*(_QWORD *)(qword_1C001A8B0 + 56)) >= 0
        && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C001A8B0 + 104))(*(_QWORD *)(qword_1C001A8B0 + 56), 0LL) >= 0 )
      {
        if ( *(_BYTE *)(v8 + 56) != 127 || *(_BYTE *)(v5 + 78) )
        {
          v9 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v9 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v5, (char *)(v8 + 56));
        if ( v9 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v11 = *(_QWORD *)(v7 + 16);
        if ( GenAddrMaybeHidden > v11 )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x12u,
            (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
            a3);
          GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
          v11 = GenAddrMaybeHidden;
        }
        if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 32) )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            1u,
            0x13u,
            (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
            a3);
          v11 = *(_QWORD *)(v7 + 16);
          GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
        }
        *(_QWORD *)(v7 + 56) = GenAddrMaybeHidden;
        v12 = 100 * GenAddrMaybeHidden / v11;
        if ( v12 <= *(_DWORD *)(v7 + 80) )
          v12 = *(_DWORD *)(v7 + 80);
        *(_DWORD *)(v7 + 84) = v12;
        if ( v12 != *(_DWORD *)(v5 + 708) )
        {
          ProcLibCapChange(v5, *(_DWORD *)(v5 + 432), *(_DWORD *)(v5 + 480), v12);
          ((void (__fastcall *)(__int64))qword_1C001A758)(v5);
        }
        ProcLibTracePccCapChange(v5, v12);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C001A398);
    }
  }
  return result;
}
