/*
 * XREFs of ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0074E3C
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C007E970 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0070D2C (-Free@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C0074EFC (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C010926C (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Free(_QWORD *a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rsi
  __int64 *v6; // rbp
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
      v6 = (__int64 *)i[4];
      v7 = NSInstrumentation::CSectionBitmapAllocator<40960,160>::CheckAllocationStatus(v6, a2);
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( !v8 )
        {
          NSInstrumentation::CSectionBitmapAllocator<40960,160>::Free(v6, a2);
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
