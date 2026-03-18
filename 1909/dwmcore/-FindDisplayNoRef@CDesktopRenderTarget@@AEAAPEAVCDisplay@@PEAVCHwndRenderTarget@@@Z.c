/*
 * XREFs of ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x18002B368
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18002B18C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800990E0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800DDA88 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct CDisplay *__fastcall CDesktopRenderTarget::FindDisplayNoRef(CDesktopRenderTarget *this, HMONITOR *a2)
{
  CDisplaySet *v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  struct CDisplay *result; // rax
  struct CDisplay *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = g_DisplayManager;
  if ( g_DisplayManager )
  {
    v4 = 0LL;
    if ( *((_DWORD *)g_DisplayManager + 18) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)g_DisplayManager + 6) + 8 * v4) + 312LL) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)g_DisplayManager + 18) )
          goto LABEL_5;
      }
      goto LABEL_14;
    }
  }
LABEL_5:
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
  {
LABEL_14:
    v7 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v2, a2[65], &v7);
    return v7;
  }
  if ( (*((unsigned __int8 (__fastcall **)(HMONITOR *))*a2 + 31))(a2) )
  {
    v2 = g_DisplayManager;
    goto LABEL_14;
  }
  v5 = (unsigned int)(*((_DWORD *)g_DisplayManager + 18) - 1);
  if ( (int)v5 < 0 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct CDisplay **)(*((_QWORD *)g_DisplayManager + 6) + 8 * v5);
    if ( *((_DWORD *)result + 62) == *((_DWORD *)a2 + 129) )
      break;
    v5 = (unsigned int)(v5 - 1);
    if ( (int)v5 < 0 )
      return 0LL;
  }
  return result;
}
