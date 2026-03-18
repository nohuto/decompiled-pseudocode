/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C011D564
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C011D5A8 (_VisrgnFromWindow.c)
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
