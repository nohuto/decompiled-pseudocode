/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0206744
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0206850 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C020878C (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C022E200 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003BAC8 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E5338 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0223F94 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // rbp
  struct DXGALLOCATION *v5; // r14
  struct DXGALLOCATION *v6; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v6 = (struct DXGALLOCATION *)a2;
  if ( a2 )
  {
    v4 = (struct DXGALLOCATION *)a2;
    do
    {
      v5 = a2[8];
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, (struct DXGALLOCATION *)a2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 280LL))(*((_QWORD *)v4 + 10));
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1749) & 1) != 0 )
      {
        if ( *((_DWORD *)a2 + 24) )
        {
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4144LL),
            *(_DWORD *)(*((_QWORD *)this + 5) + 368LL),
            *((_DWORD *)this + 84),
            0,
            1u,
            &v6,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          *((_DWORD *)a2 + 24) = 0;
        }
      }
      DXGALLOCATION::`scalar deleting destructor'(v4);
      v6 = v5;
      a2 = (struct DXGALLOCATION **)v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
