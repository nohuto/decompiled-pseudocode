/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1405C8030
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceRegKeyPath @ 0x1405C8544 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v9; // ebx
  wchar_t *v11; // r15
  void *v12; // r13
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  wchar_t *PoolWithTag; // rax
  signed int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // r14d
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int Tree; // eax
  unsigned __int64 v23; // rcx
  int v24; // r12d
  int DeviceRegKeySecurityDescriptor; // eax
  int v26; // esi
  __int64 v27; // rcx
  HANDLE v28; // rax
  __int64 v29; // rcx
  size_t v30; // [rsp+30h] [rbp-50h]
  HANDLE v31; // [rsp+40h] [rbp-40h] BYREF
  void *v32; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v33; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v34; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+50h] BYREF
  int v39; // [rsp+D8h] [rbp+58h]

  v39 = a4;
  v9 = a4;
  v34 = 0LL;
  v11 = 0LL;
  v33 = 0LL;
  v12 = 0LL;
  v31 = 0LL;
  Handle = 0LL;
  v13 = 4;
  v32 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_70;
  v14 = (a3 & 0x200) != 0 ? 360 : 240;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
  while ( 1 )
  {
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    LODWORD(v30) = v14 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, a2, a3, v9, a6, PoolWithTag, v30, (__int64)&v38);
    if ( DeviceRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(v11, 0);
    v23 = 2LL * v38;
    v11 = 0LL;
    v14 = -1;
    if ( v23 <= 0xFFFFFFFF )
      v14 = 2 * v38;
    DeviceRegKeyPath = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
    v9 = v39;
  }
  DeviceRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_20;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v11);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v14
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (_DWORD)v11 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v11 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmOpenDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v13 = 5;
        v18 = (_DWORD)v11 + 60;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v13 = 14;
        v18 = (_DWORD)v11 + 86;
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v13, &v34);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_20;
      v19 = v34;
      goto LABEL_16;
    }
LABEL_70:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_20;
  }
  v18 = (int)v11;
  if ( a1 )
    v29 = *(_QWORD *)(a1 + 224);
  else
    v29 = 0LL;
  DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v29, 0LL, 0x2000000LL, &v33);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_20;
  v19 = v33;
LABEL_16:
  v34 = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v20) = 0;
  Tree = SysCtxRegOpenKey(v20, (_DWORD)v19, v18, 0, a5, (__int64)a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_20;
  }
  if ( Tree == -1073741444 )
    goto LABEL_68;
  if ( Tree != -1073741772 )
    goto LABEL_56;
  v24 = (unsigned __int8)a3;
  if ( !a6 )
  {
    if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      DeviceRegKeyPath = -1073741772;
    else
      DeviceRegKeyPath = -1073741810;
    goto LABEL_20;
  }
  if ( (unsigned __int8)a3 == 16 && (a3 & 0xF00) == 0
    || (DeviceRegKeyPath = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL), DeviceRegKeyPath >= 0) )
  {
    DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v32);
    v12 = v32;
    DeviceRegKeyPath = DeviceRegKeySecurityDescriptor;
    if ( DeviceRegKeySecurityDescriptor >= 0 )
    {
      v26 = a5;
      if ( v32 )
        v26 = 917510;
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v34, v18, v24 == 19, v26, (__int64)v32, (__int64)&v31, (__int64)a8);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
        {
          if ( v26 == a5 )
          {
            v28 = v31;
            v31 = 0LL;
            *a7 = v28;
            goto LABEL_20;
          }
          if ( a1 )
            v27 = *(_QWORD *)(a1 + 224);
          else
            LODWORD(v27) = 0;
          Tree = SysCtxRegOpenKey(v27, (_DWORD)v31, 0, 0, a5, (__int64)a7);
          if ( Tree == -1073741444 )
          {
            DeviceRegKeyPath = -1073741772;
            goto LABEL_20;
          }
          if ( Tree >= 0 )
            goto LABEL_20;
        }
LABEL_56:
        DeviceRegKeyPath = Tree;
        goto LABEL_20;
      }
LABEL_68:
      DeviceRegKeyPath = -1073741595;
    }
  }
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( v31 )
    ZwClose(v31);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)DeviceRegKeyPath;
}
