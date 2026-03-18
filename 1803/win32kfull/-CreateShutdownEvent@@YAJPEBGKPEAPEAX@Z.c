/*
 * XREFs of ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00B79CC
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateShutdownEvent(const unsigned __int16 *a1, int a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-258h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-248h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-218h] BYREF

  RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\%ws", gSessionId, a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = a2 | 0x240;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(a3, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
}
