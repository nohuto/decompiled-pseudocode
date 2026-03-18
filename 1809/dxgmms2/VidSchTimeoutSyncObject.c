/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0018260
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C006D920 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001218 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0007350 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00308B4 (VidSchiUnblockUnorderedWaiter.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(_VIDSCH_SYNC_OBJECT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  bool v5; // zf
  int v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+30h] [rbp-38h]
  _BYTE v10[48]; // [rsp+38h] [rbp-30h] BYREF

  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v10, (unsigned __int64 *)(*((_QWORD *)this + 1) + 1648LL), a3, 0);
  v5 = *((_DWORD *)this + 9) == 0;
  v8[1] = v8;
  v8[0] = v8;
  v6 = *((_DWORD *)this + 11);
  v9 = 0;
  if ( v5 || v6 != 2 )
  {
    if ( (unsigned int)(v6 - 4) <= 1 )
      _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(this, (struct HwQueueStagingList *)v8, 1);
  }
  else
  {
    LOBYTE(v4) = 1;
    VidSchiUnblockUnorderedWaiter(v8, this, v4);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v8);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
  return 0LL;
}
