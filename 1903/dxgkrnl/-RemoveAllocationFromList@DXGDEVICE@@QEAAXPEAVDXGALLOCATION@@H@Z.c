/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C014C7E0
 * Callers:
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C014C8D4 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C020878C (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C022FB10 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 116) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 7855LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a2 + 5);
  if ( v9 )
  {
    if ( !a3 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 80));
      v9 = *((_QWORD *)a2 + 5);
    }
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)(v9 + 24));
    if ( !a3 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*((_QWORD *)a2 + 5) + 80LL));
  }
  else if ( a3 )
  {
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)this + 20);
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
}
