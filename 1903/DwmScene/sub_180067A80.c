/*
 * XREFs of sub_180067A80 @ 0x180067A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180067A80(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 264);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 264);
  }
  *a2 = *(_QWORD *)(a1 + 256);
  result = a2;
  a2[1] = v2;
  return result;
}
