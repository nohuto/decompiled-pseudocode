/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C00F9628
 * Callers:
 *     RIMFreeAllHoldingFrames @ 0x1C00F9240 (RIMFreeAllHoldingFrames.c)
 *     rimReclaimHoldingFrame @ 0x1C00F98E4 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFreePointerRawDataListWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1;
    do
    {
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      v4 = *(_QWORD *)(v3 + 8);
      if ( !v4 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
        v4 = *(_QWORD *)(v3 + 8);
      }
      Win32FreePool(v4);
      result = Win32FreePool(v3);
    }
    while ( v2 );
  }
  return result;
}
