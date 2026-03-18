/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C020F980
 * Callers:
 *     MNAllocPopup @ 0x1C0210288 (MNAllocPopup.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01EA258 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C020F850 (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C020FC60 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C02D2450 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 */

void *__fastcall NSInstrumentation::CTypeIsolation<24576,96>::Allocate(__int64 **a1, void *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 **i; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 *v11; // rbx
  __int64 ***v12; // rcx

  if ( *((_BYTE *)a1 + 36) )
    return NSInstrumentation::PlatformAllocateFromPagedLookasideList((NSInstrumentation *)a1[3], a2);
  v3 = a1[2];
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
  {
    v8 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(i[4]);
    if ( v8 )
    {
      ExReleasePushLockSharedEx(v3, 0LL, v5, v6);
      KeLeaveCriticalRegion();
      return (void *)v8;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL, v5, v6);
  KeLeaveCriticalRegion();
  v9 = NSInstrumentation::CSectionEntry<24576,96>::Create();
  v10 = (__int64 *)v9;
  if ( v9 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(*(__int64 **)(v9 + 32));
    if ( v4 )
    {
      v11 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      v12 = (__int64 ***)a1[1];
      if ( *v12 != a1 )
        __fastfail(3u);
      v10[1] = (__int64)v12;
      *v10 = (__int64)a1;
      *v12 = (__int64 **)v10;
      *((_DWORD *)a1 + 8) += 252;
      a1[1] = v10;
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
