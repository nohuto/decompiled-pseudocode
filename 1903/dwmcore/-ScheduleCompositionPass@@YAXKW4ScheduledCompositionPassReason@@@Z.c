/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180043B58
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180043AC0 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800499C8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800AFC80 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x1800BAA00 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@UEAAJ_NI@Z @ 0x1801A5DE0 (-Present@CRemoteAppRenderTarget@@UEAAJ_NI@Z.c)
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18024FE4C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 69) + 96LL))(
             *((_QWORD *)g_pComposition + 69),
             a1,
             a2);
  return result;
}
