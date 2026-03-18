/*
 * XREFs of ?AddVirtualMachine@DXGGLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003DB0C
 * Callers:
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C0228368 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::AddVirtualMachine(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  char v4; // cl
  struct _LIST_ENTRY *v5; // rdx

  if ( this[34] == KeGetCurrentThread() )
  {
    v4 = 0;
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 33));
    v4 = 1;
  }
  v5 = (struct _LIST_ENTRY *)this[170];
  if ( (struct _KTHREAD **)v5->Flink != this + 169 )
    __fastfail(3u);
  a2->Flink = (struct _LIST_ENTRY *)(this + 169);
  a2->Blink = v5;
  v5->Flink = a2;
  this[170] = (struct _KTHREAD *)a2;
  ++*((_DWORD *)this + 342);
  if ( v4 )
  {
    this[34] = 0LL;
    ExReleasePushLockExclusiveEx(this + 33, 0LL);
    KeLeaveCriticalRegion();
  }
}
