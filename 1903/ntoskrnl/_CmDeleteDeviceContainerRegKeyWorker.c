/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x140936734
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x1409365F4 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406F1444 (_CmGetDeviceContainerRegKeyPath.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14075451C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x140933B34 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933BAC (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  SIZE_T i; // rdx
  __int64 v11; // rdx
  int DeviceContainerRegKeyPath; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 Length; // bx
  wchar_t *v16; // rsi
  BOOLEAN v17; // r14
  char *v18; // rdx
  const WCHAR *v19; // rsi
  unsigned int v20; // eax
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v24; // [rsp+40h] [rbp-20h] BYREF
  char *v25; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v27) = a4;
  pszDest = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v8 = a1;
  DestinationString.Buffer = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_28;
  LODWORD(v9) = 260;
  for ( i = 260LL; ; i = (unsigned int)v9 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v14,
                                  v22,
                                  pszDest,
                                  cchDest,
                                  &v27);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v9 = 2LL * (unsigned int)v27;
    if ( v9 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_29;
    }
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_9:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_29;
  if ( (a3 & 0x100) != 0 )
  {
    v19 = pszDest;
    DeviceContainerRegKeyPath = PnpCtxRegOpenCurrentUserKey(v8, v11, v13, (__int64)&v24);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_29;
    v18 = v24;
    goto LABEL_22;
  }
  DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_29;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v9
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_28:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_29;
  }
  v16 = pszDest + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  v17 = RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
          &DestinationString,
          1u);
  DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(v8, v17 != 0 ? 10 : 4, (__int64)&v25);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_29;
  v18 = v25;
  if ( !v17 )
    v16 = pszDest;
  v19 = v16 + 25;
LABEL_22:
  if ( a5 )
    v20 = PnpCtxRegDeleteTree(v8, v18, v19);
  else
    v20 = PnpCtxRegDeleteKey(v8, v18, v19);
  a1 = v20;
  if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741444 )
    DeviceContainerRegKeyPath = v20;
LABEL_29:
  if ( v24 )
    PnpCtxRegCloseKey(a1, v24);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
