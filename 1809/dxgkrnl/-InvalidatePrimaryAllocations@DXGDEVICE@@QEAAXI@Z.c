/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01FE9BC
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001A35C (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 434) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3644LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3645LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3646LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 82) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3647LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
  *((_DWORD *)this + v3 + 272) &= ~0x200u;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 208); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v3 + 88) + 8 * i) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v15[3] = *(_QWORD *)(*((_QWORD *)this + v3 + 88) + 8 * i);
      v15[4] = (unsigned int)i;
      v15[5] = v3;
      v16 = *((_QWORD *)this + v3 + 88);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 48LL);
      if ( (*(_DWORD *)(v17 + 4) & 0x10) != 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v18 + 24) = 3659LL;
        WdLogEvent5_WdAssertion(v18);
        v16 = *((_QWORD *)this + v3 + 88);
      }
      VIDMM_EXPORT::VidMmInvalidateAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
        *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 48LL) + 8LL));
      v11 = *(_QWORD *)(*((_QWORD *)this + v3 + 88) + 8 * i);
      *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v3 + 88) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1088);
    }
  }
  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
}
