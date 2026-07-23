/*
 * XREFs of IopCancelSynchronousIrpsForThread @ 0x14081A8FC
 * Callers:
 *     NtCancelSynchronousIoFile @ 0x14081E590 (NtCancelSynchronousIoFile.c)
 * Callees:
 *     IopCancelApcRequired @ 0x14008DAA0 (IopCancelApcRequired.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 */

__int64 __fastcall IopCancelSynchronousIrpsForThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[19]; // [rsp+20h] [rbp-98h] BYREF

  result = IopCancelApcRequired(a1, 0LL, a2);
  if ( (_DWORD)result )
  {
    memset(v5, 0, 0x88uLL);
    v5[11] = 0LL;
    v5[12] = a2;
    LOBYTE(v5[16]) = 1;
    KeInitializeEvent((PRKEVENT)&v5[13], NotificationEvent, 0);
    return IopCancelIrpsInThreadList(a1, (__int64)v5);
  }
  return result;
}
