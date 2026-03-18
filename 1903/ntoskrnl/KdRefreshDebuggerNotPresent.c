/*
 * XREFs of KdRefreshDebuggerNotPresent @ 0x140181F30
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     KdpPrintString @ 0x140957D2C (KdpPrintString.c)
 */

BOOLEAN KdRefreshDebuggerNotPresent(void)
{
  __int64 v1; // rax
  char v2; // di
  BOOLEAN v3; // bl
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  const char *v6; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v6 = 0LL;
  if ( KdPitchDebugger )
    return 1;
  v1 = -1LL;
  v6 = "KDTARGET: Refreshing KD connection\n";
  do
    ++v1;
  while ( aKdtargetRefres[v1] );
  LOWORD(v5) = v1;
  v2 = KdEnterDebugger(0LL);
  KdpPrintString(&v5);
  v3 = (unsigned __int8)KdDebuggerNotPresent;
  LOBYTE(v4) = v2;
  KdExitDebugger(v4);
  return v3;
}
