/*
 * XREFs of _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x1803BFEA4
 * Callers:
 *     wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___ @ 0x1803BEB90 (wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___.c)
 * Callees:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18004A3C0 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004A96C (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x18004ADF0 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18004B048 (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x1803BF6EC (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1803C4D98 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  struct IApplicationViewPosition *v3; // rbx
  CDesktopPositioner *v4; // rbx
  CDesktopPositioner *v5; // rcx
  char v6; // bl
  CDesktopPositioner *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rax
  struct IApplicationViewPosition *v11; // [rsp+38h] [rbp-29h] BYREF
  struct IApplicationViewPosition *v12; // [rsp+40h] [rbp-21h] BYREF
  struct IApplicationViewPosition *v13[2]; // [rsp+48h] [rbp-19h] BYREF
  int v14; // [rsp+58h] [rbp-9h] BYREF
  __int64 v15; // [rsp+60h] [rbp-1h]
  struct tagRECT v16; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT v17; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v18; // [rsp+88h] [rbp+27h] BYREF
  struct tagRECT v19; // [rsp+98h] [rbp+37h] BYREF

  v15 = -2LL;
  v2 = *(_QWORD *)a1;
  v11 = **(struct IApplicationViewPosition ***)(a1 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
    (__int64 **)(v2 + 368),
    (unsigned __int64)v13,
    (unsigned __int64 *)&v11);
  v12 = (struct IApplicationViewPosition *)*((_QWORD *)v13[0] + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  v3 = v12;
  if ( !v12 )
  {
    v4 = *(CDesktopPositioner **)a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( (int)CDesktopPositioner::_GetRestorePosition(v4, **(struct IApplicationView ***)(a1 + 8), 0LL, &v12) < 0 )
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    v3 = v12;
  }
  v13[0] = 0LL;
  if ( !**(_QWORD **)(a1 + 16) )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  if ( (int)CDesktopPositioner::_FixPositionForLayout(
              v5,
              **(struct IApplicationView ***)(a1 + 8),
              **(struct IAppLayout ***)(a1 + 16),
              v12,
              v13) < 0 )
  {
    v3 = v12;
LABEL_7:
    if ( v13[0] != v3 )
    {
      v11 = v3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
      v11 = v13[0];
      v13[0] = v3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    }
  }
  v6 = 0;
  if ( **(_DWORD **)(a1 + 24) != 3 )
    goto LABEL_16;
  v11 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))v13,
              (__int64)&v11) >= 0
    && (*(int (__fastcall **)(struct IApplicationViewPosition *, int *))(*(_QWORD *)v11 + 32LL))(v11, &v14) >= 0
    && v14 == 3
    && (*(int (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v11 + 56LL))(v11, &v17) >= 0 )
  {
    CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v7, &v17, &v18);
    v6 = 1;
    CDesktopPositioner::_FixRectForWorkArea(*(_QWORD *)a1, 1, &v18.left, 0LL, &v19);
    (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 48LL))(**(_QWORD **)(a1 + 32), 3LL);
    v8 = **(__int64 ***)(a1 + 32);
    v9 = *v8;
    v16 = v19;
    (*(void (__fastcall **)(__int64 *, struct tagRECT *))(v9 + 56))(v8, &v16);
    (*(void (__fastcall **)(_QWORD, __int64))(***(_QWORD ***)(a1 + 32) + 72LL))(**(_QWORD **)(a1 + 32), 1LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  if ( !v6 )
LABEL_16:
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(***(_QWORD ***)(a1 + 32) + 80LL))(
      **(_QWORD **)(a1 + 32),
      v13[0]);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
}
