/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x140610A28
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x140008694 (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 */

__int64 __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *v5; // rax
  volatile unsigned __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebx
  volatile __int64 *v9; // rcx
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+28h] [rbp-10h]

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)ExMapHandleToPointer(PspCidTable, a2);
  v13 = 0LL;
  v6 = *v5;
  v12 = *v5 & 0xFFFFFFFFFFFE0001uLL;
  *v5 = v12;
  v7 = PspCidTable;
  v8 = (unsigned __int16)(v6 >> 1);
  _InterlockedExchangeAdd64(v5, 1uLL);
  v9 = (volatile __int64 *)(v7 + 48);
  _InterlockedOr(v11, 0);
  if ( *v9 )
    ExfUnblockPushLock(v9, 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    return ObDereferenceObjectEx(a3, v8);
  return result;
}
