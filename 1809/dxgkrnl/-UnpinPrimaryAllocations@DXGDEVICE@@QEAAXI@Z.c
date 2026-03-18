/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00D02A4
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C001A184 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 i; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 434) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 3781LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v15 + 24) = 3782LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 3783LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v17 + 24) = 3784LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v3) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 216) == v9 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 208); i = (unsigned int)(i + 1) )
      {
        v11 = *((_QWORD *)this + v3 + 88);
        v12 = *(_QWORD *)(v11 + 8 * i);
        if ( v12 )
        {
          v13 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 4LL);
          if ( (v13 & 1) == 0 )
          {
            v18 = WdLogNewEntry5_WdAssertion(v13);
            *(_QWORD *)(v18 + 24) = 3800LL;
            WdLogEvent5_WdAssertion(v18);
            v11 = *((_QWORD *)this + v3 + 88);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
            *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v11 + 8 * i) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v6, v7, v8) + 24) = v3;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 272) &= 0xFFFFFCFF;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  }
}
