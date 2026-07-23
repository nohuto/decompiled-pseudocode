/*
 * XREFs of ObpCloseHandle @ 0x1405F673C
 * Callers:
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140160874 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x140290890 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405D2160 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v4; // rdi
  char v5; // r12
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rbx
  PEPROCESS v8; // rbp
  signed __int64 *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  bool v13; // [rsp+80h] [rbp+18h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( !ObpIsKernelHandle(a1, a2) )
  {
    v8 = (PEPROCESS)Process;
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      Count = ObReferenceProcessHandleTable(Process);
      if ( Count )
      {
        v5 = 1;
        goto LABEL_3;
      }
    }
    else
    {
      Count = Process[131].Count;
      if ( Count != ObpKernelHandleTable )
        goto LABEL_3;
    }
    return (unsigned int)-1073741816;
  }
  Count = ObpKernelHandleTable;
  v4 ^= 0xFFFFFFFF80000000uLL;
  v8 = PsInitialSystemProcess;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  v9 = ExMapHandleToPointer((unsigned int *)Count, v4);
  if ( v9 )
  {
    v10 = ObCloseHandleTableEntry(Count, v9, (ULONG_PTR)v8, v4, a2, 0);
LABEL_5:
    v11 = v10;
    goto LABEL_6;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 >= 0xFFFFFFFFFFFFFFFAuLL || v4 == 0 )
    goto LABEL_29;
  ExQueryHandleExceptionsPermanency(Count, &v14, &v13);
  if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v13 )
    ExHandleLogBadReference(Count, v4, a2);
  if ( !a2 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 && Process[127].Count && (_BYTE)KdDebuggerEnabled )
      KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
    goto LABEL_29;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[132].Count && !*(_QWORD *)(Count + 96) )
  {
LABEL_29:
    v11 = -1073741816;
    if ( v4 + 6 <= 5 )
      v11 = 0;
    goto LABEL_6;
  }
  if ( KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    v10 = KeRaiseUserException(0xC0000008);
    goto LABEL_5;
  }
  v11 = -1073741816;
LABEL_6:
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v11;
}
