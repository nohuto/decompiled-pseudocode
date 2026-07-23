/*
 * XREFs of _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4
 * Callers:
 *     _CmDeleteDeviceInterfaceRegKey @ 0x1408F7BC0 (_CmDeleteDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14059C4E8 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rbx
  int v9; // r12d
  wchar_t *v10; // r14
  unsigned int v11; // esi
  wchar_t *PoolWithTag; // rax
  signed int DeviceInterfaceRegKeyPath; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // rsi
  __int64 v17; // r9
  char *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  signed int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v28; // [rsp+40h] [rbp-30h] BYREF
  char *v29; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v7 = a2;
  Handle = 0LL;
  v9 = 4;
  v10 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_44;
  v11 = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
  while ( 1 )
  {
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    LODWORD(cchDest) = v11 >> 1;
    DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                  v11 >> 1,
                                  v7,
                                  a3,
                                  a4,
                                  v26,
                                  PoolWithTag,
                                  cchDest,
                                  (unsigned int *)&v33);
    if ( DeviceInterfaceRegKeyPath != -1073741789 )
      goto LABEL_11;
    ExFreePoolWithTag(v10, 0);
    v14 = 2LL * (unsigned int)v33;
    v10 = 0LL;
    v11 = -1;
    if ( v14 <= 0xFFFFFFFF )
      v11 = 2 * v33;
    DeviceInterfaceRegKeyPath = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
    v7 = a2;
  }
  DeviceInterfaceRegKeyPath = -1073741801;
LABEL_11:
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_45;
  if ( (a3 & 0x100) != 0 )
  {
    v16 = v10;
    if ( a1 )
      v19 = *(_QWORD *)(a1 + 224);
    else
      v19 = 0LL;
    DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v19, 0LL, 0x2000000LL, &v28);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_45;
    v18 = (char *)v28;
    goto LABEL_28;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v10);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_45;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_44:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_45;
  }
  v16 = v10 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = v10 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(
         &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
         &DestinationString,
         1u) )
  {
    v9 = 9;
    v16 = v10 + 47;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v9 = 14;
    v16 = v10 + 43;
  }
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v29);
  if ( DeviceInterfaceRegKeyPath >= 0 )
  {
    v18 = v29;
LABEL_28:
    if ( a3 == 49
      || (DeviceInterfaceRegKeyPath = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v17, 1, 0, (__int64)&Handle, 0LL),
          DeviceInterfaceRegKeyPath >= 0) )
    {
      if ( a5 )
      {
        if ( a1 && (v20 = *(_QWORD *)(a1 + 224)) != 0 )
          v21 = *(_QWORD *)(v20 + 8);
        else
          v21 = 0LL;
        v22 = RegRtlDeleteTreeInternal(v18, v16, v21, 0);
      }
      else
      {
        if ( a1 && (v23 = *(_QWORD *)(a1 + 224)) != 0 )
          v24 = *(_QWORD *)(v23 + 8);
        else
          v24 = 0LL;
        v22 = RegRtlDeleteKeyTransacted(v18, v16, v24);
      }
      if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741444 )
        DeviceInterfaceRegKeyPath = v22;
    }
  }
LABEL_45:
  if ( Handle )
    ZwClose(Handle);
  if ( v28 )
    ZwClose(v28);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
