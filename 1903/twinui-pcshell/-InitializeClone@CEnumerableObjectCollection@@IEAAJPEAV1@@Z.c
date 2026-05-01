/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x180113C4C
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010FEB0 (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::InitializeClone(
        CEnumerableObjectCollection *this,
        struct CEnumerableObjectCollection *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  int v6; // eax
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdx
  _QWORD *v16; // rcx

  v4 = *((int *)this + 12);
  v5 = (_QWORD *)((char *)a2 + 40);
  v6 = *((_DWORD *)this + 7);
  if ( v6 <= (int)v4 )
    v6 = *((_DWORD *)this + 12);
  v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
         (char *)a2 + 40,
         v6,
         a3,
         a4);
  if ( v9 >= 0 )
  {
    v12 = v4;
    v13 = 0LL;
    do
    {
      if ( v13 >= v12 )
        break;
      v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v13);
      if ( v14 )
      {
        v15 = v5[1];
        v9 = 0;
        if ( v15 != v5[3]
          || (v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                     v5,
                     v15 + 1,
                     v10,
                     v11),
              v9 >= 0) )
        {
          v16 = (_QWORD *)(*v5 + 8 * v5[1]++);
          if ( v16 )
            *v16 = v14;
        }
        if ( v9 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
          *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
        }
      }
      else
      {
        v9 = -2147418113;
      }
      ++v13;
    }
    while ( v9 >= 0 );
  }
  return (unsigned int)v9;
}
