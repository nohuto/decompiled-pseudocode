/*
 * XREFs of LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D2FD0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 */

void LdrpInitializeCriticalSectionExceptionGlobalMitigation()
{
  NTSTATUS v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-70h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v4; // [rsp+44h] [rbp-64h]
  int v5; // [rsp+48h] [rbp-60h]
  int v6; // [rsp+4Ch] [rbp-5Ch]

  if ( LdrpIsSecureProcess
    || (RtlpRaiseExceptionOnPossibleDeadlock = 0, NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1801193A0) >= 0)
    && (v0 = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180119370,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength),
        NtClose(KeyHandle),
        v0 >= 0)
    && v4 == 4
    && v5 == 4
    && v6 )
  {
    RtlpRaiseExceptionOnPossibleDeadlock = 1;
  }
}
