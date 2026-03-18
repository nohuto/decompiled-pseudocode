/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0154250
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C003A0C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C010DA60 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2, __int64 a3)
{
  HRGN EmptyRgn; // rbx
  unsigned int v6; // ebp
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+44h] [rbp+1Ch]

  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3);
  v6 = GreCopyVisRgn(a1, a2);
  if ( !(unsigned int)GreGetDCOrg(a1, &v8) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1, EmptyRgn, 1) )
  {
    GreOffsetRgn(EmptyRgn, v8, v9);
    v6 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
  }
  GreOffsetRgn(a2, -v8, -v9);
  GreDeleteObject(EmptyRgn);
  return v6;
}
