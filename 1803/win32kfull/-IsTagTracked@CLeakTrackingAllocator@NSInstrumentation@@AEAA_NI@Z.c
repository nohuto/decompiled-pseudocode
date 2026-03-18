/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C0106360
 * Callers:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0106214 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C010627C (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1bf___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C0196CB4 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_ec6537825fc6790e67aff99146f8d1.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9cda___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02ADD10 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_c4c4ea517b44899cfbbfd85c0dbd9c.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
        NSInstrumentation::CLeakTrackingAllocator *this,
        int a2)
{
  __int64 v3; // rax

  if ( (a2 & *((_DWORD *)this + 10)) != a2 )
    return 0;
  v3 = 0LL;
  if ( !*((_DWORD *)this + 11) )
    return 0;
  while ( *((_DWORD *)this + v3) != a2 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)this + 11) )
      return 0;
  }
  return 1;
}
