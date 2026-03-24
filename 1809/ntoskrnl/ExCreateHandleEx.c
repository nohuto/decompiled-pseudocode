/*
 * XREFs of ExCreateHandleEx @ 0x1405D1380
 * Callers:
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     NtCreateJobObject @ 0x140605F80 (NtCreateJobObject.c)
 *     ObCompleteObjectDuplication @ 0x140612FA0 (ObCompleteObjectDuplication.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B15D0 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406B73FC (RtlpInsertStringAtom.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084A790 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTableEntry @ 0x1405D1470 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x1405FB378 (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x1408CE15C (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x1408CE3E8 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3 & 0x1FFFFFF;
  HIDWORD(v13) = 0;
  if ( (a4 & 8) != 0 )
    v5 |= 0x2000000u;
  CurrentThread = KeGetCurrentThread();
  v8 = (a2 << 16) ^ ((a4 << 17) ^ ((_DWORD)a2 << 16)) & 0xE0000 | 1;
  LODWORD(v13) = v5;
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  v9 = ExpAllocateHandleTableEntry(a1, &v14);
  v10 = v14;
  v11 = (_QWORD *)v9;
  if ( v9 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14) )
    {
      ExpFreeHandleTableEntry(a1, v10, v11);
      v10 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v10, 1LL);
      v11[1] = v13;
      *v11 = v8;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v10;
}
