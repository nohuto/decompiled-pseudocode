/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x1408F8274 (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceRegKeyPath @ 0x1405C8544 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceRegKey @ 0x1408F8274 (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1408FE060 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  __int64 v8; // rbx
  wchar_t *v9; // r14
  int v10; // r12d
  unsigned int v11; // esi
  wchar_t *PoolWithTag; // rax
  signed int DeviceRegKeyPath; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int16 Length; // bx
  const WCHAR *v16; // rsi
  char *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r13d
  int *p_DestinationString; // r13
  unsigned int v21; // r12d
  signed int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r8
  char *v26; // r12
  __int64 v27; // rax
  __int64 v28; // r8
  wchar_t *v29; // rax
  wchar_t *v30; // r15
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  size_t v36; // [rsp+30h] [rbp-50h]
  unsigned int v37; // [rsp+40h] [rbp-40h] BYREF
  char *v38; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+50h] [rbp-30h]
  HANDLE v40; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  v39 = a2;
  v38 = 0LL;
  v40 = 0LL;
  v8 = a2;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 4;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_76;
  v11 = (a3 & 0x200) != 0 ? 360 : 240;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
  while ( 1 )
  {
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    LODWORD(v36) = v11 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v8, a3, a4, 0, PoolWithTag, v36, (__int64)&v37);
    if ( DeviceRegKeyPath != -1073741789 )
      goto LABEL_11;
    ExFreePoolWithTag(v9, 0);
    v14 = 2LL * v37;
    v9 = 0LL;
    v11 = -1;
    if ( v14 <= 0xFFFFFFFF )
      v11 = 2 * v37;
    DeviceRegKeyPath = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_11;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x52504E50u);
    v8 = v39;
  }
  DeviceRegKeyPath = -1073741801;
LABEL_11:
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_77;
  if ( (a3 & 0x100) != 0 )
  {
    v16 = v9;
    v18 = 0LL;
    if ( a1 )
      v18 = *(_QWORD *)(a1 + 224);
    DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &v40);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_77;
    v17 = (char *)v40;
    goto LABEL_27;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v9);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_77;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_76:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_77;
  }
  v16 = v9 + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = v9 + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
  {
    v10 = 5;
    v16 = v9 + 30;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v10 = 14;
    v16 = v9 + 43;
  }
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v10, (__int64)&v38);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_77;
  v17 = v38;
LABEL_27:
  v38 = v17;
  DeviceRegKeyPath = CmOpenDeviceRegKey(a1, v39, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_77;
  v19 = (unsigned __int8)a3;
  v37 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 786;
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    v21 = 0;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v22 = CmDeleteDeviceRegKey(a1, v39, *p_DestinationString, 0);
      if ( v22 )
      {
        if ( v22 != -1073741772 && v22 != -1073741811 && v22 != -1073741637 )
          break;
      }
      ++v21;
      ++p_DestinationString;
      if ( v21 >= 3 )
        goto LABEL_38;
    }
    DeviceRegKeyPath = v22;
LABEL_38:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_77;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v39);
    v23 = CmSetDeviceRegProp(a1, v39, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v23 && v23 != -1073741275 && v23 != -1073741810 )
      goto LABEL_42;
    v19 = v37;
  }
  if ( a5 )
  {
    if ( a1 && (v24 = *(_QWORD *)(a1 + 224)) != 0 )
      v25 = *(_QWORD *)(v24 + 8);
    else
      v25 = 0LL;
    v26 = v38;
    v23 = RegRtlDeleteTreeInternal(v38, v16, v25, 0);
  }
  else
  {
    if ( a1 && (v27 = *(_QWORD *)(a1 + 224)) != 0 )
      v28 = *(_QWORD *)(v27 + 8);
    else
      v28 = 0LL;
    v26 = v38;
    v23 = RegRtlDeleteKeyTransacted(v38, v16, v28);
  }
  if ( v23 != -1073741444 )
  {
    if ( v23 < 0 )
    {
LABEL_42:
      DeviceRegKeyPath = v23;
      goto LABEL_77;
    }
    if ( v19 != 18 && (v19 != 17 || (a3 & 0xF00) != 0) )
    {
      v29 = wcsrchr(v16, 0x5Cu);
      if ( v29 && (*v29 = 0, (v30 = wcsrchr(v16, 0x5Cu)) != 0LL) )
      {
        if ( a1 && (v31 = *(_QWORD *)(a1 + 224)) != 0 )
          v32 = *(_QWORD *)(v31 + 8);
        else
          v32 = 0LL;
        v23 = RegRtlDeleteKeyTransacted(v26, v16, v32);
        if ( v23 != -1073741535 )
        {
          if ( v23 < 0 )
            goto LABEL_42;
          *v30 = 0;
          if ( a1 && (v33 = *(_QWORD *)(a1 + 224)) != 0 )
            v34 = *(_QWORD *)(v33 + 8);
          else
            v34 = 0LL;
          v23 = RegRtlDeleteKeyTransacted(v26, v16, v34);
          if ( (int)(v23 + 0x80000000) >= 0 && v23 != -1073741535 )
            goto LABEL_42;
        }
      }
      else
      {
        DeviceRegKeyPath = -1073741595;
      }
    }
  }
LABEL_77:
  if ( Handle )
    ZwClose(Handle);
  if ( v40 )
    ZwClose(v40);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)DeviceRegKeyPath;
}
