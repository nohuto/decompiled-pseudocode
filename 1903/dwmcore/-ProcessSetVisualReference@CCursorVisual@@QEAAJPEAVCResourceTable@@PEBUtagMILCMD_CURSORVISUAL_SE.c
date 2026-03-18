/*
 * XREFs of ?ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_SETVISUALREFERENCE@@@Z @ 0x180214298
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x180214170 (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessSetVisualReference(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CURSORVISUAL_SETVISUALREFERENCE *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  __int64 v9; // rcx
  struct CResource *v10; // rcx
  struct CVisual *v11; // rax
  CCursorVisual *v12; // rcx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[73]);
  this[73] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0xC0u);
    if ( Resource )
    {
      this[73] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v10 = this[73];
      if ( v10 )
      {
        v11 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 192LL))(v10);
        if ( v11 )
          *((_DWORD *)this + 143) = CCursorVisual::GetDesktopId(v12, v11);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x5Cu, 0LL);
    }
  }
  return v6;
}
