/*
 * XREFs of IopSymlinkQueryEnabledClasses @ 0x14075F41C
 * Callers:
 *     IopSymlinkRegistryCallback @ 0x14075F3F0 (IopSymlinkRegistryCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     IopOpenRegistryKey @ 0x1406C7B50 (IopOpenRegistryKey.c)
 */

__int64 __fastcall IopSymlinkQueryEnabledClasses(PCWSTR SourceString)
{
  __int32 v1; // ebx
  NTSTATUS v2; // esi
  unsigned __int16 v3; // di
  ULONG Length; // [rsp+28h] [rbp-79h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING v9; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v10[2]; // [rsp+68h] [rbp-39h]
  UNICODE_STRING v11; // [rsp+70h] [rbp-31h] BYREF
  int v12; // [rsp+80h] [rbp-21h]
  UNICODE_STRING v13; // [rsp+88h] [rbp-19h] BYREF
  int v14; // [rsp+98h] [rbp-9h]
  UNICODE_STRING v15; // [rsp+A0h] [rbp-1h] BYREF
  int v16; // [rsp+B0h] [rbp+Fh]
  _BYTE KeyValueInformation[12]; // [rsp+B8h] [rbp+17h] BYREF
  int v18; // [rsp+C4h] [rbp+23h]

  KeyHandle = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  LOBYTE(Length) = 0;
  v2 = IopOpenRegistryKey(&KeyHandle, 0LL, &DestinationString, 0x20019u, Length);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&v9, L"SymlinkLocalToLocalEvaluation");
    v10[0] = 1;
    RtlInitUnicodeString(&v11, L"SymlinkLocalToRemoteEvaluation");
    v12 = 2;
    RtlInitUnicodeString(&v13, L"SymlinkRemoteToRemoteEvaluation");
    v14 = 8;
    RtlInitUnicodeString(&v15, L"SymlinkRemoteToLocalEvaluation");
    v3 = 0;
    v16 = 4;
    while ( 1 )
    {
      v2 = ZwQueryValueKey(
             KeyHandle,
             (UNICODE_STRING *)((char *)&v9 + 24 * v3),
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
      if ( v2 < 0 )
        break;
      if ( v18 )
        v1 += v10[6 * v3];
      if ( ++v3 >= 4u )
      {
        _InterlockedExchange(&IopSymlinkEnabledTypes, v1);
        break;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
