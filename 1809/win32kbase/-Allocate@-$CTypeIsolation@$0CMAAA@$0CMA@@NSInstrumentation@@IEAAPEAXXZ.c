/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00681B8
 * Callers:
 *     _lambda_2d2a1476764a2b010e311b2aabac4e07_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C00814D0 (_lambda_2d2a1476764a2b010e311b2aabac4e07_--_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0068300 (-Allocate@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0068550 (-Create@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<180224,704>::Allocate(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *i; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<180224,704>::Allocate(i[4]);
    if ( v5 )
    {
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      return v5;
    }
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v7 = NSInstrumentation::CSectionEntry<180224,704>::Create();
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<180224,704>::Allocate(*(_QWORD *)(v7 + 32));
    if ( v3 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      v8[1] = v10;
      *v8 = a1;
      *v10 = v8;
      *(_DWORD *)(a1 + 24) += 220;
      *(_QWORD *)(a1 + 8) = v8;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v8);
      ExFreePoolWithTag(v8, 0);
    }
  }
  return v3;
}
