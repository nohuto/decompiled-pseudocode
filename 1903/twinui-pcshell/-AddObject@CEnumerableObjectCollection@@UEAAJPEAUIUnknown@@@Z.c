/*
 * XREFs of ?AddObject@CEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z @ 0x18005BBC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::AddObject(
        CEnumerableObjectCollection *this,
        struct IUnknown *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  char *v5; // rbx
  int v6; // edi
  __int64 result; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  char *v12; // r14
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  LPMALLOC ppMalloc; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((int *)this + 7);
  v5 = (char *)this + 40;
  v6 = 0;
  result = 2147942522LL;
  if ( v4 <= 0xFFFFFFFE )
  {
    a4 = *((_QWORD *)this + 8);
    result = 0LL;
    if ( v4 > a4 )
    {
      v9 = 2 * a4;
      if ( !is_mul_ok(a4, 2uLL) )
        return 2147942934LL;
      if ( a4 > 0x1000 )
        v9 = a4 + 4096;
      if ( v4 <= v9 )
        v10 = v9;
      else
        v10 = *((int *)this + 7);
      if ( v10 > 0xFFFFFFFE )
      {
        v9 = 4294967294LL;
      }
      else if ( v4 > v9 )
      {
        v9 = *((int *)this + 7);
      }
      v11 = 8 * v9;
      if ( is_mul_ok(v9, 8uLL) )
      {
        v12 = (char *)CoTaskMemRealloc(*(LPVOID *)v5, 8 * v9);
        if ( !v12 )
          return 2147942414LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v13 = ((__int64 (__fastcall *)(LPMALLOC, char *))ppMalloc->lpVtbl->GetSize)(ppMalloc, v12);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          if ( v13 > v11 )
            memset_0(&v12[v11], 0, v13 - v11);
        }
        result = 0LL;
        *((_QWORD *)v5 + 3) = v9;
        *(_QWORD *)v5 = v12;
      }
      else
      {
        result = 2147942934LL;
      }
    }
  }
  if ( (int)result >= 0 )
  {
    v14 = *((_QWORD *)v5 + 1);
    if ( v14 != *((_QWORD *)v5 + 3)
      || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 v5,
                 v14 + 1,
                 v4,
                 a4),
          v6 >= 0) )
    {
      v15 = (_QWORD *)(*(_QWORD *)v5 + 8 * (*((_QWORD *)v5 + 1))++);
      if ( v15 )
        *v15 = a2;
    }
    if ( v6 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    return (unsigned int)v6;
  }
  return result;
}
