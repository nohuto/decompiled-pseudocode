/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C004061C
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0040180 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0qqqq @ 0x1C00314FC (McTemplateK0qqqq.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  const GUID *v8; // r8
  struct _KEVENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = 3760LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v7 + v6 + 960), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqq(
        *(unsigned __int8 *)(v7 + v6 + 952),
        &EventDWMVsyncSignal,
        v8,
        *(_DWORD *)(v7 + v6 + 944),
        a4,
        *(_BYTE *)(v7 + v6 + 952),
        *((_DWORD *)a2 + 638));
    KePulseEvent((PRKEVENT)(v7 + v6 + 912), 0, 0);
    v9 = *(struct _KEVENT **)(v7 + v6 + 936);
    if ( v9 )
    {
      *(_DWORD *)(v7 + v6 + 948) = a4;
      if ( *(_DWORD *)(v7 + v6 + 944) <= a4 )
      {
        if ( *(_BYTE *)(v7 + v6 + 952) )
        {
          *(_BYTE *)(v7 + v6 + 952) = 0;
          if ( *((_QWORD *)a2 + 316) )
          {
            DXGADAPTER::DecrementVSyncWaiter(a2);
            v9 = *(struct _KEVENT **)(v7 + v6 + 936);
          }
        }
        KeSetEvent(v9, 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
