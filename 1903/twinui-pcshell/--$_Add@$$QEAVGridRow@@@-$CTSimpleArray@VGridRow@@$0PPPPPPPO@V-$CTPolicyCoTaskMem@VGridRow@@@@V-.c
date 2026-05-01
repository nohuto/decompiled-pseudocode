/*
 * XREFs of ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x180378CD0
 * Callers:
 *     ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x180379268 (-AddRow@GridLayout@@QEAAJPEA_K@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180165F34 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ_K0@Z @ 0x18037A0B0 (-_EnsureCapacity@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-$CSimpl.c)
 */

__int64 __fastcall CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_Add<GridRow &&>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi

  if ( a3 )
    *a3 = 0LL;
  v6 = a1[1];
  v7 = 0;
  if ( v6 != a1[3]
    || (v7 = CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_EnsureCapacity(
               a1,
               v6 + 1),
        v7 >= 0) )
  {
    ++a1[1];
    v8 = 56LL * a1[1] + *a1 - 56LL;
    if ( v8 )
    {
      *(_DWORD *)v8 = *(_DWORD *)a2;
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(a2 + 4);
      *(_OWORD *)(v8 + 8) = *(_OWORD *)(a2 + 8);
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_QWORD *)(v8 + 48) = 0LL;
      v9 = *(_QWORD *)(a2 + 24);
      v10 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 48) = 0LL;
      CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(v8 + 24);
      *(_QWORD *)(v8 + 24) = v9;
      *(_QWORD *)(v8 + 32) = v10;
      *(_QWORD *)(v8 + 48) = v10;
    }
    if ( a3 )
      *a3 = a1[1] - 1LL;
  }
  return (unsigned int)v7;
}
