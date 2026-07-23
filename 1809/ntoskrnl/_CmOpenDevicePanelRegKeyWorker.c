/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x1408FD2F4 (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1408FD224 (_CmGetDevicePanelRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  SIZE_T v12; // r15
  signed int DevicePanelRegKeyPath; // ebx
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int16 Length; // bx
  BOOLEAN v17; // r12
  HANDLE v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rcx
  int Tree; // ecx
  __int64 v22; // rcx
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v29) = a4;
  pszDest = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_36;
  v12 = 317LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath(
                              (unsigned int)v12 >> 1,
                              a2,
                              a3,
                              v15,
                              v24,
                              pszDest,
                              cchDest,
                              (unsigned int *)&v29);
    if ( DevicePanelRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v14 = 2LL * (unsigned int)v29;
      pszDest = 0LL;
      v12 = 0xFFFFFFFFLL;
      if ( v14 <= 0xFFFFFFFF )
        v12 = (unsigned int)v14;
      DevicePanelRegKeyPath = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v14 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DevicePanelRegKeyPath = -1073741801;
LABEL_10:
  if ( DevicePanelRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (__int64)pszDest;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        v20 = 0LL;
      DevicePanelRegKeyPath = SysCtxRegOpenCurrentUserKey(v20, 0LL, 0x2000000LL, &Handle);
      if ( DevicePanelRegKeyPath < 0 )
        goto LABEL_37;
      v18 = Handle;
      goto LABEL_25;
    }
    DevicePanelRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DevicePanelRegKeyPath < 0 )
      goto LABEL_37;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v17 = RtlPrefixUnicodeString(
              &`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix,
              &DestinationString,
              1u);
      DevicePanelRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v17 != 0 ? 11 : 4, (__int64)&v27);
      if ( DevicePanelRegKeyPath < 0 )
        goto LABEL_37;
      v18 = v27;
      v19 = (__int64)(pszDest + 46);
      if ( !v17 )
        v19 = (__int64)(pszDest + 25);
LABEL_25:
      if ( a6 )
      {
        Tree = PnpCtxRegCreateTree(a1, (__int64)v18, v19, 0LL, a5, 0LL);
      }
      else
      {
        if ( a1 )
          v22 = *(_QWORD *)(a1 + 224);
        else
          v22 = 0LL;
        Tree = SysCtxRegOpenKey(v22, (__int64)v18, v19, 0, a5, a7);
        if ( Tree >= 0 )
          *a8 = 2;
      }
      if ( Tree == -1073741444 )
      {
        DevicePanelRegKeyPath = -1073741595;
      }
      else if ( Tree < 0 )
      {
        DevicePanelRegKeyPath = Tree;
      }
      goto LABEL_37;
    }
LABEL_36:
    DevicePanelRegKeyPath = -1073741811;
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DevicePanelRegKeyPath;
}
