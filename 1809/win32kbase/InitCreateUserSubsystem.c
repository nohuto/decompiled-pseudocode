/*
 * XREFs of InitCreateUserSubsystem @ 0x1C021BFC0
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     wcschr @ 0x1C00A667C (wcschr.c)
 *     wcsstr @ 0x1C00A676C (wcsstr.c)
 */

__int64 InitCreateUserSubsystem()
{
  __int64 result; // rax
  wchar_t *v1; // rbx
  void *v2; // rsi
  __int64 v3; // rbp
  NTSTATUS v4; // eax
  int v5; // edi
  __int64 v6; // rax
  wchar_t *v8; // rax
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  ULONG v11; // eax
  wchar_t *v12; // rax
  UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+10h] BYREF

  result = Win32AllocPoolWithQuota(1280LL, 0x78747355u);
  v1 = (wchar_t *)result;
  if ( !result )
    return result;
  v15 = gdwPolicyFlags;
  v2 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v15);
  if ( v2 )
  {
    while ( 1 )
    {
      Length = 1226;
      v3 = Win32AllocPoolWithQuota(1226LL, 0x72707355u);
      if ( !v3 )
      {
LABEL_12:
        ZwClose(v2);
        goto LABEL_13;
      }
      RtlInitUnicodeString(&DestinationString, L"Windows");
      v4 = ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, (PVOID)v3, Length, &Length);
      if ( ((v4 + 0x80000000) & 0x80000000) != 0 || v4 == -2147483643 )
        break;
      Win32FreePool(v3);
      if ( !v15 )
        goto LABEL_12;
      ZwClose(v2);
      v2 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v15);
      if ( !v2 )
        goto LABEL_13;
    }
    v5 = 607;
    if ( *(_DWORD *)(v3 + 8) >> 1 < 0x25Fu )
      v5 = *(_DWORD *)(v3 + 8) >> 1;
    if ( *(_DWORD *)(v3 + 8) < 2u )
    {
      *v1 = 0;
    }
    else
    {
      *(_WORD *)(v3 + 2LL * (unsigned int)(v5 - 1) + 12) = 0;
      RtlStringCchCopyW(v1, 0x25FuLL, (NTSTRSAFE_PCWSTR)(v3 + 12));
    }
    Win32FreePool(v3);
    ZwClose(v2);
  }
  else
  {
LABEL_13:
    if ( RtlStringCchCopyW(v1, 0x25FuLL, L"SharedSection=,3072") < 0 )
    {
LABEL_30:
      Win32FreePool((__int64)v1);
      return 0LL;
    }
    v6 = -1LL;
    while ( v1[++v6] != 0 )
      ;
    v5 = v6 + 1;
  }
  if ( !v5 )
    goto LABEL_30;
  gdwDesktopSectionSize = 512;
  gdwNOIOSectionSize = 128;
  v8 = wcsstr(v1, L"SharedSection");
  if ( v8 )
  {
    v8[32] = 0;
    v9 = wcschr(v8, 0x2Cu);
    v10 = v9;
    if ( v9 )
    {
      RtlInitUnicodeString(&String, v9 + 1);
      RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
      v11 = gdwDesktopSectionSize;
      if ( gdwDesktopSectionSize < 0x200 )
      {
        v11 = 512;
        gdwDesktopSectionSize = 512;
      }
      gdwNOIOSectionSize = v11;
      v12 = wcschr(v10 + 1, 0x2Cu);
      if ( v12 )
      {
        RtlInitUnicodeString(&String, v12 + 1);
        RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
        if ( gdwNOIOSectionSize < 0x80 )
          gdwNOIOSectionSize = 128;
      }
    }
  }
  Win32FreePool((__int64)v1);
  return 1LL;
}
