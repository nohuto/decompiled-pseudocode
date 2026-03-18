/*
 * XREFs of ?ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR@@@Z @ 0x18007BD34
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetScreenCursor(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  unsigned int v9; // ecx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[45]);
  this[45] = 0LL;
  v7 = *((unsigned int *)a3 + 2);
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a2, v7, 133LL);
    if ( Resource )
    {
      this[45] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x59Du);
    }
  }
  return v6;
}
