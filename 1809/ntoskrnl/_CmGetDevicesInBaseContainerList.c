/*
 * XREFs of _CmGetDevicesInBaseContainerList @ 0x1408FA710
 * Callers:
 *     _CmMoveBaseContainer @ 0x1408FA974 (_CmMoveBaseContainer.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 */

__int64 __fastcall CmGetDevicesInBaseContainerList(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  _WORD *v8; // r15
  int CachedContextBaseKey; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edi
  _WORD *PoolWithTag; // rax
  __int64 v16; // rcx
  unsigned int i; // r14d
  int v18; // eax
  void *v19; // rcx
  PVOID v20; // rax
  int v22; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v24; // [rsp+50h] [rbp-10h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-8h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(a1, 10, (__int64)&v26);
  if ( CachedContextBaseKey >= 0 )
  {
    v10 = 0LL;
    if ( a1 )
      v10 = *(_QWORD *)(a1 + 224);
    CachedContextBaseKey = SysCtxRegOpenKey(v10, v26, a2, 0, 1u, (__int64)&v25);
    if ( CachedContextBaseKey >= 0 )
    {
      v11 = 0LL;
      if ( a1 )
        v11 = *(_QWORD *)(a1 + 224);
      CachedContextBaseKey = SysCtxRegOpenKey(v11, (__int64)v25, (__int64)L"BaseContainers", 0, 1u, (__int64)&v24);
      if ( CachedContextBaseKey >= 0 )
      {
        v12 = 0LL;
        if ( a1 )
          v12 = *(_QWORD *)(a1 + 224);
        CachedContextBaseKey = SysCtxRegOpenKey(v12, (__int64)v24, a3, 0, 3u, (__int64)&Handle);
        if ( CachedContextBaseKey >= 0 )
        {
          CachedContextBaseKey = PnpCtxRegQueryInfoKey(v13, (int)Handle, 0, 0, (__int64)&v22, (__int64)&v26, 0LL);
          if ( CachedContextBaseKey >= 0 )
          {
            v14 = v22 * (v26 + 1) + 1;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v14, 0x52504E50u);
            *a4 = PoolWithTag;
            if ( !PoolWithTag )
            {
              CachedContextBaseKey = -1073741801;
              goto LABEL_22;
            }
            v8 = PoolWithTag;
            for ( i = 0; ; ++i )
            {
              LODWORD(v26) = v14 - 1;
              v18 = PnpCtxRegEnumValue(v16, (__int64)Handle, i, (__int64)v8, (__int64)&v26, 0LL, 0LL, 0LL);
              CachedContextBaseKey = v18;
              if ( v18 == -2147483622 )
                break;
              if ( v18 < 0 )
                goto LABEL_19;
              v16 = (unsigned int)(v26 + 1);
              v14 -= v16;
              v8 += v16;
            }
            CachedContextBaseKey = 0;
          }
        }
      }
    }
  }
LABEL_19:
  if ( CachedContextBaseKey == -1073741772 || CachedContextBaseKey == -1073741444 )
    CachedContextBaseKey = 0;
LABEL_22:
  v19 = *a4;
  if ( CachedContextBaseKey < 0 )
  {
    if ( !v19 )
      goto LABEL_30;
    ExFreePoolWithTag(v19, 0);
  }
  else
  {
    if ( v19 )
    {
      *v8 = 0;
      goto LABEL_30;
    }
    v20 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x52504E50u);
    *a4 = v20;
    if ( !v20 )
    {
      CachedContextBaseKey = -1073741801;
      goto LABEL_30;
    }
  }
  *a4 = 0LL;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( v25 )
    ZwClose(v25);
  return (unsigned int)CachedContextBaseKey;
}
