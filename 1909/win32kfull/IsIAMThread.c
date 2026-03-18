/*
 * XREFs of IsIAMThread @ 0x1C000EF88
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00027E0 (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1C0009C10 (NtUserSetActivationFilter.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C000B7E0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EB84C (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 448);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 288) == a1;
  return result;
}
