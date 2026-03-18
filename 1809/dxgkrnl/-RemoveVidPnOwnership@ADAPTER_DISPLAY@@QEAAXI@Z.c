/*
 * XREFs of ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01229C8
 * Callers:
 *     ?RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z @ 0x1C0038D40 (-RemoveDeviceOwnershipReferences@ADAPTER_DISPLAY@@QEAAXPEBVDXGDEVICE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C0122B04 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C0140300 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01440B4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1C01C4348 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C00060EC (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00DEA1C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00F7034 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C012B530 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6840 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C0247BB4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::RemoveVidPnOwnership(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  BLTQUEUE *v13; // rbx

  v4 = 3760LL * a2;
  v5 = a2;
  v6 = *((_QWORD *)this + 14);
  if ( !*(_QWORD *)(v4 + v6 + 688) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 203LL;
    WdLogEvent5_WdAssertion(v11);
    v6 = *((_QWORD *)this + 14);
  }
  if ( !*(_DWORD *)(v4 + v6 + 696) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 204LL;
    WdLogEvent5_WdAssertion(v12);
    v6 = *((_QWORD *)this + 14);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 1728LL) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + v6 + 688) + 16LL)
                                                                     + 16LL)
    && *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
  {
    if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*((DXGADAPTER **)this + 2)) )
    {
      v8 = *(_QWORD *)(v4 + v7 + 688);
      v9 = *(_QWORD *)(v8 + 1728);
      if ( v9 == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v9 + 2520), a2);
    }
    else
    {
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
        *(ADAPTER_RENDER **)(*(_QWORD *)(v4 + v7 + 688) + 16LL),
        1 << a2,
        0,
        1 << a2,
        0);
    }
  }
  v10 = *((_QWORD *)this + 33);
  if ( v10 )
  {
    v13 = (BLTQUEUE *)(*(_QWORD *)(v10 + 8) + 2704 * v5);
    BLTQUEUE::Flush(v13);
    BLTQUEUE::Reset(v13, 1u);
  }
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 688) = 0LL;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 712) = 0LL;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 696) = 0;
  *(_DWORD *)(v4 + *((_QWORD *)this + 14) + 700) = 0;
  *(_QWORD *)(v4 + *((_QWORD *)this + 14) + 704) = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 13), a2, 0LL, 0LL, 0, 1);
}
