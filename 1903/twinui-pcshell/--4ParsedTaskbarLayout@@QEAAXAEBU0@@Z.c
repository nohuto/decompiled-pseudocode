/*
 * XREFs of ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x180168784
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x1801679C8 (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180165F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ParsedTaskbarLayout::operator=(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rbx
  void *v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)a1);
  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  while ( v4 != (__int64 *)v5 )
  {
    v6 = *v4;
    v10 = *v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v8 = a1[1];
    if ( v8 != a1[3]
      || (int)CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a1,
                v8 + 1,
                v7) >= 0 )
    {
      v9 = (__int64 *)(*a1 + 8 * a1[1]++);
      if ( v9 )
      {
        *v9 = v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    ++v4;
  }
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a1 + 4),
    (const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *)(a2 + 32));
}
