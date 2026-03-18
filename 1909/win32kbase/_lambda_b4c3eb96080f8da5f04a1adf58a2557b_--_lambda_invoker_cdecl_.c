/*
 * XREFs of _lambda_b4c3eb96080f8da5f04a1adf58a2557b_::_lambda_invoker_cdecl_ @ 0x1C00A0220
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall lambda_b4c3eb96080f8da5f04a1adf58a2557b_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void *v5; // rcx

  if ( !*(_DWORD *)(a1 + 864) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 393) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
      v5 = *(void **)(a1 + 384);
      *(_BYTE *)(a1 + 393) = 1;
      ZwSetEvent(v5, 0LL);
    }
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
}
