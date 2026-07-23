/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1406EB514 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406EB848 (_CmGetDeviceContainerRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  SIZE_T v12; // r15
  int v13; // r9d
  signed int DeviceContainerRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v16; // rsi
  BOOLEAN v17; // r15
  HANDLE v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rcx
  int Tree; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v30) = a4;
  pszDest = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_42;
  v12 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v12 >> 1,
                                  a2,
                                  a3,
                                  v13,
                                  v25,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v30);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v23 = 2LL * (unsigned int)v30;
      pszDest = 0LL;
      v12 = 0xFFFFFFFFLL;
      if ( v23 <= 0xFFFFFFFF )
        v12 = (unsigned int)v23;
      DeviceContainerRegKeyPath = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v23 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_6;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (__int64)pszDest;
      if ( a1 )
        v24 = *(_QWORD *)(a1 + 224);
      else
        v24 = 0LL;
      DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_24;
      v18 = Handle;
      goto LABEL_16;
    }
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_24;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v16 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v17 = RtlPrefixUnicodeString(
              &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v17 != 0 ? 10 : 4, (__int64)&v28);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_24;
      v18 = v28;
      if ( !v17 )
        v16 = pszDest;
      v19 = (__int64)(v16 + 25);
LABEL_16:
      if ( a6 )
      {
        Tree = PnpCtxRegCreateTree(a1, (__int64)v18, v19, 0LL, a5, 0LL);
      }
      else
      {
        if ( a1 )
          v20 = *(_QWORD *)(a1 + 224);
        else
          v20 = 0LL;
        Tree = SysCtxRegOpenKey(v20, (__int64)v18, v19, 0, a5, a7);
        if ( Tree >= 0 )
          *a8 = 2;
      }
      if ( Tree == -1073741444 )
      {
        DeviceContainerRegKeyPath = -1073741595;
      }
      else if ( Tree < 0 )
      {
        DeviceContainerRegKeyPath = Tree;
      }
      goto LABEL_24;
    }
LABEL_42:
    DeviceContainerRegKeyPath = -1073741811;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
