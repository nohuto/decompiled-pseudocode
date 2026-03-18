/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C00F94A0
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C00FFD24 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0058948 (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C00F9C94 (rimStoreRawDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v10 = result;
  if ( result )
  {
    if ( !*((_DWORD *)result + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v10, a5);
  }
  return result;
}
