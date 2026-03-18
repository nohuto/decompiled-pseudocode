/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C0122940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  int RedirectedWindowOriginSupported; // eax
  unsigned int v5; // r8d

  *a2 = 0LL;
  RedirectedWindowOriginSupported = IsUserGetRedirectedWindowOriginSupported();
  v5 = 0;
  if ( RedirectedWindowOriginSupported >= 0 )
    return (unsigned int)UserGetRedirectedWindowOrigin(a1, a2);
  return v5;
}
