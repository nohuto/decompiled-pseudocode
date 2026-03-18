/*
 * XREFs of MmGetSessionCreateTime @ 0x140637248
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14063531C (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
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
