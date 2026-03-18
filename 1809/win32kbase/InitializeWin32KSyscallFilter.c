/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C006BC70
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C006C0B8 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C0093048 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int v0; // r15d
  void *v1; // rdi
  int v2; // ebx
  void *v3; // rdi
  int v4; // ebx
  void *v5; // rdi
  unsigned int W32pServiceLimitFilter; // eax
  unsigned int v7; // r14d
  PVOID PoolWithTag; // rax
  unsigned int v9; // edi
  unsigned int *v10; // rbx
  unsigned __int8 **v11; // rsi
  unsigned __int8 *v12; // rax
  int v13; // r8d
  int Win32KFilterBitmap; // eax
  int v16; // ebx
  PVOID v17; // rax
  int v18; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]

  v0 = 0;
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v18);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v2 = 0;
      v18 = 0;
      gdwServiceFilterAuditThrottleMode = v22;
    }
    else
    {
      v2 = v18;
      if ( !v18 )
        gdwServiceFilterAuditThrottleMode = 1;
    }
    ZwClose(v1);
    if ( !v2 )
      goto LABEL_10;
  }
  gdwServiceFilterAuditThrottleMode = 1;
LABEL_10:
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v3 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v18);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v4 = 0;
      v18 = 0;
      gdwServiceFilterAuditCaptureWER = v22;
    }
    else
    {
      v4 = v18;
      if ( !v18 )
        gdwServiceFilterAuditCaptureWER = 1;
    }
    ZwClose(v3);
    if ( !v4 )
      goto LABEL_19;
  }
  gdwServiceFilterAuditCaptureWER = 1;
LABEL_19:
  v18 = gdwPolicyFlags;
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v18);
    if ( !v5 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
    if ( ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v16 = 0;
      v18 = 0;
      LODWORD(gstServiceFilterAuditStackCacheSize) = v22;
    }
    else
    {
      v16 = v18;
      if ( !v18 )
        LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
    }
    ZwClose(v5);
    if ( !v16 )
      goto LABEL_22;
  }
  LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
LABEL_22:
  W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
  v7 = W32pServiceLimitFilter >> 3;
  if ( (W32pServiceLimitFilter & 7) != 0 )
    ++v7;
  qword_1C01CCA60 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  qword_1C01CCA70 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C01CCA80 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C01CCA90 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C01CCAA0 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C01CCAB0 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  gaWin32KSyscallList = 0LL;
  qword_1C01CCA58 = 0LL;
  qword_1C01CCA68 = 540LL;
  qword_1C01CCA78 = 310LL;
  qword_1C01CCA88 = 190LL;
  qword_1C01CCA98 = 430LL;
  qword_1C01CCAA8 = 266LL;
  dword_1C01CCAB8 = 375;
  dword_1C01CCABC = 1;
  if ( !gdwServiceFilterAuditCaptureWER )
    goto LABEL_29;
  if ( (v7 & 3) != 0 )
    v7 += 4 - (v7 & 3);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x6C667355u);
  gafServiceFilterAuditCache = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_48;
  memset(PoolWithTag, 0, v7);
  if ( !gdwServiceFilterAuditThrottleMode )
  {
    gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = ExAllocatePoolWithTag((POOL_TYPE)512, gstServiceFilterAuditStackCacheSize, 0x6C667355u);
    gafServiceFilterAuditStackCache = v17;
    if ( v17 )
    {
      memset(v17, 0, gstServiceFilterAuditStackCacheSize);
      goto LABEL_29;
    }
LABEL_48:
    v0 = -1073741801;
    goto LABEL_49;
  }
LABEL_29:
  v9 = 0;
  v10 = (unsigned int *)&qword_1C01CCA58;
  v11 = (unsigned __int8 **)gaWin32KFilterBitmap;
  while ( 1 )
  {
    if ( !*v10 )
    {
      *v11 = 0LL;
      goto LABEL_34;
    }
    v12 = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, v7, 0x6C667355u);
    *v11 = v12;
    if ( !v12 )
      goto LABEL_48;
    Win32KFilterBitmap = CreateWin32KFilterBitmap(*v10, *((const char **const *)v10 - 1), v13, v7, v12);
    v0 = Win32KFilterBitmap;
    if ( Win32KFilterBitmap != 127 )
      break;
    v0 = 0;
LABEL_34:
    ++v9;
    ++v11;
    v10 += 4;
    if ( v9 >= 7 )
      goto LABEL_35;
  }
  if ( !Win32KFilterBitmap )
    goto LABEL_34;
LABEL_35:
  if ( v0 < 0 )
LABEL_49:
    FreeWin32KSyscallFilter();
  return (unsigned int)v0;
}
