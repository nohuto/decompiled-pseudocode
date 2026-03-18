/*
 * XREFs of ?Allocate@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C013C3D8
 * Callers:
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C013C1D4 (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 * Callees:
 *     ?ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F26F0 (-ReleaseExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2710 (-ReleaseShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2730 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00F2758 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Allocate@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C013C308 (-Allocate@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C013C620 (-Create@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013C6DC (-Destroy@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

unsigned __int64 __fastcall NSInstrumentation::CTypeIsolation<233472,912>::Allocate(__int64 a1)
{
  NSInstrumentation::CPlatformReaderWriterLock *v1; // rbx
  unsigned __int64 v3; // rbp
  _QWORD *i; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rsi
  NSInstrumentation::CPlatformReaderWriterLock *v8; // rbx
  _QWORD *v9; // rcx

  v1 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
  v3 = 0LL;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v1);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v5 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(i[4]);
    if ( v5 )
    {
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v1);
      return v5;
    }
  }
  NSInstrumentation::CPlatformReaderWriterLock::ReleaseShared(v1);
  v6 = NSInstrumentation::CSectionEntry<233472,912>::Create();
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    v3 = NSInstrumentation::CSectionBitmapAllocator<233472,912>::Allocate(*(_QWORD *)(v6 + 32));
    if ( v3 )
    {
      v8 = *(NSInstrumentation::CPlatformReaderWriterLock **)(a1 + 16);
      NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v8);
      v9 = *(_QWORD **)(a1 + 8);
      if ( *v9 != a1 )
        __fastfail(3u);
      v7[1] = v9;
      *v7 = a1;
      *v9 = v7;
      *(_DWORD *)(a1 + 24) += 228;
      *(_QWORD *)(a1 + 8) = v7;
      NSInstrumentation::CPlatformReaderWriterLock::ReleaseExclusive(v8);
    }
    else
    {
      NSInstrumentation::CSectionEntry<233472,912>::Destroy(v7);
    }
  }
  return v3;
}
