/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x140284D10
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1402849A0 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     IopCancelIrpsInFileObjectList @ 0x140121A0C (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140676134 (IopCancelIrpsInThreadListForCurrentProcess.c)
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
