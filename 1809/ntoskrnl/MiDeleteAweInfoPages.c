/*
 * XREFs of MiDeleteAweInfoPages @ 0x14084FD58
 * Callers:
 *     MiDeleteSectionAwe @ 0x1402B03D4 (MiDeleteSectionAwe.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 *     ExGetCallBackBlockRoutine @ 0x140088BB0 (ExGetCallBackBlockRoutine.c)
 *     MiLockAwePagesExclusive @ 0x1402B1194 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1402B1FB8 (MiUnlockAwePagesExclusive.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402BFF40 (MiReturnPartitionResidentAvailable.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402EE910 (RtlFindNextForwardRunClearEx.c)
 *     MiGetAweInfoPartition @ 0x14084FEF0 (MiGetAweInfoPartition.c)
 */

__int64 __fastcall MiDeleteAweInfoPages(_DWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  _DWORD *v7; // r12
  __int64 v8; // rax
  unsigned __int64 *v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rbp
  unsigned __int64 SetBits; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdi
  ULONG_PTR *v18; // rbp
  struct _KTHREAD *v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  __int64 AweInfoPartition; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0LL;
  v20 = CurrentThread;
  v6 = 0LL;
  v7 = a1;
  AweInfoPartition = MiGetAweInfoPartition(a1, a2, a3);
  MiLockAwePagesExclusive((__int64)v7, (__int64)CurrentThread);
  v8 = ExGetCallBackBlockRoutine((__int64)v7);
  v9 = (unsigned __int64 *)(v7 + 4);
  if ( (*v7 & 1) == 0 || KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[7] )
  {
    v10 = 0LL;
    v11 = v8;
    do
    {
      SetBits = RtlFindSetBitsEx(v9, 1uLL, v10);
      v13 = SetBits;
      if ( SetBits < v10 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v9, SetBits, &v22);
      v15 = v22;
      v16 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v15 = *v9;
      v17 = v15 - v13;
      RtlClearBitsEx((__int64)v9, v13, v17);
      v10 = v13 + v17 + v16;
      v5 += v11 * v17;
      v6 += MiFreeMdlPageRun(v11 * v13, v11 * v17, 0);
    }
    while ( v10 < *v9 );
    v18 = (ULONG_PTR *)AweInfoPartition;
    v7 = a1;
    if ( v5 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(AweInfoPartition + 7800), -v5);
      if ( v18 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14043B018, -v5);
    }
    if ( v6 )
    {
      if ( v18 == &MiSystemPartition )
        MiReturnResidentAvailable(v6);
      else
        MiReturnPartitionResidentAvailable((__int64)v18, v6);
      MiReturnCommit((__int64)v18, v6);
    }
    CurrentThread = v20;
    v4 = v5;
  }
  MiUnlockAwePagesExclusive((__int64)v7, (__int64)CurrentThread);
  return v4;
}
