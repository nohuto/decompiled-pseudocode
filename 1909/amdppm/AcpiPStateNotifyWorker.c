/*
 * XREFs of AcpiPStateNotifyWorker @ 0x1C0025BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0002644 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C0003218 (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C002370C (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C0027978 (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 264) & 0x70000000) != 0 )
  {
    if ( (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), (int *)&v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0013418,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, v6, *(unsigned int *)(v4 + 496), 100LL);
      ((void (__fastcall *)(__int64))qword_1C00137E8)(v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x4Fu,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 448);
  ProcLibTraceProcessorSpecificEvent(v4, &PPM_ETW_NOTIFY_80, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 648), v4 + 448);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C0013418);
  return result;
}
