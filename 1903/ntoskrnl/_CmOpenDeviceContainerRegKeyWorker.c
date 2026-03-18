/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x1406F1234
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1406F1120 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406F1444 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933BAC (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 Tree,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  SIZE_T i; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  int DeviceContainerRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  wchar_t *v19; // rsi
  BOOLEAN v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // eax
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v30) = a4;
  pszDest = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v11 = Tree;
  DestinationString.Buffer = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_35;
  LODWORD(v12) = 260;
  for ( i = 260LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v12 >> 1,
                                  a2,
                                  a3,
                                  v16,
                                  v25,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v30);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v30;
    if ( v12 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_22;
    }
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  if ( (a3 & 0x100) != 0 )
  {
    v22 = (__int64)pszDest;
    DeviceContainerRegKeyPath = PnpCtxRegOpenCurrentUserKey(v11, v14, v15, &v27);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_22;
    v21 = v27;
    goto LABEL_16;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v12
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_35:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_22;
  }
  v19 = pszDest + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  v20 = RtlPrefixUnicodeString(
          &`_CmOpenDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
          &DestinationString,
          1u);
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(v11, v20 != 0 ? 10 : 4, (__int64)&v28);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  v21 = v28;
  if ( !v20 )
    v19 = pszDest;
  v22 = (__int64)(v19 + 25);
LABEL_16:
  if ( a6 )
  {
    Tree = (unsigned int)PnpCtxRegCreateTree(v11, v21, v22, 0, a5, 0LL, a7, (__int64)a8);
  }
  else
  {
    v23 = PnpCtxRegOpenKey(v11, v21, v22, 0, a5, a7);
    Tree = (unsigned int)v23;
    if ( v23 >= 0 )
      *a8 = 2;
  }
  if ( (_DWORD)Tree == -1073741444 )
  {
    DeviceContainerRegKeyPath = -1073741595;
  }
  else if ( (int)Tree < 0 )
  {
    DeviceContainerRegKeyPath = Tree;
  }
LABEL_22:
  if ( v27 )
    PnpCtxRegCloseKey(Tree, v27);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
