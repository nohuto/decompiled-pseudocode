/*
 * XREFs of MmGetSessionCreateTime @ 0x14063A4A8
 * Callers:
 *     EtwpWriteProcessStarted @ 0x1406380D4 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionCreateTime(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1788) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 1336);
}
