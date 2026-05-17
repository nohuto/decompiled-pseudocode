/*
 * XREFs of RtlHpInitializeHeapManager @ 0x18010722C
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009D550 (NtQuerySystemInformation.c)
 *     RtlHpHeapManagerInitialize @ 0x18010A580 (RtlHpHeapManagerInitialize.c)
 *     RtlHpHeapManagerStart @ 0x18010A654 (RtlHpHeapManagerStart.c)
 */

NTSTATUS __fastcall RtlHpInitializeHeapManager(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int128 v5; // [rsp+30h] [rbp-68h] BYREF
  _BYTE SystemInformation[40]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v7; // [rsp+68h] [rbp-30h]

  *(_QWORD *)&v5 = 0x4000LL;
  RtlHpHeapManagerInitialize(a1, &v5);
  v5 = 0uLL;
  RtlpHpEnvHandle = 0uLL;
  result = NtQuerySystemInformation(SystemEmulationBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
    return RtlHpHeapManagerStart(v3, v2, v4, v7 + 1);
  return result;
}
