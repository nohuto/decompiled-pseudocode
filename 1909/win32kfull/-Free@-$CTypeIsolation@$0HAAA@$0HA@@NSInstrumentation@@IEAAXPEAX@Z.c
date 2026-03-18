/*
 * XREFs of ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C02409AC
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0240318 (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C0240684 (-CheckAllocationStatus@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAA-AW4Allocat.c)
 *     ?Free@?$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C02408CC (-Free@-$CSectionBitmapAllocator@$0HAAA@$0HA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02D23A0 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C02D2490 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Free(__int64 a1, struct _SLIST_ENTRY *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // r14
  __int64 *v8; // rbp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // r8

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 36) )
    {
      v4 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      for ( i = *(_QWORD **)a1; ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a1 )
        {
          ExReleasePushLockSharedEx(v4, 0LL, v5, v6);
          KeLeaveCriticalRegion();
          NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
          return;
        }
        v8 = (__int64 *)i[4];
        v9 = NSInstrumentation::CSectionBitmapAllocator<28672,112>::CheckAllocationStatus(v8, (unsigned __int64)a2);
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 )
          {
            NSInstrumentation::CSectionBitmapAllocator<28672,112>::Free(v8, a2);
            ExReleasePushLockSharedEx(v4, 0LL, v13, v14);
            KeLeaveCriticalRegion();
            return;
          }
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 != 1 )
              continue;
            v12 = 2LL;
          }
          else
          {
            v12 = 1LL;
          }
          NSInstrumentation::PlatformAbort(v12, a2, 0LL);
        }
      }
    }
    memset(a2, 0, 0x70uLL);
    NSInstrumentation::PlatformFreeToPagedLookasideList(*(PSLIST_HEADER *)(a1 + 24), a2, v15);
  }
}
