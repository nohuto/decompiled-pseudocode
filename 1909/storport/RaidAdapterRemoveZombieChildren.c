/*
 * XREFs of RaidAdapterRemoveZombieChildren @ 0x1C0035C88
 * Callers:
 *     RaidAdapterDeleteChildren @ 0x1C00348B4 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterMarkChildrenMissing @ 0x1C003544C (RaidAdapterMarkChildrenMissing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidAdapterRemoveZombieChildren(__int64 a1, __int64 (__fastcall *a2)(_QWORD *))
{
  _QWORD **v2; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdi
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD **)(a1 + 200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    v5 = *v2;
    if ( *v2 == v2 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v2 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v6;
      v7 = v5 - 7;
      v6[1] = v2;
      --*(_DWORD *)(a1 + 216);
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
