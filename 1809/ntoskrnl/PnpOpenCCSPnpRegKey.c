/*
 * XREFs of PnpOpenCCSPnpRegKey @ 0x14073D6FC
 * Callers:
 *     PnpInitializePnpWatchdogs @ 0x1409CAF5C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall PnpOpenCCSPnpRegKey(_QWORD *a1)
{
  int CachedContextBaseKey; // edx
  UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  void *v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v5);
  if ( CachedContextBaseKey >= 0 )
  {
    v4.Buffer = (wchar_t *)L"Control\\Pnp";
    *(_DWORD *)&v4.Length = 1572886;
    CachedContextBaseKey = IopCreateRegistryKeyEx(&v6, v5, &v4, 0x11u, 0, 0LL);
    if ( CachedContextBaseKey >= 0 )
      *a1 = v6;
  }
  return (unsigned int)CachedContextBaseKey;
}
