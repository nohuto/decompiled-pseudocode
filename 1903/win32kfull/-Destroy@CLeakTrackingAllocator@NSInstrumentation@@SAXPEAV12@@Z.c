/*
 * XREFs of ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013F4D4
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C013F470 (UninitializeWin32PoolTracking.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C013DADC (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02D2FC0 (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C02D3E3C (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::Destroy(
        struct NSInstrumentation::CLeakTrackingAllocator *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rdi

  v1 = *(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 72LL) )
  {
    v2 = *(_QWORD **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 48LL);
    if ( v2 )
      NSInstrumentation::CPointerHashTable::Destroy(v2);
    v3 = (void *)v1[7];
    if ( v3 )
      NSInstrumentation::CSortedVector<void *,void *>::Destroy(v3);
    v4 = (void *)v1[8];
    if ( v4 )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(v1[8]);
      ExFreePoolWithTag(v4, 0);
    }
    ExFreePoolWithTag(v1, 0);
  }
}
