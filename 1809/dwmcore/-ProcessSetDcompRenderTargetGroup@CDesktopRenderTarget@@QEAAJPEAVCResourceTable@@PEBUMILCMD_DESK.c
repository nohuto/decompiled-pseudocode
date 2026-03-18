/*
 * XREFs of ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180078420
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800784B8 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  unsigned int v9; // ecx
  struct CResource *v10; // rcx
  struct CVisualTree *v11; // rdx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[43]);
  this[43] = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v7, 44LL);
    if ( Resource )
    {
      this[43] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
      v10 = this[2];
      v11 = this[15];
      *((_BYTE *)this + 272) = 1;
      CMonitorTreeAssociation::RemoveTree(*((CMonitorTreeAssociation **)v10 + 2), v11);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x577u);
    }
  }
  return v6;
}
