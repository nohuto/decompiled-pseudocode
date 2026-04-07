/*
 * XREFs of ??_ECVisualProxy@@MEAAPEAXI@Z @ 0x1800161E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CVisualProxy *__fastcall CVisualProxy::`vector deleting destructor'(CVisualProxy *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CResourceProxy::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
