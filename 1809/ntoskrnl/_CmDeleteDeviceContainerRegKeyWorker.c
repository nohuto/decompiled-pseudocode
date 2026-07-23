/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x1408F9BD0 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406EB848 (_CmGetDeviceContainerRegKeyPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rdi
  SIZE_T v9; // r15
  signed int DeviceContainerRegKeyPath; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  unsigned __int16 Length; // bx
  wchar_t *v14; // r14
  BOOLEAN v15; // r15
  char *v16; // rcx
  const WCHAR *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  signed int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v30) = a4;
  pszDest = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_39;
  v9 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v12,
                                  v25,
                                  pszDest,
                                  cchDest,
                                  (unsigned int *)&v30);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v11 = 2LL * (unsigned int)v30;
      pszDest = 0LL;
      v9 = 0xFFFFFFFFLL;
      if ( v11 <= 0xFFFFFFFF )
        v9 = (unsigned int)v11;
      DeviceContainerRegKeyPath = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_10:
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v17 = pszDest;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      else
        v18 = 0LL;
      DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &Handle);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_40;
      v16 = (char *)Handle;
      goto LABEL_25;
    }
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_40;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v9
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v14 = pszDest + 25;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = pszDest + 25;
      DestinationString.Length = Length - 50;
      v15 = RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::DeviceContainersKeyPrefix,
              &DestinationString,
              1u);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v15 != 0 ? 10 : 4, (__int64)&v28);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_40;
      v16 = v28;
      if ( !v15 )
        v14 = pszDest;
      v17 = v14 + 25;
LABEL_25:
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = RegRtlDeleteTreeInternal(v16, v17, v20, 0);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v16, v17, v23);
      }
      if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741444 )
        DeviceContainerRegKeyPath = v21;
      goto LABEL_40;
    }
LABEL_39:
    DeviceContainerRegKeyPath = -1073741811;
  }
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
