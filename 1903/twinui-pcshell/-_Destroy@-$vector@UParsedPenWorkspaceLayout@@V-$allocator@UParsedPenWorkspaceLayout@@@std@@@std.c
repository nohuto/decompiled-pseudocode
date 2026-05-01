/*
 * XREFs of ?_Destroy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXPEAUParsedPenWorkspaceLayout@@0@Z @ 0x18016A2A0
 * Callers:
 *     _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch$30 @ 0x180168141 (_std--vector_ParsedPenWorkspaceLayout_std--allocator_ParsedPenWorkspaceLayout___--__ea_180168141.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180165F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801686F4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

void __fastcall std::vector<ParsedPenWorkspaceLayout>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(v4 + 32));
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(v4);
      v4 += 136LL;
    }
    while ( v4 != a3 );
  }
}
