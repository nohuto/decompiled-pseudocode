/*
 * XREFs of AcpiPccExecuteCommand @ 0x1C00ACCB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 *     AcpiPccExecuteCommandAsync @ 0x1C0057D60 (AcpiPccExecuteCommandAsync.c)
 */

__int64 __fastcall AcpiPccExecuteCommand(char *DeferredContext, char a2)
{
  __int64 result; // rax
  _OWORD v5[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v5, 0, 0x38uLL);
  KeInitializeEvent((PRKEVENT)&v5[1], SynchronizationEvent, 0);
  result = AcpiPccExecuteCommandAsync(DeferredContext, a2, (__int64)AcpiPccSyncCompletionCallback, (__int64)v5);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&v5[1], Executive, 0, 0, 0LL);
    return DWORD2(v5[2]);
  }
  return result;
}
