/*
 * XREFs of RIMGetHMonitor @ 0x1C0112F04
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     GetHMonitorFromPointerInfo @ 0x1C01510D0 (GetHMonitorFromPointerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 480) && !*(_DWORD *)(a1 + 1192) )
    return -1LL;
  v2 = *(_QWORD *)(a1 + 1200);
  if ( v2 )
    return *(_QWORD *)v2;
  return result;
}
