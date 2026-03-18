/*
 * XREFs of ClearWindowState @ 0x1C0007AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateState@@YAHK@Z @ 0x1C0007B28 (-ValidateState@@YAHK@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall ClearWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  __int64 v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) == *(_QWORD *)(gptiCurrent + 416LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(0LL, v3, v2, 1LL);
  return 1LL;
}
