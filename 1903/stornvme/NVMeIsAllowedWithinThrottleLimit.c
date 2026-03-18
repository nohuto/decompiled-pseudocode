/*
 * XREFs of NVMeIsAllowedWithinThrottleLimit @ 0x1C0004EA8
 * Callers:
 *     NVMeMapError @ 0x1C0015E8C (NVMeMapError.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004430 (CalculateTimeDurationIn100ns.c)
 */

char __fastcall NVMeIsAllowedWithinThrottleLimit(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  int v6; // eax
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  _mm_lfence();
  v4 = *(_QWORD *)(a1 + 8LL * a2 + 3800);
  if ( v4 )
  {
    v8 = 0LL;
    StorPortExtendedFunction(47LL, a1, &v8);
    v5 = CalculateTimeDurationIn100ns(0LL, v8);
    v6 = *(_DWORD *)(v4 + 24);
    if ( v5 - *(_QWORD *)(v4 + 8) < *(_QWORD *)(v4 + 16) )
    {
      *(_DWORD *)(v4 + 24) = v6 + 1;
      return 0;
    }
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 8) = v5;
    *a3 = v6;
  }
  else
  {
    *a3 = 0;
  }
  return 1;
}
