/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x1409340AC
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x140933F60 (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1405C0194 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegDeleteTree @ 0x14075451C (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x140933B34 (_PnpCtxRegDeleteKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933BAC (_PnpCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(__int64 a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  const WCHAR *v5; // rbx
  int v8; // r12d
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  wchar_t *pszDest; // r14
  int CommonClassRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  const WCHAR *v17; // rdi
  char *v18; // rdx
  char v19; // r13
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  char *v26; // [rsp+40h] [rbp-20h] BYREF
  char *v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+50h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v5 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 4;
  LODWORD(v10) = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
  if ( pszDest )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v10 >> 1;
      CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                                (unsigned int)v10 >> 1,
                                v5,
                                a3,
                                a4,
                                v24,
                                pszDest,
                                cchDest,
                                &v30);
      if ( CommonClassRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(pszDest, 0);
      pszDest = 0LL;
      v10 = 2LL * (unsigned int)v30;
      if ( v10 > 0xFFFFFFFF )
      {
        CommonClassRegKeyPath = -1073741675;
        goto LABEL_43;
      }
      pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v10, 0x52504E50u);
      if ( !pszDest )
        goto LABEL_7;
      v5 = a2;
    }
  }
  else
  {
LABEL_7:
    CommonClassRegKeyPath = -1073741801;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_43;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = pszDest;
    CommonClassRegKeyPath = PnpCtxRegOpenCurrentUserKey(a1, v11, v13, (__int64)&v27);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_43;
    v18 = v27;
    v26 = v27;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
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
    v17 = pszDest + 25;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmDeleteCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v8 = 7;
      v17 = pszDest + 39;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 8;
      v17 = pszDest + 47;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v8 = 14;
      v17 = pszDest + 43;
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v8, (__int64)&v26);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_43;
    v18 = v26;
  }
  v19 = a5;
  if ( a5 )
    v20 = PnpCtxRegDeleteTree(a1, v18, v17);
  else
    v20 = PnpCtxRegDeleteKey(a1, v18, v17);
  v21 = v20;
  if ( (!v20 || v20 == -1073741444 || v20 == -1073741772) && v8 == 8 && *(_BYTE *)(a1 + 4) )
  {
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 9, (__int64)&v26);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_43;
    if ( v19 )
      v22 = PnpCtxRegDeleteTree(a1, v26, v17);
    else
      v22 = PnpCtxRegDeleteKey(a1, v26, v17);
    if ( v21 == -1073741772 || v22 != -1073741772 )
      v21 = v22;
  }
  v12 = 0x80000000LL;
  if ( (int)(v21 + 0x80000000) >= 0 && v21 != -1073741444 )
    CommonClassRegKeyPath = v21;
LABEL_43:
  if ( v27 )
    PnpCtxRegCloseKey(v12, v27);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
