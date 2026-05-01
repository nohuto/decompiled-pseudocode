/*
 * XREFs of ?GetRegistration@WindowWrapperBase@@UEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@XZ @ 0x18006F510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowWrapperBase::GetRegistration(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 264) + 208LL))(*(_QWORD *)(a1 + 264));
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 328);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = *(_QWORD *)(a1 + 328);
  }
  *a2 = *(_QWORD *)(a1 + 320);
  a2[1] = v4;
  return a2;
}
