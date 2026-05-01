/*
 * XREFs of ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x18015B958
 * Callers:
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A648 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 *     ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18015A8E8 (-Finalize@SingleShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@A.c)
 *     ?ProcessWindowBool@QuadShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@AEAA_NPEAUHWND__@@@Z @ 0x18015BB50 (-ProcessWindowBool@QuadShadowWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(
        HWND hWnd)
{
  int WindowLongPtrW; // eax
  unsigned int v3; // ebx
  HWND Window; // rax

  WindowLongPtrW = GetWindowLongPtrW(hWnd, -16);
  if ( (WindowLongPtrW & 0x10000000) != 0
    && (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) == 0
    && (GetWindowLongPtrW(hWnd, -20) & 0x80080) == 0x80080 )
  {
    Window = GetWindow(hWnd, 4u);
    v3 = 0;
    if ( !Window || !IsWindowVisible(Window) )
      return 1;
  }
  else
  {
    return 0;
  }
  return v3;
}
