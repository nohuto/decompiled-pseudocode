/*
 * XREFs of SetWindowState @ 0x1C0139780
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C0139838 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  __int64 v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) == *(_QWORD *)(gptiCurrent + 416LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(1, v3, v2, 1);
  return 1LL;
}
