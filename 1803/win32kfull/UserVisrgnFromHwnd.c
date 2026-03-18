/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C01B1B24
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C01B1B64 (_VisrgnFromWindow.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v4, a2);
  if ( result )
    return VisrgnFromWindow(result, a3, a1);
  return result;
}
