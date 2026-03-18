/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1405C2C80
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x1405C30B4 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
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
  int v11; // ebx
  unsigned int v12; // r12d
  wchar_t *PoolWithTag; // r14
  PVOID v14; // rsi
  unsigned __int64 v15; // rsi
  int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // esi
  HANDLE v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  int Tree; // eax
  int v24; // r12d
  int v25; // r15d
  __int64 v26; // rcx
  HANDLE v27; // rax
  __int64 v28; // rcx
  size_t v29; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v31; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v32; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v33; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v11 = a2;
  Handle = 0LL;
  v12 = 4;
  DestinationString.Buffer = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v14 = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    LODWORD(v15) = (a3 & 0x200) != 0 ? 360 : 240;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
    if ( PoolWithTag )
    {
      while ( 1 )
      {
        LODWORD(v29) = (unsigned int)v15 >> 1;
        DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v11, a3, a4, a6, PoolWithTag, v29, (__int64)&v37);
        if ( DeviceRegKeyPath != -1073741789 )
          break;
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
        v15 = 2LL * v37;
        if ( v15 > 0xFFFFFFFF )
        {
          DeviceRegKeyPath = -1073741675;
          goto LABEL_19;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_60;
        v11 = a2;
      }
    }
    else
    {
LABEL_60:
      DeviceRegKeyPath = -1073741801;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (int)PoolWithTag;
      if ( a1 )
        v28 = *(_QWORD *)(a1 + 224);
      else
        v28 = 0LL;
      DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v28, 0LL, 0x2000000LL, &v32);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v32;
LABEL_15:
      v33 = v19;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v20) = 0;
      v21 = a5;
      Tree = SysCtxRegOpenKey(v20, (_DWORD)v19, v18, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_19;
      }
      if ( Tree == -1073741444 )
        goto LABEL_69;
      if ( Tree != -1073741772 )
      {
LABEL_55:
        DeviceRegKeyPath = Tree;
        goto LABEL_19;
      }
      v24 = (unsigned __int8)a3;
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeyPath = -1073741772;
        else
          DeviceRegKeyPath = -1073741810;
        goto LABEL_19;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeyPath = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeyPath < 0 )
          goto LABEL_19;
      }
      DeviceRegKeyPath = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v25 = v21;
      if ( P )
        v25 = 917510;
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v33, v18, v24 == 19, v25, (__int64)P, (__int64)&v31, (__int64)a8);
      if ( Tree == -1073741444 )
      {
LABEL_69:
        DeviceRegKeyPath = -1073741595;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
      if ( v25 == v21 )
      {
        v27 = v31;
        v31 = 0LL;
        *a7 = v27;
        goto LABEL_19;
      }
      if ( a1 )
        v26 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v26) = 0;
      Tree = SysCtxRegOpenKey(v26, (_DWORD)v31, 0, 0, v21, (__int64)a7);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeyPath = -1073741772;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
LABEL_19:
      v14 = P;
      goto LABEL_20;
    }
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v15
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (_DWORD)PoolWithTag + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = PoolWithTag + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmOpenDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v12 = 5;
        v18 = (_DWORD)PoolWithTag + 60;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v12 = 14;
        v18 = (_DWORD)PoolWithTag + 86;
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v12, &v33);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v33;
      goto LABEL_15;
    }
    v14 = P;
  }
  DeviceRegKeyPath = -1073741811;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v32 )
    ZwClose(v32);
  if ( v31 )
    ZwClose(v31);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
