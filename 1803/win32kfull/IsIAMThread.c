/*
 * XREFs of IsIAMThread @ 0x1C00F1F8C
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1C0007290 (NtUserSetActivationFilter.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F1C80 (_RegisterWindowArrangementCallout.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01B3B48 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
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
