/*
 * XREFs of ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C01FFE94
 * Callers:
 *     ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C1E50 (-DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@P.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C001A184 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 */

void __fastcall DXGDEVICE::UnpinTransitionalPrimaryAllocation(
        struct _KTHREAD **this,
        struct _VIDMM_MULTI_ALLOC **a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rax
  struct _KTHREAD *v14; // r9
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  if ( a3 >= *((_DWORD *)this + 434) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3828LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3829LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[216]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3830LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 3831LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary(this, v4) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v15, this + 32);
    v12 = *((_DWORD *)this + v4 + 208);
    v13 = 0LL;
    if ( v12 )
    {
      v14 = this[v4 + 88];
      while ( *((struct _VIDMM_MULTI_ALLOC ***)v14 + v13) != a2 )
      {
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v12 )
          goto LABEL_16;
      }
      *((_QWORD *)v14 + v13) = 0LL;
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *((VIDMM_EXPORT **)this[2] + 68),
        *((struct VIDMM_GLOBAL **)this[2] + 69),
        a2[3]);
    }
LABEL_16:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  }
}
