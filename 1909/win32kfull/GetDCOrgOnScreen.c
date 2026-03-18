/*
 * XREFs of GetDCOrgOnScreen @ 0x1C012E2F8
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     _ExcludeUpdateRgn @ 0x1C012E048 (_ExcludeUpdateRgn.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C002AA50 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)GreGetDCOrg(a1, a2) )
    return 0LL;
  v5 = 0LL;
  if ( !(unsigned int)UserGetRedirectedWindowOrigin(a1, (__int64)&v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += HIDWORD(v5);
  return 1LL;
}
