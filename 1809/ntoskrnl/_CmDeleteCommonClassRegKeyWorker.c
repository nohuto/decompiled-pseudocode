/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x1408F7560 (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140597C9C (_CmGetCommonClassRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 a1, __int64 a2, __int16 a3, int a4, char a5)
{
  __int64 v6; // rbx
  int v8; // r15d
  SIZE_T v10; // rdi
  wchar_t *pszDest; // rax
  signed int CommonClassRegKeyPath; // ebx
  unsigned __int64 v13; // rcx
  wchar_t *v14; // r14
  unsigned __int16 Length; // bx
  const WCHAR *v16; // rdi
  char *v17; // rcx
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
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  v28 = 0LL;
  Handle = 0LL;
  v6 = a2;
  v8 = 4;
  v10 = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x52504E50u);
  while ( 1 )
  {
    v14 = pszDest;
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v10 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                              (unsigned int)v10 >> 1,
                              v6,
                              a3,
                              a4,
                              v25,
                              pszDest,
                              cchDest,
                              (unsigned int *)&v31);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(v14, 0);
    v13 = 2LL * (unsigned int)v31;
    v14 = 0LL;
    LODWORD(v10) = -1;
    if ( v13 <= 0xFFFFFFFF )
      LODWORD(v10) = 2 * v31;
    CommonClassRegKeyPath = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_9;
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
    v6 = a2;
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_9:
  if ( CommonClassRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v16 = v14;
      if ( a1 )
        v18 = *(_QWORD *)(a1 + 224);
      else
        v18 = 0LL;
      CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v18, 0LL, 0x2000000LL, &Handle);
      if ( CommonClassRegKeyPath < 0 )
        goto LABEL_43;
      v17 = (char *)Handle;
      goto LABEL_29;
    }
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v14);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_43;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v10
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_43;
    }
    v16 = v14 + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = v14 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v8 = 7;
      v16 = v14 + 39;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 8;
      v16 = v14 + 47;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 14;
      v16 = v14 + 43;
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v28);
    if ( CommonClassRegKeyPath >= 0 )
    {
      v17 = v28;
LABEL_29:
      if ( a5 )
      {
        if ( a1 && (v19 = *(_QWORD *)(a1 + 224)) != 0 )
          v20 = *(_QWORD *)(v19 + 8);
        else
          v20 = 0LL;
        v21 = RegRtlDeleteTreeInternal(v17, v16, v20, 0);
      }
      else
      {
        if ( a1 && (v22 = *(_QWORD *)(a1 + 224)) != 0 )
          v23 = *(_QWORD *)(v22 + 8);
        else
          v23 = 0LL;
        v21 = RegRtlDeleteKeyTransacted(v17, v16, v23);
      }
      if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741444 )
        CommonClassRegKeyPath = v21;
    }
  }
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
