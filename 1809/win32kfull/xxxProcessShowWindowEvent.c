/*
 * XREFs of xxxProcessShowWindowEvent @ 0x1C0135430
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     WPUpdateCheckPointSettings @ 0x1C0134260 (WPUpdateCheckPointSettings.c)
 */

__int64 __fastcall xxxProcessShowWindowEvent(ULONG_PTR a1, int a2, int a3, int a4)
{
  unsigned int v7; // r8d
  __int64 result; // rax

  v7 = a4 & 0x10000;
  if ( a2 == 1 )
    v7 |= a3;
  result = xxxShowWindowEx(a1, a4, v7);
  if ( !a2 && (a3 & 4) != 0 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
