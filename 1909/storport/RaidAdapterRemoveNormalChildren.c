/*
 * XREFs of RaidAdapterRemoveNormalChildren @ 0x1C0035B64
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C00348B4 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C003544C (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B84 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005D18 (RaidAdapterReleaseInterruptLock.c)
 *     StorRemoveDictionary @ 0x1C0013D7C (StorRemoveDictionary.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveNormalChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD *v2; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rax
  _QWORD *v7; // r14
  KIRQL v8; // bl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_QWORD *)(a1 + 120);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    v5 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v5[1] != v2 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v6;
      v7 = v5 - 7;
      *(_QWORD *)(v6 + 8) = v2;
      --*(_DWORD *)(a1 + 136);
      v8 = RaidAdapterAcquireInterruptLock(a1);
      StorRemoveDictionary(
        (_DWORD *)(a1 + 144),
        (unsigned __int8)BYTE2(*((_DWORD *)v5 + 10)) | (unsigned __int64)(((unsigned __int8)BYTE1(*((_DWORD *)v5 + 10)) | ((unsigned __int8)*((_DWORD *)v5 + 10) << 8)) << 8));
      RaidAdapterReleaseInterruptLock(a1, v8);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v7 )
      break;
    if ( a2 )
    {
      result = a2(v7);
      if ( (int)result < 0 )
        return result;
    }
  }
  return 0LL;
}
