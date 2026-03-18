/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00D00BC (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D04A8 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C01C1B4C (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C01D8500 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00DEA1C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C013A14C (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        PERESOURCE **this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  struct DXGALLOCATION *v9; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  PERESOURCE *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+40h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v20; // [rsp+48h] [rbp+20h] BYREF

  v20 = a4;
  v19 = a3;
  v5 = a2;
  if ( a2 >= *((_DWORD *)this + 434) )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 6619LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2][2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v14 + 24) = 6620LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[216]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 6621LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v16 + 24) = 6622LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v8 = *((_DWORD *)this + v5 + 272);
  if ( (v8 & 0x100) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v17 + 24) = 6623LL;
    WdLogEvent5_WdAssertion(v17);
    v8 = *((_DWORD *)this + v5 + 272);
  }
  if ( (v8 & 0x200) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v18 + 24) = 6624LL;
    WdLogEvent5_WdAssertion(v18);
  }
  LODWORD(v20) = 0;
  LOBYTE(v19) = 0;
  do
  {
    v9 = DXGDEVICE::PopDirectFlipAllocationFromList(
           (DXGDEVICE *)this,
           v5,
           (unsigned int *)&v20,
           (unsigned __int8 *)&v19);
    v10 = (struct _EX_RUNDOWN_REF *)v9;
    if ( v9 )
    {
      VIDMM_EXPORT::VidMmUnpinAllocation(
        (VIDMM_EXPORT *)this[2][68],
        (struct VIDMM_GLOBAL *)this[2][69],
        *((struct _VIDMM_MULTI_ALLOC **)v9 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10[5].Count + 72));
      ExReleaseRundownProtection(v10 + 11);
    }
  }
  while ( !(_BYTE)v19 );
  v11 = this[216];
  if ( v11 == (PERESOURCE *)this[2][2] )
    ADAPTER_DISPLAY::DisableOverlayPlanes((ADAPTER_DISPLAY *)v11[315], v5);
  return 0LL;
}
