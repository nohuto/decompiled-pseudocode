/*
 * XREFs of ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C006DABC
 * Callers:
 *     _lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C0081400 (_lambda_4244bae6fa0a501e9e28a4e0afb3a818_--_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST.c)
 * Callees:
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C006DB7C (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C006DC18 (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C010926C (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rsi
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
    {
      if ( i == a1 )
      {
        ExReleasePushLockSharedEx(v2, 0LL);
        KeLeaveCriticalRegion();
        NSInstrumentation::PlatformAbort(3LL, a2);
        return;
      }
      v6 = i[4];
      v7 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::CheckAllocationStatus(v6, a2);
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          NSInstrumentation::CSectionBitmapAllocator<36864,144>::Free(v6, a2);
          ExReleasePushLockSharedEx(v2, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            continue;
          v10 = 2LL;
        }
        else
        {
          v10 = 1LL;
        }
        NSInstrumentation::PlatformAbort(v10, a2);
      }
    }
  }
}
