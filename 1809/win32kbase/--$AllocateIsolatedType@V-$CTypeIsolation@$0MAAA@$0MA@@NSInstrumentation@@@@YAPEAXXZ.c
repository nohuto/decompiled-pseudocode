/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C005F894
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005F744 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0060F54 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0067824 (-Create@-$CSectionEntry@$0MAAA@$0MA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C00758F0 (-Allocate@-$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<49152,192>>()
{
  unsigned __int8 *v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r14
  unsigned __int8 *i; // rsi
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int8 *v7; // rsi
  __int64 v8; // rbx
  unsigned __int8 **v9; // rax

  v0 = gpTypeIsolation[3];
  if ( !v0 )
    return 0LL;
  v1 = *((_QWORD *)v0 + 2);
  v2 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  for ( i = *(unsigned __int8 **)v0; i != v0; i = *(unsigned __int8 **)i )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(*((_QWORD *)i + 4));
    if ( v4 )
    {
      ExReleasePushLockSharedEx(v1, 0LL);
      KeLeaveCriticalRegion();
      return v4;
    }
  }
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  v6 = NSInstrumentation::CSectionEntry<49152,192>::Create();
  v7 = (unsigned __int8 *)v6;
  if ( v6 )
  {
    v2 = NSInstrumentation::CSectionBitmapAllocator<49152,192>::Allocate(*(_QWORD *)(v6 + 32));
    if ( v2 )
    {
      v8 = *((_QWORD *)v0 + 2);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8, 0LL);
      v9 = (unsigned __int8 **)*((_QWORD *)v0 + 1);
      if ( *v9 != v0 )
        __fastfail(3u);
      *(_QWORD *)v7 = v0;
      *((_QWORD *)v7 + 1) = v9;
      *v9 = v7;
      *((_DWORD *)v0 + 6) += 252;
      *((_QWORD *)v0 + 1) = v7;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v7);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
