/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00DFC44
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0036D20 (--$AllocateIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00DFDC0 (-Allocate@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C015EE34 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01EA258 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C02D2450 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 */

void *__fastcall NSInstrumentation::CTypeIsolation<36864,144>::Allocate(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *i; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rcx

  if ( *(_BYTE *)(a1 + 36) )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList(*(NSInstrumentation **)(a1 + 24), a2);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v8 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(i[4]);
    if ( v8 )
    {
      ExReleasePushLockSharedEx(v3, 0LL, v5, v6);
      KeLeaveCriticalRegion();
      return (void *)v8;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL, v5, v6);
  KeLeaveCriticalRegion();
  v9 = NSInstrumentation::CSectionEntry<36864,144>::Create();
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Allocate(*(_QWORD *)(v9 + 32));
    if ( v4 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      v12 = *(_QWORD **)(a1 + 8);
      if ( *v12 != a1 )
        __fastfail(3u);
      v10[1] = v12;
      *v10 = a1;
      *v12 = v10;
      *(_DWORD *)(a1 + 32) += 252;
      *(_QWORD *)(a1 + 8) = v10;
      ExReleasePushLockExclusiveEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v10);
      ExFreePoolWithTag(v10, 0);
    }
  }
  return (void *)v4;
}
