/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUParsedPenWorkspaceLayout@@PEAU1@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@PEAU1@QEAU1@1AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18013D14C
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18013CF2C (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18013D4A0 (--0SelectionData@StartLayout@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Uninitialized_move_al_unchecked<ParsedPenWorkspaceLayout *,ParsedPenWorkspaceLayout *,std::allocator<ParsedPenWorkspaceLayout>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    do
    {
      *a3 = 0LL;
      a3[1] = 0LL;
      a3[2] = 0LL;
      a3[3] = 0LL;
      v6 = *(v5 - 1);
      v7 = *v5;
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      v5[2] = 0LL;
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a3);
      *a3 = v6;
      a3[1] = v7;
      a3[3] = v7;
      StartLayout::SelectionData::SelectionData(
        (StartLayout::SelectionData *)(a3 + 4),
        (const struct StartLayout::SelectionData *)(v5 + 3));
      a3 += 13;
      v5 += 13;
    }
    while ( v5 - 1 != a2 );
  }
  return a3;
}
