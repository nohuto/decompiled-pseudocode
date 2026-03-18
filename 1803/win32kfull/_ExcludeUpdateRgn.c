/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C0064044
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0063E88 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C0130BD0 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C0064180 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C00642A4 (GetDCOrgOnScreen.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00642F8 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-24h]
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( !v4 )
    return GreGetClipBox(a1, v8, 0LL);
  if ( v4 == 1 )
    return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
  result = GetDCOrgOnScreen(a1, &v6);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
      GreOffsetRgn(ghrgnInv1, v6, v7);
    else
      CalcVirtualScreenClipRegion(ghrgnInv1, a2);
    GreCombineRgn(ghrgnInv1, ghrgnInv1, *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL), 4LL);
    GreOffsetRgn(ghrgnInv1, -v6, -v7);
    return GreExtSelectClipRgnInternal(a1);
  }
  return result;
}
