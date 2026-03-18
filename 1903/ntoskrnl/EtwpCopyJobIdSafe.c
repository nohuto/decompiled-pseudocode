/*
 * XREFs of EtwpCopyJobIdSafe @ 0x1408F4AD8
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x140197F0C (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 1220);
  *a1 = result;
  return result;
}
