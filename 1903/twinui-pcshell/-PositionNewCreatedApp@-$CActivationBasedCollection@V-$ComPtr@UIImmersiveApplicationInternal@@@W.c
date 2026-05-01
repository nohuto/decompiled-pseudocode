/*
 * XREFs of ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x1800814E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006428C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionNewCreatedApp(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rcx

  v2 = a1 + 1;
  v4 = a1[2];
  v5 = 0;
  if ( v4 != a1[4]
    || (v5 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               (__int64)(a1 + 1),
               v4 + 1),
        v5 >= 0) )
  {
    v6 = (__int64 *)(*v2 + 8 * v2[1]++);
    if ( v6 )
    {
      v7 = *a2;
      *v6 = *a2;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return (unsigned int)v5;
}
