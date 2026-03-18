/*
 * XREFs of ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C0042554
 * Callers:
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0244448 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0246354 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::RemoveListObjectFromSharedPowerList(
        KSPIN_LOCK *this,
        struct DXGSHAREDPOWERREGISTRATIONOBJECT ***a2)
{
  struct DXGSHAREDPOWERREGISTRATIONOBJECT **v3; // rcx
  struct DXGSHAREDPOWERREGISTRATIONOBJECT **v4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 171, &LockHandle);
  v3 = *a2;
  if ( (*a2)[1] != (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)a2
    || (v4 = a2[1], *v4 != (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)v3;
  v3[1] = (struct DXGSHAREDPOWERREGISTRATIONOBJECT *)v4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
