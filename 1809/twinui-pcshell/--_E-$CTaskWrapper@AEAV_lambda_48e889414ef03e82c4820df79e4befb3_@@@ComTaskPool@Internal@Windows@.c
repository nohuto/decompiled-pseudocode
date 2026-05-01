/*
 * XREFs of ??_E?$CTaskWrapper@AEAV_lambda_48e889414ef03e82c4820df79e4befb3_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18007A1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_48e889414ef03e82c4820df79e4befb3_ &>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
