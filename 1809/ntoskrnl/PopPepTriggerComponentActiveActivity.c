/*
 * XREFs of PopPepTriggerComponentActiveActivity @ 0x140134890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PopPepTriggerComponentActiveActivity(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) |= 1u;
    result = *(_DWORD **)(a2 + 80);
    *result = 4;
  }
  return result;
}
