/*
 * XREFs of NdisAcquireRWLockWrite @ 0x1C000E020
 * Callers:
 *     ndisPostSetOpenPacketFilter @ 0x1C0026868 (ndisPostSetOpenPacketFilter.c)
 *     XNoteFilterOpenAdapter @ 0x1C0026E64 (XNoteFilterOpenAdapter.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031B94 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E440 (ndisBindUnbindPeriodicReceives.c)
 *     XRemoveBindingFromLists @ 0x1C00A3064 (XRemoveBindingFromLists.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00C3FA0 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockWrite(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  struct _KTHREAD *CurrentThread; // rdi
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)Lock + 3) == CurrentThread )
  {
    LockState->LockState = 2;
  }
  else
  {
    v6 = (KSPIN_LOCK *)((char *)Lock + 16);
    if ( (Flags & 1) != 0 )
    {
      KeAcquireSpinLockAtDpcLevel(v6);
      v7 = 2;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    LockState->OldIrql = v7;
    v8 = (_QWORD *)*((_QWORD *)Lock + 4);
    v9 = v8;
    v10 = &v8[512 * ndisMaxNumberOfProcessors];
    if ( v8 != v10 )
    {
      do
      {
        if ( *v9 && v9 != (_QWORD *)((char *)v8 + (KeGetPcr()->Prcb.Number << 12)) && *v9 )
        {
          do
            _mm_pause();
          while ( *v9 );
        }
        v9 += 512;
      }
      while ( v9 != v10 );
    }
    *((_QWORD *)Lock + 3) = CurrentThread;
    LockState->LockState = 4;
  }
}
