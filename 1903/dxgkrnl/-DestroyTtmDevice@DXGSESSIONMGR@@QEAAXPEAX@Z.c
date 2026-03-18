/*
 * XREFs of ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C0276A28
 * Callers:
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02CE134 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 * Callees:
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C015AAEC (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDevice(CSERIALIZEDWORKQUEUE ***this, char *a2, __int64 a3)
{
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax

  if ( a2 && *((_DWORD *)a2 + 10) == 1299018836 )
  {
    v5 = a2 + 888;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    a2[904] = 1;
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    v6 = CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
           this + 23,
           (void (*)(void *))DXGSESSIONMGR::DestroyTtmDeviceWorker,
           a2);
    v10 = v6;
    if ( v6 >= 0 )
      return;
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v11[3] = *((unsigned int *)a2 + 20);
    v11[4] = *((_QWORD *)a2 + 8);
    v11[5] = v10;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
    v11[3] = a2;
  }
  WdLogEvent5_WdError(v11);
}
