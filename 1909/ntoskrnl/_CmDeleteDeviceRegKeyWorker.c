/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x140934804
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x1409346CC (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     wcsrchr @ 0x1401A2830 (wcsrchr.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x1405C3584 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C3CAC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x1407059C0 (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14078B5D0 (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceRegKey @ 0x1409346CC (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14093A5A4 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  int v8; // ebx
  int v9; // r12d
  wchar_t *PoolWithTag; // r14
  unsigned __int64 v11; // rsi
  int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v14; // rsi
  char *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // r13d
  int *p_DestinationString; // r13
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  char *v24; // r12
  __int64 v25; // rax
  __int64 v26; // r8
  wchar_t *v27; // rax
  wchar_t *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  size_t v34; // [rsp+30h] [rbp-50h]
  unsigned int v35; // [rsp+40h] [rbp-40h] BYREF
  char *v36; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h]
  HANDLE v38; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  v37 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  Handle = 0LL;
  v8 = a2;
  v9 = 4;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_75;
  LODWORD(v11) = (a3 & 0x200) != 0 ? 360 : 240;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v34) = (unsigned int)v11 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v8, a3, a4, 0, PoolWithTag, v34, (__int64)&v35);
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v11 = 2LL * v35;
      if ( v11 > 0xFFFFFFFF )
      {
        DeviceRegKeyPath = -1073741675;
        goto LABEL_76;
      }
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_9;
      v8 = v37;
    }
  }
  else
  {
LABEL_9:
    DeviceRegKeyPath = -1073741801;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_76;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = PoolWithTag;
    v16 = 0LL;
    if ( a1 )
      v16 = *(_QWORD *)(a1 + 224);
    DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0LL, 0x2000000LL, &v38);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_76;
    v15 = (char *)v38;
    goto LABEL_26;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_76;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v11
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_75:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_76;
  }
  v14 = PoolWithTag + 25;
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = PoolWithTag + 25;
  DestinationString.Length = Length - 50;
  if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
  {
    v9 = 5;
    v14 = PoolWithTag + 30;
  }
  else if ( RtlPrefixUnicodeString(
              &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
              &DestinationString,
              1u) )
  {
    v9 = 14;
    v14 = PoolWithTag + 43;
  }
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v9, (__int64)&v36);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_76;
  v15 = v36;
LABEL_26:
  v36 = v15;
  DeviceRegKeyPath = CmOpenDeviceRegKey(a1, v37, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_76;
  v17 = (unsigned __int8)a3;
  v35 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    *(_DWORD *)&DestinationString.Length = 786;
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    v19 = 0;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v20 = CmDeleteDeviceRegKey(a1, v37, *p_DestinationString, 0);
      if ( v20 )
      {
        if ( v20 != -1073741772 && v20 != -1073741811 && v20 != -1073741637 )
          break;
      }
      ++v19;
      ++p_DestinationString;
      if ( v19 >= 3 )
        goto LABEL_37;
    }
    DeviceRegKeyPath = v20;
LABEL_37:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_76;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v37);
    v21 = CmSetDeviceRegProp(a1, v37, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v21 && v21 != -1073741275 && v21 != -1073741810 )
      goto LABEL_41;
    v17 = v35;
  }
  if ( a5 )
  {
    if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
      v23 = *(_QWORD *)(v22 + 8);
    else
      v23 = 0LL;
    v24 = v36;
    v21 = RegRtlDeleteTreeInternal(v36, v14, v23, 0);
  }
  else
  {
    if ( a1 && (v25 = *(_QWORD *)(a1 + 224)) != 0 )
      v26 = *(_QWORD *)(v25 + 8);
    else
      v26 = 0LL;
    v24 = v36;
    v21 = RegRtlDeleteKeyTransacted(v36, v14, v26);
  }
  if ( v21 != -1073741444 )
  {
    if ( v21 < 0 )
    {
LABEL_41:
      DeviceRegKeyPath = v21;
      goto LABEL_76;
    }
    if ( v17 != 18 && (v17 != 17 || (a3 & 0xF00) != 0) )
    {
      v27 = wcsrchr(v14, 0x5Cu);
      if ( v27 && (*v27 = 0, (v28 = wcsrchr(v14, 0x5Cu)) != 0LL) )
      {
        if ( a1 && (v29 = *(_QWORD *)(a1 + 224)) != 0 )
          v30 = *(_QWORD *)(v29 + 8);
        else
          v30 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v24, v14, v30);
        if ( v21 != -1073741535 )
        {
          if ( v21 < 0 )
            goto LABEL_41;
          *v28 = 0;
          if ( a1 && (v31 = *(_QWORD *)(a1 + 224)) != 0 )
            v32 = *(_QWORD *)(v31 + 8);
          else
            v32 = 0LL;
          v21 = RegRtlDeleteKeyTransacted(v24, v14, v32);
          if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741535 )
            goto LABEL_41;
        }
      }
      else
      {
        DeviceRegKeyPath = -1073741595;
      }
    }
  }
LABEL_76:
  if ( Handle )
    ZwClose(Handle);
  if ( v38 )
    ZwClose(v38);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
