/*
 * XREFs of WheapPfaRetireExpiredMemoryEntries @ 0x1408DE0D0
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1408DD744 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapSqmAddToStream @ 0x1408DE454 (WheapSqmAddToStream.c)
 */

void __fastcall WheapPfaRetireExpiredMemoryEntries(unsigned __int64 a1)
{
  PVOID *v2; // rbx
  unsigned __int64 v3; // rbp
  PVOID *v4; // rdi
  PVOID **v5; // rax
  int v6; // eax
  _DWORD v7[12]; // [rsp+20h] [rbp-48h] BYREF

  if ( WheapPolicyMemPfaTimeout && a1 >= WheapPolicyMemPfaTimeout )
  {
    v2 = (PVOID *)WheapPfaList;
    v3 = a1 - WheapPolicyMemPfaTimeout;
    while ( v2 != &WheapPfaList )
    {
      v4 = v2;
      v2 = (PVOID *)*v2;
      if ( (unsigned __int64)v4[4] <= v3 )
      {
        if ( v2[1] != v4 || (v5 = (PVOID **)v4[1], *v5 != v4) )
          __fastfail(3u);
        *v5 = v2;
        v2[1] = v5;
        v6 = *((unsigned __int16 *)v4 + 8);
        v7[6] = (a1 - (unsigned __int64)v4[3]) / 0x989680;
        v7[2] = 2;
        v7[0] = 1;
        v7[4] = 1;
        v7[10] = v6;
        v7[8] = 1;
        WheapSqmAddToStream(7213LL, 3LL, v7);
        WheapSqmCollectWheaPolicyTelemetry();
        ExFreePoolWithTag(v4, 0x61656857u);
      }
    }
  }
}
