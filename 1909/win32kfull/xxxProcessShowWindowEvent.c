/*
 * XREFs of xxxProcessShowWindowEvent @ 0x1C011A840
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     WPUpdateCheckPointSettings @ 0x1C0011190 (WPUpdateCheckPointSettings.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 */

__int64 __fastcall xxxProcessShowWindowEvent(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r8d
  __int64 result; // rax

  v7 = a4 & 0x10000;
  if ( a2 == 1 )
    v7 |= a3;
  result = xxxShowWindowEx((struct tagWND *)a1, a4, v7);
  if ( !a2 && (a3 & 4) != 0 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(result + 31) & 0x20) != 0 )
      return WPUpdateCheckPointSettings(a1, a3);
  }
  return result;
}
