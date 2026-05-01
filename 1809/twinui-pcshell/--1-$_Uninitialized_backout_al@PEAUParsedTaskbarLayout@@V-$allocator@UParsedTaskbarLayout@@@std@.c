/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18013D5C0
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayout_____ptr64_std::allocator_ParsedPenWorkspaceLayout____::_1_::dtor$0 @ 0x18013D1FC (_std--_Uninitialized_move_al_unchecked_ParsedPenWorkspaceLayout_____ptr64_ParsedPenWorkspaceLayo.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18013D694 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 */

void __fastcall std::_Uninitialized_backout_al<ParsedTaskbarLayout *>::~_Uninitialized_backout_al<ParsedTaskbarLayout *>(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 104LL )
  {
    StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(i + 32));
    CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(i);
  }
}
