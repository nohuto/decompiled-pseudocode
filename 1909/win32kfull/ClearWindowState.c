/*
 * XREFs of ClearWindowState @ 0x1C01137E0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C0113838 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall ClearWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  __int64 v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) == *(_QWORD *)(gptiCurrent + 416LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(0, v3, v2, 1);
  return 1LL;
}
