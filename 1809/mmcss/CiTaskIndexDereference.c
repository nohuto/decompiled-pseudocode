/*
 * XREFs of CiTaskIndexDereference @ 0x1C0001150
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A240 (CiDispatchCreateTaskIndexClient.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000A380 (CiCreateTaskIndexClientFromThread.c)
 *     CiDispatchClose @ 0x1C000A500 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000A630 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AE70 (CiThreadCreate.c)
 * Callees:
 *     CiSchedulerRemoveTaskIndex @ 0x1C0002C40 (CiSchedulerRemoveTaskIndex.c)
 *     CiTaskIndexRemove @ 0x1C000B850 (CiTaskIndexRemove.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000B890 (CiAcquireTaskIndexListLock.c)
 *     CiReleaseTaskIndexListLock @ 0x1C000B8D0 (CiReleaseTaskIndexListLock.c)
 */

void __fastcall CiTaskIndexDereference(volatile signed __int64 *P)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  bool v4; // zf
  signed __int64 v5; // rtt
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  v1 = P;
  _m_prefetchw((const void *)(P + 6));
  v2 = *((_QWORD *)P + 6);
  v3 = v2 - 1;
  v4 = v2 == 1;
  if ( v2 - 1 <= 0 )
  {
LABEL_4:
    if ( !v4 )
      __fastfail(0xEu);
    CiAcquireTaskIndexListLock();
    v6 = _InterlockedExchangeAdd64(v1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      CiTaskIndexRemove(v1);
    }
    else
    {
      v1 = 0LL;
    }
    CiReleaseTaskIndexListLock();
    if ( v1 )
    {
      CiSchedulerRemoveTaskIndex(v1);
      ExFreePoolWithTag((PVOID)v1, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v5 = v2;
      v2 = _InterlockedCompareExchange64(v1 + 6, v3, v2);
      if ( v5 == v2 )
        break;
      v3 = v2 - 1;
      v4 = v2 == 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_4;
    }
  }
}
