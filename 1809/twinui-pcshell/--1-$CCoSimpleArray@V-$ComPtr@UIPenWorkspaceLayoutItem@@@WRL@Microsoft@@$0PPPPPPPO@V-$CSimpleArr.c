/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1801384A0
 * Callers:
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$1 @ 0x18013A2C6 (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$1.c)
 *     _TaskbarLayoutPolicyManager::PopulateAndSetPinned_::_1_::dtor$1 @ 0x18013AB10 (_TaskbarLayoutPolicyManager--PopulateAndSetPinned_--_1_--dtor$1.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::dtor$13 @ 0x18013D101 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--_Emplace_reall.c)
 *     _std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$1 @ 0x18013D208 (_std--_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPen_ea_18013D208.c)
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::emplace_back_ParsedPenWorkspaceLayout__::_1_::dtor$7 @ 0x18013D2B4 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--emplace_back_P.c)
 *     _PWSLayoutPolicyManager::GetPenWorkspaceLayout_::_1_::dtor$0 @ 0x18019F9B4 (_PWSLayoutPolicyManager--GetPenWorkspaceLayout_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::Populate_::_1_::dtor$1 @ 0x18019FD51 (_PWSLayoutPolicyManager--Populate_--_1_--dtor$1.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$5 @ 0x18038DC51 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$5.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$6 @ 0x18038DC61 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$6.c)
 *     _VirtualDesktopGestureWindow::VirtualDesktopGestureWindow_::_1_::dtor$7 @ 0x18038DC71 (_VirtualDesktopGestureWindow--VirtualDesktopGestureWindow_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>(
        __int64 a1)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(a1);
}
