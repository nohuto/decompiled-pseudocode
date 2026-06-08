/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C002DD58
 * Callers:
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C00260E0 (AcpiCppcGuaranteedNotifyWorker.c)
 *     CpcNativeInterruptWorker @ 0x1C002DCE0 (CpcNativeInterruptWorker.c)
 * Callees:
 *     ReadGenAddrMaybeHidden @ 0x1C0002318 (ReadGenAddrMaybeHidden.c)
 *     ProcLibTracePccCapChange @ 0x1C0002894 (ProcLibTracePccCapChange.c)
 *     WPP_RECORDER_SF_s @ 0x1C000413C (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0027978 (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // si
  unsigned __int64 GenAddrMaybeHidden; // rbp
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 264);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 240);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 112);
      if ( *(_BYTE *)(v7 + 99) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0013418,
          0LL);
        if ( !*(_BYTE *)(v7 + 101)
          || (*(int (__fastcall **)(_QWORD))(qword_1C0013940 + 88))(*(_QWORD *)(qword_1C0013940 + 56)) >= 0
          && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C0013940 + 104))(*(_QWORD *)(qword_1C0013940 + 56), 0LL) >= 0 )
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
          GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v5, v8 + 56);
          if ( v9 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          v11 = *(_QWORD *)(v7 + 16);
          if ( GenAddrMaybeHidden > v11 )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x12u,
                (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
                a3);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            }
            v11 = GenAddrMaybeHidden;
          }
          if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 32) )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
          }
          v12 = *(_DWORD *)(v7 + 80);
          *(_QWORD *)(v7 + 56) = GenAddrMaybeHidden;
          if ( (unsigned int)(100 * GenAddrMaybeHidden / v11) > v12 )
            v12 = 100 * GenAddrMaybeHidden / v11;
          *(_DWORD *)(v7 + 84) = v12;
          if ( v12 != *(_DWORD *)(v5 + 724) )
          {
            ProcLibCapChange(v5, *(_DWORD *)(v5 + 448), *(_DWORD *)(v5 + 496), v12);
            ((void (__fastcall *)(__int64))qword_1C00137E8)(v5);
          }
          ProcLibTracePccCapChange(v5, v12);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C0013418);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x11u,
             (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
             a3);
  }
  return result;
}
