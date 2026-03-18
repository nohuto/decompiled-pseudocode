/*
 * XREFs of PopFxDeliverDevicePowerRequired @ 0x140181BC0
 * Callers:
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140181040 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeviceWork @ 0x1402F2DC0 (PopFxDeviceWork.c)
 * Callees:
 *     PopFxCompleteDevicePowerRequired @ 0x1400E0654 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400E10E4 (PopDiagTraceFxDevicePowerRequirement.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxDeliverDevicePowerRequired(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
  {
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(BugCheckParameter2 + 48), 0, 1u);
    v4 = *(void (__fastcall **)(_QWORD))(BugCheckParameter2 + 136);
    if ( v4 )
      v4(*(_QWORD *)(BugCheckParameter2 + 192));
    else
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFBF);
  }
  return PopFxCompleteDevicePowerRequired(BugCheckParameter2, a2);
}
