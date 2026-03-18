/*
 * XREFs of IsIAMThread @ 0x1C00D7DA0
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0006AE0 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0009580 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01D63A4 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 456);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
