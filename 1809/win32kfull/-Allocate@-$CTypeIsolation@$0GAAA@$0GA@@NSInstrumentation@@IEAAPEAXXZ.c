/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C01F9224
 * Callers:
 *     MNAllocPopup @ 0x1C01F9B2C (MNAllocPopup.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C01D4BF4 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C01F90F4 (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C01F9588 (-Create@-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CTypeIsolation<24576,96>::Allocate(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rbp
  __int64 **i; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  __int64 ***v9; // rcx

  v1 = a1[2];
  v3 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  for ( i = (__int64 **)*a1; i != a1; i = (__int64 **)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(i[4]);
    if ( v5 )
    {
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      return v5;
    }
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v6 = NSInstrumentation::CSectionEntry<24576,96>::Create();
  v7 = (__int64 *)v6;
  if ( v6 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Allocate(*(__int64 **)(v6 + 32));
    if ( v3 )
    {
      v8 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      v9 = (__int64 ***)a1[1];
      if ( *v9 != a1 )
        __fastfail(3u);
      v7[1] = (__int64)v9;
      *v7 = (__int64)a1;
      *v9 = (__int64 **)v7;
      *((_DWORD *)a1 + 6) += 252;
      a1[1] = v7;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v3;
}
