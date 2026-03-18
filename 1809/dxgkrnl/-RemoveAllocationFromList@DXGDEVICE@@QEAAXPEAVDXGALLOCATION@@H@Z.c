/*
 * XREFs of ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C013C6F4
 * Callers:
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C013C7E8 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C01DA26C (DxgkDestroyClientAllocation.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z @ 0x1C01FF3AC (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@PEAPEAV2@@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationFromList(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 116) == 1
    && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 7773LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 5);
  if ( v8 )
  {
    if ( !a3 )
    {
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 80));
      v8 = *((_QWORD *)a2 + 5);
    }
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)(v8 + 24));
    if ( !a3 )
      DXGFASTMUTEX::Release((struct _KTHREAD **)(*((_QWORD *)a2 + 5) + 80LL));
  }
  else if ( a3 )
  {
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 20);
    DXGDEVICE::RemoveAllocationFromList(this, a2, (struct DXGALLOCATION **)this + 6);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  }
}
