/*
 * XREFs of PopFxHandleDirectedPowerTransition @ 0x1402D838C
 * Callers:
 *     PopFxDirectedPowerTransitionWorker @ 0x1402D81B0 (PopFxDirectedPowerTransitionWorker.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402D7CAC (PopFxCompleteDirectedPowerTransition.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1402E0F28 (PopDiagTraceFxDeviceDirectedTransition.c)
 */

void __fastcall PopFxHandleDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  bool v5; // bl
  __int64 v6; // rdx

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v4 != v2 );
  v5 = (v2 & 0x1000) != 0;
  LOBYTE(v3) = v5;
  PopDiagTraceFxDeviceDirectedTransition(*(_QWORD *)(BugCheckParameter3 + 48), v3);
  LOBYTE(v6) = v5;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(BugCheckParameter3 + 176))(
    *(_QWORD *)(BugCheckParameter3 + 184),
    v6,
    0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 960), 0xFFFFFFFF) == 1 )
    PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  else
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
