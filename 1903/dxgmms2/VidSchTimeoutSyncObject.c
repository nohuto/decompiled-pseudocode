/*
 * XREFs of VidSchTimeoutSyncObject @ 0x1C0016F7C
 * Callers:
 *     VidSchDestroySyncObject @ 0x1C0061F20 (VidSchDestroySyncObject.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0001220 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0008420 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011414 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C00310E4 (VidSchiUnblockUnorderedWaiter.c)
 */

__int64 __fastcall VidSchTimeoutSyncObject(_VIDSCH_SYNC_OBJECT *this)
{
  __int64 v1; // rax
  __int64 v3; // r8
  bool v4; // zf
  int v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  char v8; // [rsp+30h] [rbp-30h]
  _QWORD v9[4]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-8h]

  v1 = *((_QWORD *)this + 1);
  v10 = 0;
  v9[0] = v1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v9);
  v4 = *((_DWORD *)this + 9) == 0;
  v7[1] = v7;
  v7[0] = v7;
  v5 = *((_DWORD *)this + 11);
  v8 = 0;
  if ( v4 || v5 != 2 )
  {
    if ( (unsigned int)(v5 - 4) <= 1 )
      _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(this, (struct HwQueueStagingList *)v7, 1);
  }
  else
  {
    LOBYTE(v3) = 1;
    VidSchiUnblockUnorderedWaiter(v7, this, v3);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v7);
  AcquireSpinLock::Release((AcquireSpinLock *)v9);
  return 0LL;
}
