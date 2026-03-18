/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0243E60
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01ED514 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002274C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0217EE0 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0217F6C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 Current; // rax
  __int64 *v5; // rdx
  unsigned int v6; // edx
  struct _KTHREAD **v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v9, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = *((_QWORD *)this + 31);
  v8[0] = (char *)this + 248;
  while ( 1 )
  {
    v8[1] = v3;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v8);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 368) = 0;
    v3 = *v5;
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 264));
  v6 = *((_DWORD *)this + 335);
  if ( v6 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((struct _KTHREAD ***)this + 164), v6);
    *((_DWORD *)this + 335) = 0;
  }
  v7 = (struct _KTHREAD **)*((_QWORD *)this + 164);
  if ( v7 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v7);
  *((_QWORD *)this + 34) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 264, 0LL);
  KeLeaveCriticalRegion();
}
