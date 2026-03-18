/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1405BFF38
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x1405BFDEC (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1405C0194 (_CmGetCommonClassRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  int v8; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v13; // rdi
  wchar_t *pszDest; // r14
  NTSTATUS CommonClassRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v17; // edi
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r13
  int Tree; // eax
  _DWORD *v22; // r12
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE v27; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  Handle = 0LL;
  v27 = 0LL;
  v8 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v11 = 4;
  LODWORD(v13) = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
  if ( pszDest )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v13 >> 1;
      CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                                (unsigned int)v13 >> 1,
                                v8,
                                a3,
                                a4,
                                v25,
                                pszDest,
                                cchDest,
                                (__int64)&v31);
      if ( CommonClassRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(pszDest, 0);
      pszDest = 0LL;
      v13 = 2LL * (unsigned int)v31;
      if ( v13 > 0xFFFFFFFF )
      {
        CommonClassRegKeyPath = -1073741675;
        goto LABEL_21;
      }
      pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
      if ( !pszDest )
        goto LABEL_36;
      v8 = a2;
    }
  }
  else
  {
LABEL_36:
    CommonClassRegKeyPath = -1073741801;
  }
  if ( CommonClassRegKeyPath < 0 )
    goto LABEL_21;
  if ( (a3 & 0x100) != 0 )
  {
    v17 = (int)pszDest;
    if ( a1 )
      v24 = *(_QWORD *)(a1 + 224);
    else
      v24 = 0LL;
    CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = (int)Handle;
    v27 = Handle;
  }
  else
  {
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v13
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_21;
    }
    v17 = (_DWORD)pszDest + 50;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = pszDest + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmOpenCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v11 = 7;
      v17 = (_DWORD)pszDest + 78;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 8;
      v17 = (_DWORD)pszDest + 94;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 14;
      v17 = (_DWORD)pszDest + 86;
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v11, &v27);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_21;
    v18 = (int)v27;
  }
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, v18, v17, 0, a5, 0LL, a7, (__int64)a8);
LABEL_19:
    if ( Tree != -1073741444 )
    {
      if ( Tree >= 0 )
        goto LABEL_21;
      goto LABEL_30;
    }
    CommonClassRegKeyPath = -1073741595;
    goto LABEL_21;
  }
  if ( a1 )
    v19 = *(_QWORD *)(a1 + 224);
  else
    LODWORD(v19) = 0;
  v20 = a7;
  Tree = SysCtxRegOpenKey(v19, v18, v17, 0, a5, a7);
  v22 = a8;
  if ( Tree >= 0 )
    *a8 = 2;
  if ( Tree != -1073741772 )
    goto LABEL_19;
  if ( v11 != 8 || !*(_BYTE *)(a1 + 4) )
  {
LABEL_30:
    CommonClassRegKeyPath = Tree;
    goto LABEL_21;
  }
  CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 9LL, &v27);
  if ( CommonClassRegKeyPath >= 0 )
  {
    Tree = SysCtxRegOpenKey(*(_QWORD *)(a1 + 224), (_DWORD)v27, v17, 0, a5, v20);
    if ( Tree >= 0 )
      *v22 = 2;
    goto LABEL_19;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
