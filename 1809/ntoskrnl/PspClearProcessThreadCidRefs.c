/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1405F7DAC
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x14001CD54 (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x1405F66A0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 *v5; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 result; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a1 + 486);
  v5 = ExMapHandleToPointer((unsigned int *)PspCidTable, a2);
  v6 = (unsigned __int64)*v5 >> 1;
  *v5 &= 0xFFFFFFFFFFFE0001uLL;
  v7 = PspCidTable;
  v8 = (unsigned __int16)v6;
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v7 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    return ObDereferenceObjectEx(a3, v8);
  return result;
}
