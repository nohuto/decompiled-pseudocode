/*
 * XREFs of PopFxMergeActiveTimeAccounting @ 0x1402D8BC8
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x1402D8C0C (PopFxPauseDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxMergeActiveTimeAccounting(_QWORD *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 result; // rax

  v1 = 5LL;
  a1[4] += a1[16];
  a1[5] += a1[17];
  v2 = a1 + 6;
  do
  {
    *v2 += v2[12];
    result = v2[17];
    v2[5] += result;
    ++v2;
    --v1;
  }
  while ( v1 );
  return result;
}
