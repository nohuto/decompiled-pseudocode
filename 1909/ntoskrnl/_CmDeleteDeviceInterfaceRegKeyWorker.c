/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934184
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x140934050 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1405C1844 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062920C (_CmOpenDeviceInterfaceRegKey.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x140754FAC (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1409335A8 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933620 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // rcx
  __int64 v9; // rbx
  int v10; // r14d
  wchar_t *PoolWithTag; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v17; // rdi
  __int64 v18; // r9
  char *v19; // r14
  unsigned int v20; // eax
  int v22; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-30h] BYREF
  char *v25; // [rsp+48h] [rbp-28h] BYREF
  void *v26; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+50h] BYREF

  v6 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v9 = a2;
  DestinationString.Buffer = 0LL;
  v10 = 4;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_32;
  LODWORD(v12) = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v12 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    (unsigned int)v12 >> 1,
                                    v9,
                                    a3,
                                    a4,
                                    v22,
                                    PoolWithTag,
                                    cchDest,
                                    &v29);
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v12 = 2LL * (unsigned int)v29;
      if ( v12 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeyPath = -1073741675;
        goto LABEL_33;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v12, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_9;
      v9 = a2;
    }
  }
  else
  {
LABEL_9:
    DeviceInterfaceRegKeyPath = -1073741801;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_33;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = PoolWithTag;
    DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v13, v14, (__int64)&v24);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_33;
    v19 = v24;
    goto LABEL_24;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_33;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v12
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_32:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_33;
  }
  v17 = PoolWithTag + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = PoolWithTag + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v10 = 9;
    v17 = PoolWithTag + 47;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v10 = 14;
    v17 = PoolWithTag + 43;
  }
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v10, (__int64)&v25);
  if ( DeviceInterfaceRegKeyPath >= 0 )
  {
    v19 = v25;
LABEL_24:
    if ( a3 == 49
      || (DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v18, 1, 0, (__int64)&v26, 0LL),
          DeviceInterfaceRegKeyPath >= 0) )
    {
      v20 = a5 ? PnpCtxRegDeleteTree(a1, v19, v17) : PnpCtxRegDeleteKey(a1, v19, v17);
      v6 = v20;
      if ( (int)(v20 + 0x80000000) >= 0 && v20 != -1073741444 )
        DeviceInterfaceRegKeyPath = v20;
    }
  }
LABEL_33:
  if ( v26 )
    PnpCtxRegCloseKey(v6, v26);
  if ( v24 )
    PnpCtxRegCloseKey(v6, v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
