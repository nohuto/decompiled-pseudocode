/*
 * XREFs of ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1800586F8
 * Callers:
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180057548 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800587A4 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1800B0F63 (memmove_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  int v10; // esi
  __int64 v11; // r8
  _QWORD *v12; // rcx

  v3 = 0;
  if ( a3 )
  {
    v5 = (_QWORD *)(a1 + 8);
    CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::RemoveAt(
      a1 + 8,
      a3);
    v8 = v5[1];
    v9 = 1LL;
    v10 = 0;
    if ( v8 )
      v9 = v8 + 1;
    if ( v9 <= v5[3]
      || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  v5,
                  v9,
                  v6,
                  v7),
          v10 >= 0) )
    {
      v11 = v5[1];
      if ( v11 )
        memmove_0((void *)(*v5 + 8LL), (const void *)*v5, 8 * v11);
      v5[1] = v9;
      v12 = (_QWORD *)*v5;
      if ( *v5 )
      {
        *v12 = *a2;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v12);
      }
    }
    return (unsigned int)v10;
  }
  return v3;
}
