/*
 * XREFs of ?dtor$1@?0??wait_for@_Condition_variable@details@Concurrency@@QEAA_NAEAVcritical_section@3@I@Z@4HA @ 0x18012E8B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall `Concurrency::details::_Condition_variable::wait_for'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a2 + 64);
  *result = 0;
  return result;
}
