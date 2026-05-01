/*
 * XREFs of ??0SelectionData@StartLayout@@QEAA@AEBU01@@Z @ 0x18013D4A0
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18013CF2C (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUParsedPenWorkspaceLayout@@PEAU1@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@PEAU1@QEAU1@1AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18013D14C (--$_Uninitialized_move_al_unchecked@PEAUParsedPenWorkspaceLayout@@PEAU1@V-$allocator@UParsedPenW.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18013D21C (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013E1C0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     std::_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__StartLayout::SelectionData_ParsedPenWorkspaceLayout_const_&___ptr64_::_Do_call @ 0x18013ED80 (std--_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__StartLayout--Sel_ea_18013ED80.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801A0BE0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18013DB68 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
StartLayout::SelectionData *__fastcall StartLayout::SelectionData::SelectionData(
        StartLayout::SelectionData *this,
        const struct StartLayout::SelectionData *a2)
{
  *(_DWORD *)this = 0;
  *((_WORD *)this + 2) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 30) = 0;
  *((_DWORD *)this + 16) = 0;
  StartLayout::SelectionData::Copy(this, a2);
  return this;
}
