/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062920C (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1405C1844 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062920C (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406295DC (_PnpCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406F4160 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406F4868 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933620 (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v8; // rbx
  __int64 v11; // r12
  int v12; // r15d
  wchar_t *PoolWithTag; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v19; // edi
  int v20; // r15d
  __int64 v21; // r12
  int v22; // r13d
  int Tree; // eax
  int v25; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+40h]
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF

  v31 = a1;
  v8 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v11 = a1;
  DestinationString.Buffer = 0LL;
  v12 = 4;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_48;
  LODWORD(v14) = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v14 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    (unsigned int)v14 >> 1,
                                    v8,
                                    a3,
                                    a4,
                                    v25,
                                    PoolWithTag,
                                    cchDest,
                                    &v33);
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v14 = 2LL * (unsigned int)v33;
      if ( v14 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeyPath = -1073741675;
        goto LABEL_17;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v14, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_36;
      v8 = a2;
    }
  }
  else
  {
LABEL_36:
    DeviceInterfaceRegKeyPath = -1073741801;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_17;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v19 = (_DWORD)PoolWithTag + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = PoolWithTag + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v12 = 9;
        v19 = (_DWORD)PoolWithTag + 94;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v12 = 14;
        v19 = (_DWORD)PoolWithTag + 86;
      }
      DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(v11, v12, (__int64)&v28);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_17;
      v20 = v28;
      goto LABEL_15;
    }
LABEL_48:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_17;
  }
  v19 = (int)PoolWithTag;
  DeviceInterfaceRegKeyPath = PnpCtxRegOpenCurrentUserKey(v11, v15, v16, &v27);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  v20 = v27;
LABEL_15:
  v21 = a7;
  v22 = a5;
  Tree = PnpCtxRegOpenKey(v31, v20, v19, 0, a5, a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_17;
  }
  if ( Tree == -1073741444 )
  {
LABEL_41:
    DeviceInterfaceRegKeyPath = -1073741595;
    goto LABEL_17;
  }
  a1 = 3221225524LL;
  if ( Tree != -1073741772 )
  {
LABEL_31:
    DeviceInterfaceRegKeyPath = Tree;
    goto LABEL_17;
  }
  if ( a6 )
  {
    if ( (unsigned __int8)a3 == 48 && (a3 & 0xF00) == 0
      || (Tree = CmOpenDeviceInterfaceRegKey(v31, a2, 0x30u, 0LL, 1, 0, (__int64)&v29, 0LL), Tree >= 0) )
    {
      Tree = PnpCtxRegCreateTree(v31, v20, v19, 0, v22, 0LL, v21, (__int64)a8);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
          goto LABEL_17;
        goto LABEL_31;
      }
      goto LABEL_41;
    }
    goto LABEL_31;
  }
  if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
    DeviceInterfaceRegKeyPath = -1073741772;
  else
    DeviceInterfaceRegKeyPath = -1073741127;
LABEL_17:
  if ( v29 )
    PnpCtxRegCloseKey(a1, v29);
  if ( v27 )
    PnpCtxRegCloseKey(a1, v27);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
