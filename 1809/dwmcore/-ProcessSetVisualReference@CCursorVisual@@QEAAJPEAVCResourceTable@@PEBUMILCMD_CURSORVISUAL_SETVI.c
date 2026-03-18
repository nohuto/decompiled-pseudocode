/*
 * XREFs of ?ProcessSetVisualReference@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CURSORVISUAL_SETVISUALREFERENCE@@@Z @ 0x180193E6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z @ 0x180193D34 (-GetDesktopId@CCursorVisual@@AEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessSetVisualReference(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_CURSORVISUAL_SETVISUALREFERENCE *a3)
{
  unsigned int v6; // edi
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
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0xA0u);
    if ( Resource )
    {
      this[73] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v10 = this[73];
      if ( v10 )
      {
        v11 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CResource *))(*(_QWORD *)v10 + 152LL))(v10);
        if ( v11 )
          *((_DWORD *)this + 143) = CCursorVisual::GetDesktopId(v12, v11);
      }
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x61u);
    }
  }
  return v6;
}
