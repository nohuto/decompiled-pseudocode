/*
 * XREFs of ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180130688
 * Callers:
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180130BD8 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x1801320D0 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetExternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x180131650 (-GetExternalWindowAlignmentWithRect@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Ap.c)
 *     ?GetInternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x180131924 (-GetInternalWindowAlignmentWithRect@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Ap.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment(
        RECT *a1,
        HWND a2,
        int a3,
        _DWORD *a4)
{
  int InternalWindowAlignmentWithRect; // eax
  int v6; // ebx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
  {
    InternalWindowAlignmentWithRect = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetInternalWindowAlignmentWithRect(
                                        a1,
                                        a2,
                                        v8);
LABEL_3:
    v6 = InternalWindowAlignmentWithRect;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    InternalWindowAlignmentWithRect = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetExternalWindowAlignmentWithRect(
                                        a1,
                                        a2);
    goto LABEL_3;
  }
  v6 = -2147467259;
LABEL_7:
  if ( v6 >= 0 )
  {
    if ( !v8[0] || (*a4 & v8[0]) != 0 )
    {
      return 2147500036LL;
    }
    else
    {
      *a4 |= v8[0];
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
