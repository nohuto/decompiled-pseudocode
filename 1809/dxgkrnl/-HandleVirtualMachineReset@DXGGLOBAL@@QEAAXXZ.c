/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C020FD68
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ @ 0x1C01BDF0C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C001FFFC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C01E876C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C01E87F8 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  __int64 Current; // rax
  __int64 *v4; // rdx
  unsigned int v5; // edx
  struct _KTHREAD **v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v2 = *((_QWORD *)this + 31);
  v7[0] = (char *)this + 248;
  while ( 1 )
  {
    v7[1] = v2;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 392) = 0;
    v2 = *v4;
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 264));
  v5 = *((_DWORD *)this + 343);
  if ( v5 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)this + 168), v5);
    *((_DWORD *)this + 343) = 0;
  }
  v6 = (struct _KTHREAD **)*((_QWORD *)this + 168);
  if ( v6 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v6);
  *((_QWORD *)this + 34) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 264, 0LL);
  KeLeaveCriticalRegion();
}
