/*
 * XREFs of ?AddVirtualMachine@DXGGLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00444B8
 * Callers:
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C025CF44 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::AddVirtualMachine(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  char v4; // si
  struct _LIST_ENTRY *v5; // rcx

  if ( this[34] == KeGetCurrentThread() )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 33));
  }
  v5 = (struct _LIST_ENTRY *)this[166];
  if ( (struct _KTHREAD **)v5->Flink != this + 165 )
    __fastfail(3u);
  a2->Flink = (struct _LIST_ENTRY *)(this + 165);
  a2->Blink = v5;
  v5->Flink = a2;
  this[166] = (struct _KTHREAD *)a2;
  ++*((_DWORD *)this + 334);
  if ( v4 )
  {
    this[34] = 0LL;
    ExReleasePushLockExclusiveEx(this + 33, 0LL);
    KeLeaveCriticalRegion();
  }
}
