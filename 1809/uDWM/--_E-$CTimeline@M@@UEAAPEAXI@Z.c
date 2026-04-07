/*
 * XREFs of ??_E?$CTimeline@M@@UEAAPEAXI@Z @ 0x180021490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CTimeline<float>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  __int64 v4; // rcx

  *a1 = &CTimelineBase::`vftable';
  v4 = a1[8];
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    a1[8] = 0LL;
  }
  *a1 = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
