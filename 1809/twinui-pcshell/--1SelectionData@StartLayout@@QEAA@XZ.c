/*
 * XREFs of ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18013D694
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18013C9A4 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$1 @ 0x18013CAD6 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$2 @ 0x18013CAE2 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$2.c)
 *     ??1?$_Uninitialized_backout_al@PEAUParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAA@XZ @ 0x18013D5C0 (--1-$_Uninitialized_backout_al@PEAUParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@.c)
 *     ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18013D66C (--1ParsedTaskbarLayout@@QEAA@XZ.c)
 *     ??_GTaskbarLayoutParser@@UEAAPEAXI@Z @ 0x18013D820 (--_GTaskbarLayoutParser@@UEAAPEAXI@Z.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013E1C0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     ?_Change_array@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXQEAUParsedPenWorkspaceLayout@@_K1@Z @ 0x18013EC20 (-_Change_array@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@.c)
 *     ?_Destroy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXPEAUParsedPenWorkspaceLayout@@0@Z @ 0x18013ED40 (-_Destroy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std.c)
 *     ?_Tidy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXXZ @ 0x18013EDE0 (-_Tidy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@A.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1801A062C (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$1 @ 0x1801A075E (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$1.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$2 @ 0x1801A076A (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$2.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801A0BE0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall StartLayout::SelectionData::~SelectionData(StartLayout::SelectionData *this)
{
  LPVOID *v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v4; // rsi

  v1 = (LPVOID *)*((_QWORD *)this + 1);
  v2 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 2) - (_QWORD)v1 + 7LL) >> 3;
  if ( (unsigned __int64)v1 > *((_QWORD *)this + 2) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CoTaskMemFree(*v1);
      ++v2;
      ++v1;
    }
    while ( v2 != v4 );
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 32);
  std::vector<void *>::_Tidy((char *)this + 8);
}
