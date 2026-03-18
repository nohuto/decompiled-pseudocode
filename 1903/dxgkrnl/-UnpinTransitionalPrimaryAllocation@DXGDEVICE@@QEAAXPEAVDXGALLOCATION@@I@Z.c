/*
 * XREFs of ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C02306A8
 * Callers:
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01F10DC (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 * Callees:
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0001854 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UnpinTransitionalPrimaryAllocation(
        struct _KTHREAD **this,
        struct DXGALLOCATION *a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rax
  struct _KTHREAD *v16; // r9
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  if ( a3 >= *((_DWORD *)this + 434) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 3850LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 3851LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[216]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 3852LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 3853LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((DXGDEVICE *)this, v4) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v17, this + 32);
    v14 = *((_DWORD *)this + v4 + 208);
    v15 = 0LL;
    if ( v14 )
    {
      v16 = this[v4 + 88];
      while ( *((struct DXGALLOCATION **)v16 + v15) != a2 )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v14 )
          goto LABEL_16;
      }
      *((_QWORD *)v16 + v15) = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL) + 232LL))(
        *((_QWORD *)this[2] + 69),
        *((_QWORD *)a2 + 3));
    }
LABEL_16:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  }
}
