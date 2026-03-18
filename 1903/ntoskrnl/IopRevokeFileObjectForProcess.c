/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x14029A054
 * Callers:
 *     IopCheckHandleForRevocation @ 0x140299DF0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 *     IopCancelIrpsInFileObjectList @ 0x1401275E0 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140674DF4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  int FileObjectExtension; // eax
  _DWORD *v6; // [rsp+50h] [rbp+18h] BYREF

  FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v6);
  if ( FileObjectExtension >= 0 )
  {
    *v6 |= 4u;
    FileObjectExtension = 0;
  }
  if ( FileObjectExtension == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
