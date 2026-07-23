/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
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
  int v11; // ebx
  wchar_t *v12; // rdi
  unsigned int v13; // r12d
  unsigned int v14; // esi
  wchar_t *PoolWithTag; // rax
  NTSTATUS DeviceInterfaceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // esi
  int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r13
  int Tree; // eax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF

  v29 = 0LL;
  v11 = a2;
  v28 = 0LL;
  v12 = 0LL;
  Handle = 0LL;
  v13 = 4;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_55;
  v14 = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
  while ( 1 )
  {
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = v14 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  v14 >> 1,
                                  v11,
                                  a3,
                                  a4,
                                  v26,
                                  (__int64)PoolWithTag,
                                  cchDest,
                                  (__int64)&v33);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(v12, 0);
    v24 = 2LL * (unsigned int)v33;
    v12 = 0LL;
    v14 = -1;
    if ( v24 <= 0xFFFFFFFF )
      v14 = 2 * v33;
    DeviceInterfaceRegKeyPath = v24 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v24 > 0xFFFFFFFF )
      goto LABEL_6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
    v11 = a2;
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_20;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v12);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (_DWORD)v12 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v12 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
             &DestinationString,
             1u) )
      {
        v13 = 9;
        v18 = (_DWORD)v12 + 94;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v13 = 14;
        v18 = (_DWORD)v12 + 86;
      }
      DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v13, &v29);
      if ( DeviceInterfaceRegKeyPath < 0 )
        goto LABEL_20;
      v19 = v29;
      goto LABEL_16;
    }
LABEL_55:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_20;
  }
  v18 = (int)v12;
  if ( a1 )
    v25 = *(_QWORD *)(a1 + 224);
  else
    v25 = 0LL;
  DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v25, 0LL, 0x2000000LL, &v28);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_20;
  v19 = (int)v28;
LABEL_16:
  if ( a1 )
    v20 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v20) = 0;
  v21 = a7;
  Tree = SysCtxRegOpenKey(v20, v19, v18, 0, a5, a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_20;
  }
  if ( Tree == -1073741444 )
  {
LABEL_35:
    DeviceInterfaceRegKeyPath = -1073741595;
    goto LABEL_20;
  }
  if ( Tree != -1073741772 )
  {
LABEL_34:
    DeviceInterfaceRegKeyPath = Tree;
    goto LABEL_20;
  }
  if ( a6 )
  {
    if ( (unsigned __int8)a3 == 48 && (a3 & 0xF00) == 0
      || (Tree = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, 0LL, 1, 0, (__int64)&Handle, 0LL), Tree >= 0) )
    {
      Tree = PnpCtxRegCreateTree(a1, v19, v18, 0, a5, 0LL, v21, (__int64)a8);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
          goto LABEL_20;
        goto LABEL_34;
      }
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if ( (unsigned __int8)a3 != 48 || (a3 & 0xF00) != 0 )
    DeviceInterfaceRegKeyPath = -1073741772;
  else
    DeviceInterfaceRegKeyPath = -1073741127;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ZwClose(v28);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
