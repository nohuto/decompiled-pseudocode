/*
 * XREFs of NtCancelIoFileEx @ 0x1406D0140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IopCancelIrpsInFileObjectList @ 0x140128000 (IopCancelIrpsInFileObjectList.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14067A504 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

NTSTATUS __fastcall NtCancelIoFileEx(void *a1, __int64 a2, unsigned __int64 a3)
{
  KPROCESSOR_MODE PreviousMode; // r10
  __int64 v6; // r8
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rdi
  int v10; // eax
  int v11; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( a3 < 0x7FFFFFFF0000LL )
      v6 = a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v9 = Object;
    v10 = IopCancelIrpsInFileObjectList((__int64)Object, (int)KeGetCurrentThread()->ApcState.Process, a2, 0, 0, 0);
    v11 = v10;
    if ( !a2 || !v10 )
      v11 = IopCancelIrpsInThreadListForCurrentProcess((__int64)v9, a2) | v10;
    *(_DWORD *)a3 = v11 == 0 ? 0xC0000225 : 0;
    *(_QWORD *)(a3 + 8) = 0LL;
    ObfDereferenceObject(v9);
    return v11 == 0 ? 0xC0000225 : 0;
  }
  return result;
}
