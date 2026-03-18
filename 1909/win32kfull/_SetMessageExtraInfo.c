/*
 * XREFs of _SetMessageExtraInfo @ 0x1C0142DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetMessageExtraInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(gptiCurrent + 424LL);
  result = *(_QWORD *)(v1 + 416);
  *(_QWORD *)(v1 + 416) = a1;
  return result;
}
