/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01D82DC
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01D8428 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C01DA26C (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01FDF6C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FF18 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00351DC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C6954 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01F4264 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // r15
  struct DXGALLOCATION *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct DXGALLOCATION *v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v10 = (struct DXGALLOCATION *)a2;
  if ( a2 )
  {
    v4 = (struct DXGALLOCATION *)a2;
    do
    {
      v5 = a2[8];
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, (struct DXGALLOCATION *)a2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        v6 = *((_QWORD *)v4 + 10);
        v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 544LL);
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 280LL))(v6);
        if ( v11 )
        {
          v9 = v11 + 144;
          *(_QWORD *)(v11 + 152) = 0LL;
          ExReleasePushLockExclusiveEx(v9, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1749) & 1) != 0 )
      {
        if ( *((_DWORD *)a2 + 24) )
        {
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4152LL),
            *(_DWORD *)(*((_QWORD *)this + 5) + 392LL),
            *((_DWORD *)this + 84),
            0,
            1u,
            &v10,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          *((_DWORD *)a2 + 24) = 0;
        }
      }
      DXGALLOCATION::`scalar deleting destructor'(v4);
      v10 = v5;
      a2 = (struct DXGALLOCATION **)v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
