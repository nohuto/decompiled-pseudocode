/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C014D718
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00597C8 (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C014DD84 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
