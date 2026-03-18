/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C0123694
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C008966C (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01241B0 (rimStoreRawDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v11 = result;
  if ( result )
  {
    if ( !*((_DWORD *)result + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v11, a5);
  }
  return result;
}
