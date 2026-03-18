/*
 * XREFs of ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x180081478
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800813F0 (-GetPixelFormatInfo@CDesktopRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x18015A5FC (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18015A950 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x18007E59C (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x18007E5E8 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::GetPrimary(CDesktopRenderTarget *this)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 *v4; // r14
  CHwndRenderTarget *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    v4 = (__int64 *)((char *)this + 176);
    while ( 1 )
    {
      v6 = *(CHwndRenderTarget **)(*v4 + 8LL * v3);
      if ( CHwndRenderTarget::IsPrimaryMonitor(v6) )
        break;
      if ( ++v3 >= *((_DWORD *)this + 50) )
        return (struct CHwndRenderTarget *)v1;
    }
    if ( v3 )
    {
      DynArray<CHwndRenderTarget *,0>::Remove(v4, &v6);
      DynArray<CHwndRenderTarget *,0>::InsertAt(v4, &v6, 0);
    }
    return v6;
  }
  return (struct CHwndRenderTarget *)v1;
}
