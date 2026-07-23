/*
 * XREFs of _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4
 * Callers:
 *     _CmOpenCommonClassRegKey @ 0x14059FBD4 (_CmOpenCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140597C9C (_CmGetCommonClassRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x1406D4790 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenCommonClassRegKeyWorker(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v9; // rbx
  unsigned int v11; // r15d
  SIZE_T v13; // rdi
  wchar_t *pszDest; // rax
  wchar_t *v15; // rsi
  signed int CommonClassRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v18; // edi
  int v19; // edx
  __int64 v20; // rcx
  int Tree; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  v28 = 0LL;
  Handle = 0LL;
  v9 = a2;
  v11 = 4;
  v13 = (a3 & 0x200) != 0 ? 320 : 200;
  pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
  while ( 1 )
  {
    v15 = pszDest;
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v13 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(
                              (unsigned int)v13 >> 1,
                              v9,
                              a3,
                              a4,
                              v25,
                              pszDest,
                              cchDest,
                              (unsigned int *)&v31);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_4;
    ExFreePoolWithTag(v15, 0);
    v23 = 2LL * (unsigned int)v31;
    v15 = 0LL;
    LODWORD(v13) = -1;
    if ( v23 <= 0xFFFFFFFF )
      LODWORD(v13) = 2 * v31;
    CommonClassRegKeyPath = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_4;
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13, 0x52504E50u);
    v9 = a2;
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_4:
  if ( CommonClassRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (int)v15;
      if ( a1 )
        v24 = *(_QWORD *)(a1 + 224);
      else
        v24 = 0LL;
      CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v24, 0LL, 0x2000000LL, &Handle);
      if ( CommonClassRegKeyPath < 0 )
        goto LABEL_22;
      v19 = (int)Handle;
      goto LABEL_14;
    }
    CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v15);
    if ( CommonClassRegKeyPath < 0 )
      goto LABEL_22;
    Length = DestinationString.Length;
    if ( DestinationString.Length >= (unsigned int)v13
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      CommonClassRegKeyPath = -1073741811;
      goto LABEL_22;
    }
    v18 = (_DWORD)v15 + 50;
    DestinationString.MaximumLength -= 50;
    DestinationString.Buffer = v15 + 25;
    DestinationString.Length = Length - 50;
    if ( RtlPrefixUnicodeString(&`_CmOpenCommonClassRegKeyWorker'::`2'::ClassKeyPrefix, &DestinationString, 1u) )
    {
      v11 = 7;
      v18 = (_DWORD)v15 + 78;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::DeviceClassesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 8;
      v18 = (_DWORD)v15 + 94;
    }
    else if ( RtlPrefixUnicodeString(
                &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                &DestinationString,
                1u) )
    {
      v11 = 14;
      v18 = (_DWORD)v15 + 86;
    }
    CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v11, &v28);
    if ( CommonClassRegKeyPath >= 0 )
    {
      v19 = v28;
LABEL_14:
      if ( a6 )
      {
        Tree = PnpCtxRegCreateTree(a1, v19, v18, 0, a5, 0LL, a7, (__int64)a8);
      }
      else
      {
        if ( a1 )
          v20 = *(_QWORD *)(a1 + 224);
        else
          LODWORD(v20) = 0;
        Tree = SysCtxRegOpenKey(v20, v19, v18, 0, a5, a7);
        if ( Tree >= 0 )
          *a8 = 2;
      }
      if ( Tree == -1073741444 )
      {
        CommonClassRegKeyPath = -1073741595;
      }
      else if ( Tree < 0 )
      {
        CommonClassRegKeyPath = Tree;
      }
    }
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
