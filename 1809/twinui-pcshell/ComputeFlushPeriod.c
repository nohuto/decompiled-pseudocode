/*
 * XREFs of ComputeFlushPeriod @ 0x1800E3738
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x1800E43E4 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     TraceLoggingProviderId @ 0x1800E3650 (TraceLoggingProviderId.c)
 *     RunningHash @ 0x1800E428C (RunningHash.c)
 */

__int64 __fastcall ComputeFlushPeriod(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rdx
  GUID *v2; // rax
  unsigned __int64 v3; // r8
  int v5; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(const struct _TlgProvider_t **)(a1 + 328);
  v5 = 0;
  v2 = TraceLoggingProviderId(&v7, v1);
  v6 = v3 >> 4;
  v7 = *v2;
  RunningHash(&v5, &v7, 16LL);
  RunningHash(&v5, &v6, 8LL);
  return 32769 * ((9 * v5) ^ ((unsigned int)(9 * v5) >> 11)) % 0x927C0 + 600000;
}
