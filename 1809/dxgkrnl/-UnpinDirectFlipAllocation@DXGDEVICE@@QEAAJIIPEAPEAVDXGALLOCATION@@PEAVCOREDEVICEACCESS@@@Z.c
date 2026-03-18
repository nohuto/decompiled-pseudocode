/*
 * XREFs of ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F99C
 * Callers:
 *     ?UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z @ 0x1C013F808 (-UnpinDirectFlipResource@DXGDEVICE@@QEAAJI_NPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0144058 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C01D8500 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C001D02C (-VidMmAsyncUnpinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0080 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E1834 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013FA44 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01FFD6C (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct DXGALLOCATION **a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v5; // rbx
  int v7; // esi
  struct DXGALLOCATION *v10; // rdi
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax

  LODWORD(v5) = 0;
  v7 = 0;
  do
  {
    v10 = *a4;
    if ( DXGDEVICE::RemoveDirectFlipAllocationFromList(this, a2, *a4) )
    {
      if ( !*((_QWORD *)v10 + 5) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v13 + 24) = 6553LL;
        WdLogEvent5_WdAssertion(v13);
      }
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v10);
      DxgkReferenceDxgResource(*((struct _EX_RUNDOWN_REF **)v10 + 5));
      LODWORD(v5) = VIDMM_EXPORT::VidMmAsyncUnpinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                      v10);
      if ( (int)v5 < 0 )
      {
        v5 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, a2, v10, a5);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v10 + 5) + 72LL));
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v10 + 11);
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        *(_QWORD *)(v17 + 24) = v5;
        WdLogEvent5_WdWarning(v17);
        if ( (int)v5 < 0 )
          break;
      }
    }
    ++v7;
    ++a4;
  }
  while ( !v7 );
  return (unsigned int)v5;
}
