/*
 * XREFs of ExCreateHandleEx @ 0x1405E6A10
 * Callers:
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     ObCompleteObjectDuplication @ 0x14063FF80 (ObCompleteObjectDuplication.c)
 *     AlpcpAllocateMessageFunction @ 0x1406D4970 (AlpcpAllocateMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406DA2BC (RtlpInsertStringAtom.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x140885CD0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     ExCreateHandle @ 0x14090B1E4 (ExCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExpAllocateHandleTableEntry @ 0x1405E6B00 (ExpAllocateHandleTableEntry.c)
 *     ExpFreeHandleTableEntry @ 0x14060F8C0 (ExpFreeHandleTableEntry.c)
 *     ExpSetHandleExtraInfo @ 0x14090B720 (ExpSetHandleExtraInfo.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExCreateHandleEx(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3 & 0x1FFFFFF;
  HIDWORD(v13) = 0;
  if ( (a4 & 8) != 0 )
    v5 |= 0x2000000u;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v13) = v5;
  v12 = (a2 << 16) ^ ((a4 << 17) ^ ((_DWORD)a2 << 16)) & 0xE0000 | 1;
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  v8 = ExpAllocateHandleTableEntry(a1, &v14);
  v9 = v14;
  v10 = (_QWORD *)v8;
  if ( v8 )
  {
    if ( a5 && (*a5 || a5[1]) && (unsigned int)ExpSetHandleExtraInfo(a1, v14) )
    {
      ExpFreeHandleTableEntry(a1, v9, v10);
      v9 = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(a1 + 96) )
        ExpUpdateDebugInfo(a1, CurrentThread, v9, 1LL);
      v10[1] = v13;
      *v10 = v12;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v9;
}
