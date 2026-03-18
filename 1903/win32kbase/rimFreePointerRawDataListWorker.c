/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C014FD88
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C01503F4 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      v5 = *(_QWORD *)(v4 + 8);
      if ( !v5 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
        v5 = *(_QWORD *)(v4 + 8);
      }
      Win32FreePool(v5);
      Win32FreePool(v4);
    }
    while ( v3 );
  }
}
