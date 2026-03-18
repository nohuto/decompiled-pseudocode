/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C0073790
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C0073BD4 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00B7A3C (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  int Win32KFilterBitmap; // ebx
  void *v1; // rsi
  int v2; // edi
  void *v3; // rsi
  int v4; // edi
  void *v5; // rsi
  unsigned int W32pServiceLimitFilter; // eax
  int v7; // ecx
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // edi
  PVOID PoolWithTag; // rax
  unsigned int v12; // r15d
  unsigned int *v13; // rsi
  unsigned __int8 **v14; // r14
  unsigned __int8 *v15; // rax
  int v16; // r8d
  bool v17; // sf
  int v19; // edi
  PVOID v20; // rax
  int v21; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-3Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+54h] [rbp-1Ch]

  Win32KFilterBitmap = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v1 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v1 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditThrottleMode");
    if ( ZwQueryValueKey(v1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v2 = 0;
      gdwServiceFilterAuditThrottleMode = v25;
      v21 = 0;
    }
    else
    {
      v2 = v21;
      if ( !v21 )
        gdwServiceFilterAuditThrottleMode = 1;
    }
    ZwClose(v1);
    if ( !v2 )
      goto LABEL_10;
  }
  gdwServiceFilterAuditThrottleMode = 1;
LABEL_10:
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v3 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v3 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditCaptureWER");
    if ( ZwQueryValueKey(v3, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v4 = 0;
      gdwServiceFilterAuditCaptureWER = v25;
      v21 = 0;
    }
    else
    {
      v4 = v21;
      if ( !v21 )
        gdwServiceFilterAuditCaptureWER = 1;
    }
    ZwClose(v3);
    if ( !v4 )
      goto LABEL_19;
  }
  gdwServiceFilterAuditCaptureWER = 1;
LABEL_19:
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v21 = gdwPolicyFlags;
  while ( 1 )
  {
    v5 = OpenCacheKeyEx(0LL, 0x34u, 0x20019u, &v21);
    if ( !v5 )
      break;
    RtlInitUnicodeString(&DestinationString, L"ServiceFilterAuditStackCacheSize");
    if ( ZwQueryValueKey(v5, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
    {
      v19 = 0;
      LODWORD(gstServiceFilterAuditStackCacheSize) = v25;
      v21 = 0;
    }
    else
    {
      v19 = v21;
      if ( !v21 )
        LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
    }
    ZwClose(v5);
    if ( !v19 )
      goto LABEL_22;
  }
  LODWORD(gstServiceFilterAuditStackCacheSize) = 4096;
LABEL_22:
  W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
  gaWin32KSyscallList = 0LL;
  v7 = W32pServiceLimitFilter >> 3;
  v8 = (W32pServiceLimitFilter & 7) == 0;
  qword_1C0214688 = 0LL;
  qword_1C0214698 = 542LL;
  qword_1C02146A8 = 312LL;
  v9 = (W32pServiceLimitFilter >> 3) + 1;
  qword_1C02146B8 = 1LL;
  if ( v8 )
    v9 = v7;
  qword_1C02146C8 = 432LL;
  qword_1C0214690 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainer;
  v10 = v9;
  qword_1C02146D8 = 268LL;
  qword_1C02146A0 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerPlugin;
  qword_1C02146B0 = (__int64)&Win32KSyscallFilterList::FontDrvHost;
  qword_1C02146C0 = (__int64)&Win32KSyscallFilterList::Rs1RestrictedAppcontainerMiniPlugin;
  qword_1C02146D0 = (__int64)&Win32KSyscallFilterList::Rs3RestrictedAppcontainer;
  qword_1C02146E0 = (__int64)&Win32KSyscallFilterList::Rs3HvsiRdpClient;
  dword_1C02146E8 = 377;
  dword_1C02146EC = 1;
  if ( !gdwServiceFilterAuditCaptureWER )
    goto LABEL_29;
  if ( (v9 & 3) != 0 )
    v10 = v9 - (v9 & 3) + 4;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x6C667355u);
  gafServiceFilterAuditCache = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_46;
  memset(PoolWithTag, 0, v10);
  if ( !gdwServiceFilterAuditThrottleMode )
  {
    gstServiceFilterAuditStackCacheSize = (gstServiceFilterAuditStackCacheSize + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    v20 = ExAllocatePoolWithTag((POOL_TYPE)512, gstServiceFilterAuditStackCacheSize, 0x6C667355u);
    gafServiceFilterAuditStackCache = v20;
    if ( v20 )
    {
      memset(v20, 0, gstServiceFilterAuditStackCacheSize);
      goto LABEL_29;
    }
LABEL_46:
    Win32KFilterBitmap = -1073741801;
    goto LABEL_47;
  }
LABEL_29:
  v12 = 0;
  v13 = (unsigned int *)&qword_1C0214688;
  v14 = (unsigned __int8 **)&gaWin32KFilterBitmap;
  while ( !*v13 )
  {
    *v14 = 0LL;
LABEL_35:
    ++v12;
    ++v14;
    v13 += 4;
    if ( v12 >= 7 )
      goto LABEL_36;
  }
  v15 = (unsigned __int8 *)ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x6C667355u);
  *v14 = v15;
  if ( v15 )
  {
    Win32KFilterBitmap = CreateWin32KFilterBitmap(*v13, *((const char **const *)v13 - 1), v16, v10, v15);
    if ( Win32KFilterBitmap == 127 )
      Win32KFilterBitmap = 0;
    v17 = Win32KFilterBitmap < 0;
    if ( Win32KFilterBitmap )
      goto LABEL_37;
    goto LABEL_35;
  }
  Win32KFilterBitmap = -1073741801;
LABEL_36:
  v17 = Win32KFilterBitmap < 0;
LABEL_37:
  if ( v17 )
LABEL_47:
    FreeWin32KSyscallFilter();
  return (unsigned int)Win32KFilterBitmap;
}
