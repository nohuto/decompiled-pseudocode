/*
 * XREFs of ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x1800D2498
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D2410 (-GetPixelFormatInfo@CDesktopRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x1801A884C (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1801A8BA0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800A3808 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800A3BAC (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::GetPrimary(CDesktopRenderTarget *this)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 *v4; // r14
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    v4 = (__int64 *)((char *)this + 176);
    while ( 1 )
    {
      v6 = *(_QWORD *)(*v4 + 8LL * v3);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 256LL))(v6) )
        break;
      if ( ++v3 >= *((_DWORD *)this + 50) )
        return (struct CHwndRenderTarget *)v1;
    }
    if ( v3 )
    {
      DynArray<CHwndRenderTarget *,0>::Remove(v4, &v6);
      DynArray<CHwndRenderTarget *,0>::InsertAt((__int64)v4, (unsigned __int64)&v6);
    }
    return (struct CHwndRenderTarget *)v6;
  }
  return (struct CHwndRenderTarget *)v1;
}
