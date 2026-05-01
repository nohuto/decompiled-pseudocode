/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18014C674
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180054B60 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x18005515C (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800554E0 (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z @ 0x1800761C0 (-GetPosition@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewPosition@@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18014C764 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AE_ea_18014C764.c)
 *     ?SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z @ 0x18014D680 (-SetHostedPos@FrameWrapper@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?GetPosition@FullScreenPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18016D1B0 (-GetPosition@FullScreenPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x18016DA70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1803108E0 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180392590 (-EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180399FE8 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039A28C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1803A1A70 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5CB4 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1803A5F60 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x18014C860 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x18014CA80 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18014CE04 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
        void **a1,
        _OWORD *a2)
{
  CCommonApplicationViewPosition *v4; // rax
  int CanCastTo; // ebx
  CCommonApplicationViewPosition *v6; // rax
  _DWORD *v7; // rcx
  void *v8; // r8
  _DWORD *v9; // r9
  const struct _GUID *v10; // rdx
  __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v13, v6);
    *(_OWORD *)(v13 + 16) = *a2;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v8;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v9) )
      {
        *a1 = (void *)v11;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v11 + 32), v10, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
