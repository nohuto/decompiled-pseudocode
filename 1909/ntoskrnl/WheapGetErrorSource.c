/*
 * XREFs of WheapGetErrorSource @ 0x1403400FC
 * Callers:
 *     WheapReportBootError @ 0x14033F4F8 (WheapReportBootError.c)
 *     WheaGetErrorSource @ 0x14033F700 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x14033F730 (WheaReportHwError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14033FD40 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1403422F4 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x140919330 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 *result; // rax

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  result = *(__int64 **)(a1 + 16);
  if ( v2 <= 0 )
    return 0LL;
  while ( *((_DWORD *)result + 31) != a2 || *((_BYTE *)result + 88) || *((_DWORD *)result + 27) != 2 )
  {
    result = (__int64 *)*result;
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return result;
}
