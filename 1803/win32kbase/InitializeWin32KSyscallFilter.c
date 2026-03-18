/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C00AA1B0
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C00A8BF4 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00A9054 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // ebx
  void *v1; // rsi
  int v2; // edi
  void *v3; // rsi
  int v4; // edi
  void *v5; // rsi
  int v6; // edi
  unsigned int W32pServiceLimitFilter; // eax
  int v8; // ecx
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // edi
  PVOID PoolWithTag; // rax
  PVOID v13; // rax
  unsigned int v14; // r15d
  unsigned int *v15; // rsi
  unsigned __int8 **v16; // r14
  unsigned __int8 *v17; // rax
  __int64 v18; // r8
  int Win32KFilterBitmap; // eax
  int v21; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+54h] [rbp-1Ch]

  v0 = 0;
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v2 = v21;
      if ( !v21 )
        gdwServiceFilterAuditThrottleMode = 1;
    }
    else
    {
      v2 = 0;
      gdwServiceFilterAuditThrottleMode = v25;
      v21 = 0;
    }
    ZwClose(v1);
    if ( !v2 )
      goto LABEL_10;
  }
  gdwServiceFilterAuditThrottleMode = 1;
LABEL_10:
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v3 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v4 = v21;
      if ( !v21 )
        gdwServiceFilterAuditCaptureWER = 1;
    }
    else
    {
      v4 = 0;
      gdwServiceFilterAuditCaptureWER = v25;
      v21 = 0;
    }
    ZwClose(v3);
    if ( !v4 )
      goto LABEL_19;
  }
  gdwServiceFilterAuditCaptureWER = 1;
LABEL_19:
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v5 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
    if ( ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v6 = v21;
      if ( !v21 )
        LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
    }
    else
    {
      v6 = 0;
      LODWORD(gstServiceFilterAuditStackCacheSize) = v25;
      v21 = 0;
    }
    ZwClose(v5);
    if ( !v6 )
      goto LABEL_28;
  }
  LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
LABEL_28:
  W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
  gaWin32KSyscallList = 0LL;
  v8 = W32pServiceLimitFilter >> 3;
  v9 = (W32pServiceLimitFilter & 7) == 0;
  qword_1C01A5228 = 0LL;
  qword_1C01A5238 = 529LL;
  qword_1C01A5248 = 296LL;
  v10 = (W32pServiceLimitFilter >> 3) + 1;
  qword_1C01A5258 = 187LL;
  if ( v9 )
    v10 = v8;
  qword_1C01A5268 = 414LL;
  qword_1C01A5230 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  v11 = v10;
  qword_1C01A5278 = 270LL;
  qword_1C01A5240 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C01A5250 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C01A5260 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C01A5270 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C01A5280 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  dword_1C01A5288 = 364;
  dword_1C01A528C = 1;
  if ( gdwServiceFilterAuditCaptureWER )
  {
    if ( (v10 & 3) != 0 )
      v11 = v10 - (v10 & 3) + 4;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x6C667355u);
    gafServiceFilterAuditCache = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_47;
    memset(PoolWithTag, 0, v11);
    if ( !gdwServiceFilterAuditThrottleMode )
    {
      gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL;
      v13 = ExAllocatePoolWithTag((POOL_TYPE)512, gstServiceFilterAuditStackCacheSize, 0x6C667355u);
      gafServiceFilterAuditStackCache = v13;
      if ( v13 )
      {
        memset(v13, 0, gstServiceFilterAuditStackCacheSize);
        goto LABEL_37;
      }
LABEL_47:
      v0 = -1073741801;
LABEL_48:
      FreeWin32KSyscallFilter();
      return (unsigned int)v0;
    }
  }
LABEL_37:
  v14 = 0;
  v15 = (unsigned int *)&qword_1C01A5228;
  v16 = (unsigned __int8 **)gaWin32KFilterBitmap;
  do
  {
    if ( *v15 )
    {
      v17 = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, v11, 0x6C667355u);
      *v16 = v17;
      if ( !v17 )
        goto LABEL_47;
      Win32KFilterBitmap = CreateWin32KFilterBitmap(*v15, *((const char **const *)v15 - 1), v18, v11, v17);
      v0 = Win32KFilterBitmap;
      if ( Win32KFilterBitmap == 127 )
      {
        v0 = 0;
      }
      else if ( Win32KFilterBitmap )
      {
        break;
      }
    }
    else
    {
      *v16 = 0LL;
    }
    ++v14;
    ++v16;
    v15 += 4;
  }
  while ( v14 < 7 );
  if ( v0 < 0 )
    goto LABEL_48;
  return (unsigned int)v0;
}
