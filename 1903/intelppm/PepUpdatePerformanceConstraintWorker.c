/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x1C00382D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     PepNotifyPerfConstraints @ 0x1C000F7D0 (PepNotifyPerfConstraints.c)
 *     ProcLibCapChange @ 0x1C0022FA4 (ProcLibCapChange.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C002B330 (ProcLibTracePerfConstraintChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rbp
  __int64 v3; // rdi
  int *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = *((_QWORD *)DeviceExtension + 148);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 291, 0);
    v4 = (int *)(v3 + 28);
    PepNotifyPerfConstraints((__int64)DeviceExtension, (_DWORD *)(v3 + 28), (_DWORD *)(v3 + 24));
    v5 = *(_QWORD *)(v3 + 8);
    v6 = *(_DWORD *)(v3 + 28);
    if ( v6 > *(_DWORD *)(v5 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x29u,
          (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
        v5 = *(_QWORD *)(v3 + 8);
      }
      v6 = *(_DWORD *)(v5 + 4);
      *v4 = v6;
    }
    if ( v6 < *(_DWORD *)(v5 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x2Au,
          (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
        v5 = *(_QWORD *)(v3 + 8);
      }
      v6 = *(_DWORD *)(v5 + 12);
      *v4 = v6;
    }
    v7 = 100 * v6 / *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v3 + 32) = v7;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 112),
      *((_DWORD *)DeviceExtension + 124),
      v7);
    ((void (__fastcall *)(void *))qword_1C001B768)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v4, *(_DWORD *)(v3 + 24));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001B398);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x28u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids);
  }
}
