/*
 * XREFs of _CmOpenDevicePanelRegKeyWorker @ 0x140939E90
 * Callers:
 *     _CmOpenDevicePanelRegKey @ 0x140939D1C (_CmOpenDevicePanelRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14062572C (_PnpCtxRegOpenKey.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406F26C0 (_PnpCtxRegCreateTree.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140933BAC (_PnpCtxRegOpenCurrentUserKey.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x140939C68 (_CmGetDevicePanelRegKeyPath.c)
 */

__int64 __fastcall CmOpenDevicePanelRegKeyWorker(
        __int64 Tree,
        const wchar_t *a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  SIZE_T i; // rdx
  __int64 v14; // rdx
  int DevicePanelRegKeyPath; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 Length; // bx
  BOOLEAN v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // eax
  int v24; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  void *v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v29) = a4;
  pszDest = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v11 = Tree;
  DestinationString.Buffer = 0LL;
  if ( !a3 || (a3 & 0xFFFFFE9F) != 0 )
    goto LABEL_30;
  LODWORD(v12) = 317;
  for ( i = 317LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DevicePanelRegKeyPath = CmGetDevicePanelRegKeyPath((unsigned int)v12 >> 1, a2, a3, v17, v24, pszDest, cchDest, &v29);
    if ( DevicePanelRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v29;
    if ( v12 > 0xFFFFFFFF )
    {
      DevicePanelRegKeyPath = -1073741675;
      goto LABEL_31;
    }
  }
  DevicePanelRegKeyPath = -1073741801;
LABEL_9:
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_31;
  if ( (a3 & 0x100) != 0 )
  {
    v21 = (__int64)pszDest;
    DevicePanelRegKeyPath = PnpCtxRegOpenCurrentUserKey(v11, v14, v16, (__int64)&v26);
    if ( DevicePanelRegKeyPath < 0 )
      goto LABEL_31;
    v20 = (__int64)v26;
    goto LABEL_22;
  }
  DevicePanelRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_31;
  Length = DestinationString.Length;
  if ( DestinationString.Length >= (unsigned int)v12
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_30:
    DevicePanelRegKeyPath = -1073741811;
    goto LABEL_31;
  }
  DestinationString.MaximumLength -= 50;
  DestinationString.Buffer = pszDest + 25;
  DestinationString.Length = Length - 50;
  v19 = RtlPrefixUnicodeString(&`_CmDeleteDevicePanelRegKeyWorker'::`2'::DevicePanelsKeyPrefix, &DestinationString, 1u);
  DevicePanelRegKeyPath = PnpCtxGetCachedContextBaseKey(v11, v19 != 0 ? 11 : 4, (__int64)&v27);
  if ( DevicePanelRegKeyPath < 0 )
    goto LABEL_31;
  v20 = v27;
  v21 = (__int64)(pszDest + 46);
  if ( !v19 )
    v21 = (__int64)(pszDest + 25);
LABEL_22:
  if ( a6 )
  {
    Tree = (unsigned int)PnpCtxRegCreateTree(v11, v20, v21, 0LL, a5, 0LL);
  }
  else
  {
    v22 = PnpCtxRegOpenKey(v11, v20, v21, 0, a5, a7);
    Tree = (unsigned int)v22;
    if ( v22 >= 0 )
      *a8 = 2;
  }
  if ( (_DWORD)Tree == -1073741444 )
  {
    DevicePanelRegKeyPath = -1073741595;
  }
  else if ( (int)Tree < 0 )
  {
    DevicePanelRegKeyPath = Tree;
  }
LABEL_31:
  if ( v26 )
    PnpCtxRegCloseKey(Tree, v26);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DevicePanelRegKeyPath;
}
