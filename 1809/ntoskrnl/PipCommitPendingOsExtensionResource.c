/*
 * XREFs of PipCommitPendingOsExtensionResource @ 0x1409F6A70
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406F3E88 (PiDevCfgCopyDeviceKeys.c)
 *     _PnpCtxRegDeleteTree @ 0x14073D2F4 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14073D544 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14073D580 (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegDeleteKey @ 0x1408F713C (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PipCommitPendingOsExtensionResource(const WCHAR *a1, char *a2, void *a3)
{
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  char *v9; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-28h] BYREF
  char *v11; // [rsp+50h] [rbp-20h] BYREF
  char *v12; // [rsp+58h] [rbp-18h] BYREF
  void *v13; // [rsp+60h] [rbp-10h] BYREF

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v9);
  if ( CachedContextBaseKey >= 0 )
  {
    if ( !a2 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)v9,
                               (__int64)L"Control\\PendingDriverOperations\\OsExtensionDatabase",
                               0,
                               0x2001Fu,
                               (__int64)&v12);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a2 = v12;
    }
    if ( !a3 )
    {
      CachedContextBaseKey = PnpCtxRegOpenKey(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)a2,
                               (__int64)a1,
                               0,
                               0x20019u,
                               (__int64)&v13);
      if ( CachedContextBaseKey < 0 )
        goto LABEL_14;
      a3 = v13;
    }
    CachedContextBaseKey = PnpCtxRegCreateKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v9,
                             L"Control\\OsExtensionDatabase",
                             0,
                             0x20006u,
                             0LL,
                             (HANDLE *)&v11,
                             0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v11, a1, 0, 0x20006u, 0LL, &v10, 0LL);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v10, 1, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, a2, a1);
          if ( CachedContextBaseKey >= 0 )
          {
            LODWORD(v9) = 0;
            if ( (unsigned int)PnpCtxRegEnumKey(v6, a2, 0, 0LL, (unsigned int *)&v9) == -2147483622 )
              PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, a2, 0LL);
          }
        }
      }
    }
  }
LABEL_14:
  if ( v10 )
    PnpCtxRegCloseKey(v6, v10);
  if ( v11 )
    PnpCtxRegCloseKey(v6, v11);
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  return (unsigned int)CachedContextBaseKey;
}
