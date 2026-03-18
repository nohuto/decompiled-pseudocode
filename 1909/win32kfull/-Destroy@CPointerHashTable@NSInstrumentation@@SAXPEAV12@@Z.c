/*
 * XREFs of ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01179FC
 * Callers:
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C01179BC (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C01199B4 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C0141E6C (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02D2E48 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::Destroy(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[4];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
