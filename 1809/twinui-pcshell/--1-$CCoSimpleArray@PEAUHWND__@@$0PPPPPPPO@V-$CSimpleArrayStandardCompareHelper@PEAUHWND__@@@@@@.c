/*
 * XREFs of ??1?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEAA@XZ @ 0x1800FB284
 * Callers:
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$1 @ 0x18010386F (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$1.c)
 *     _CWin32ApplicationView::EnumerateOwnershipTree_::_1_::dtor$2 @ 0x180130AF7 (_CWin32ApplicationView--EnumerateOwnershipTree_--_1_--dtor$2.c)
 *     _ApplicationViewManagement::ToolWindowGathererTemplated_ApplicationViewManagement::AssociatedWindowWin32Calls_::GatherWindows_::_1_::dtor$0 @ 0x1801311C0 (_ApplicationViewManagement--ToolWindowGathererTemplated_ApplicationViewManagement--AssociatedWin.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$4 @ 0x18038F096 (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$4.c)
 *     _VirtualDesktopGestureWindow::CreateAdjacentDesktop_::_1_::dtor$5 @ 0x18038F0A2 (_VirtualDesktopGestureWindow--CreateAdjacentDesktop_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>::~CCoSimpleArray<HWND__ *,4294967294,CSimpleArrayStandardCompareHelper<HWND__ *>>(
        __int64 a1)
{
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll(a1);
}
