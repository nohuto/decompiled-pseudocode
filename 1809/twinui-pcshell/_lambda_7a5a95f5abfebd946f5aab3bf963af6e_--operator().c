/*
 * XREFs of _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x18033BB90
 * Callers:
 *     wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___ @ 0x18033A93C (wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___.c)
 * Callees:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033A3F8 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$_Try_emplace@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@?$map@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@6@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@Z @ 0x18033B48C (--$_Try_emplace@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$$V@-$map@V-$ComPtr@UIApplicationVi.c)
 *     ?_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18034017C (-_ConvertWorkAreaRectToScreenRect@CDesktopPositioner@@AEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x180340640 (-_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIAppli.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x180340894 (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator()(_QWORD *a1)
{
  struct IApplicationViewPosition *v2; // rsi
  struct IApplicationViewPosition *v3; // rbx
  CDesktopPositioner *v4; // rcx
  int fixed; // eax
  char v6; // si
  CDesktopPositioner *v7; // rcx
  struct IApplicationViewPosition *v9; // [rsp+38h] [rbp-29h] BYREF
  struct IApplicationViewPosition *v10; // [rsp+40h] [rbp-21h] BYREF
  struct IApplicationViewPosition *v11[2]; // [rsp+48h] [rbp-19h] BYREF
  int v12; // [rsp+58h] [rbp-9h] BYREF
  __int64 v13; // [rsp+60h] [rbp-1h]
  __int128 v14; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT v15; // [rsp+78h] [rbp+17h] BYREF
  struct tagRECT v16; // [rsp+88h] [rbp+27h] BYREF
  __int128 v17; // [rsp+98h] [rbp+37h] BYREF

  v13 = -2LL;
  v9 = *(struct IApplicationViewPosition **)a1[1];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  std::map<Microsoft::WRL::ComPtr<IApplicationView>,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>::_Try_emplace<Microsoft::WRL::ComPtr<IApplicationView>,>(
    (__int64 *)(*a1 + 368LL),
    (__int64)v11,
    (unsigned __int64 *)&v9);
  v10 = (struct IApplicationViewPosition *)*((_QWORD *)v11[0] + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  v2 = v10;
  if ( !v10 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    if ( (int)CDesktopPositioner::_GetRestorePosition(
                (CDesktopPositioner *)*a1,
                *(struct IApplicationView **)a1[1],
                0LL,
                &v10) < 0 )
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v2 = v10;
  }
  v3 = 0LL;
  v11[0] = 0LL;
  if ( !*(_QWORD *)a1[2] )
    goto LABEL_7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
  fixed = CDesktopPositioner::_FixPositionForLayout(
            v4,
            *(struct IApplicationView **)a1[1],
            *(struct IAppLayout **)a1[2],
            v10,
            v11);
  v3 = v11[0];
  if ( fixed < 0 )
  {
    v2 = v10;
LABEL_7:
    if ( v3 != v2 )
    {
      v9 = v2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v9 = v3;
      v3 = v2;
      v11[0] = v2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    }
  }
  v6 = 0;
  if ( *(_DWORD *)a1[3] != 3 )
    goto LABEL_16;
  v9 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
              v11,
              (__int64 *)&v9) >= 0
    && (*(int (__fastcall **)(struct IApplicationViewPosition *, int *))(*(_QWORD *)v9 + 32LL))(v9, &v12) >= 0
    && v12 == 3
    && (*(int (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v9 + 56LL))(v9, &v15) >= 0 )
  {
    CDesktopPositioner::_ConvertWorkAreaRectToScreenRect(v7, &v15, &v16);
    v6 = 1;
    CDesktopPositioner::_FixRectForWorkArea(*a1, 1LL, &v16, 0LL, &v17);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a1[4] + 48LL))(*(_QWORD *)a1[4], 3LL);
    v14 = v17;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a1[4] + 56LL))(*(_QWORD *)a1[4], &v14);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a1[4] + 72LL))(*(_QWORD *)a1[4], 1LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  if ( !v6 )
LABEL_16:
    (*(void (__fastcall **)(_QWORD, struct IApplicationViewPosition *))(**(_QWORD **)a1[4] + 80LL))(
      *(_QWORD *)a1[4],
      v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v11);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
