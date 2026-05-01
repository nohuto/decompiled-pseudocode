/*
 * XREFs of ??_GGridRow@@QEAAPEAXI@Z @ 0x180307FD8
 * Callers:
 *     ?RemoveAll@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAXXZ @ 0x1803091F0 (-RemoveAll@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-$CSimpleArray.c)
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1803191A0 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1800EB0F8 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

GridRow *__fastcall GridRow::`scalar deleting destructor'(GridRow *this)
{
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)this + 24);
  return this;
}
