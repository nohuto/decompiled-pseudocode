/*
 * XREFs of ObpCloseHandle @ 0x14060F2BC
 * Callers:
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ObpIsKernelHandle @ 0x1400828B0 (ObpIsKernelHandle.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015C388 (ExQueryHandleExceptionsPermanency.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402A70B0 (KeRaiseUserException.c)
 *     ExHandleLogBadReference @ 0x140338B98 (ExHandleLogBadReference.c)
 *     ObReferenceProcessHandleTable @ 0x1405E67C4 (ObReferenceProcessHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall ObpCloseHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v4; // rdi
  char v5; // r12
  struct _EX_RUNDOWN_REF *Process; // rsi
  unsigned __int64 Count; // rbx
  PEPROCESS v8; // rbp
  volatile signed __int64 *v9; // rax
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
  v9 = (volatile signed __int64 *)ExMapHandleToPointer(Count, v4);
  if ( v9 )
  {
    v10 = ObCloseHandleTableEntry(Count, v9, v8, v4, a2, 0);
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
