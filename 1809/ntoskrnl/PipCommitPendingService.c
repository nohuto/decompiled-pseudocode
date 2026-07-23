/*
 * XREFs of PipCommitPendingService @ 0x1409F6C80
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

__int64 __fastcall PipCommitPendingService(const WCHAR *a1, char *a2, void *a3)
{
  char *v4; // rdi
  __int64 v6; // rcx
  int CachedContextBaseKey; // ebx
  int v8; // eax
  int v9; // eax
  char *v11; // [rsp+40h] [rbp-40h] BYREF
  void *v12; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v13; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v14; // [rsp+58h] [rbp-28h] BYREF
  char *v15; // [rsp+60h] [rbp-20h] BYREF
  void *v16; // [rsp+68h] [rbp-18h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  char *v18; // [rsp+A8h] [rbp+28h] BYREF

  v17 = 0LL;
  v4 = a2;
  v14 = 0LL;
  v13 = 0LL;
  v18 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a2 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v17);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    CachedContextBaseKey = PnpCtxRegOpenKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             v17,
                             (__int64)L"Control\\PendingDriverOperations\\Services",
                             0,
                             0x2001Fu,
                             (__int64)&v15);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    v4 = v15;
  }
  if ( !a3 )
  {
    CachedContextBaseKey = PnpCtxRegOpenKey(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)v4,
                             (__int64)a1,
                             0,
                             0x20019u,
                             (__int64)&v16);
    if ( CachedContextBaseKey < 0 )
      goto LABEL_28;
    a3 = v16;
  }
  v8 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v4, (__int64)L"EventLog", 0, 0x2001Fu, (__int64)&v11);
  CachedContextBaseKey = v8;
  if ( v8 == -1073741772 || v8 == -1073741444 || v8 >= 0 )
  {
    v9 = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v11, (__int64)a1, 0, 0x20019u, (__int64)&v12);
    CachedContextBaseKey = v9;
    if ( v9 == -1073741772 || v9 == -1073741444 || v9 >= 0 )
    {
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 6, (__int64)&v18);
      if ( CachedContextBaseKey >= 0 )
      {
        CachedContextBaseKey = PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, v18, a1, 0, 0x20006u, 0LL, &v13, 0LL);
        if ( CachedContextBaseKey >= 0 )
        {
          if ( !v12
            || (CachedContextBaseKey = PnpCtxRegCreateKey(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         v18,
                                         L"EventLog",
                                         0,
                                         0x20006u,
                                         0LL,
                                         &v14,
                                         0LL),
                CachedContextBaseKey >= 0)
            && (!v12 || (CachedContextBaseKey = PiDevCfgCopyDeviceKeys(v12, v14, 1, 0LL), CachedContextBaseKey >= 0)) )
          {
            CachedContextBaseKey = PiDevCfgCopyDeviceKeys(a3, v13, 1, 0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( v12 )
              {
                CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, v11, a1);
                if ( CachedContextBaseKey < 0 )
                  goto LABEL_28;
                LODWORD(v18) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v11, 0, 0LL, (unsigned int *)&v18) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v11, 0LL);
              }
              CachedContextBaseKey = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, v4, a1);
              if ( CachedContextBaseKey >= 0 )
              {
                LODWORD(v18) = 0;
                if ( (unsigned int)PnpCtxRegEnumKey(v6, v4, 0, 0LL, (unsigned int *)&v18) == -2147483622 )
                  PnpCtxRegDeleteKey(*(__int64 *)&PiPnpRtlCtx, v4, 0LL);
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  if ( v13 )
    PnpCtxRegCloseKey(v6, v13);
  if ( v14 )
    PnpCtxRegCloseKey(v6, v14);
  if ( v11 )
    PnpCtxRegCloseKey(v6, v11);
  if ( v12 )
    PnpCtxRegCloseKey(v6, v12);
  if ( v15 )
    PnpCtxRegCloseKey(v6, v15);
  if ( v16 )
    PnpCtxRegCloseKey(v6, v16);
  return (unsigned int)CachedContextBaseKey;
}
