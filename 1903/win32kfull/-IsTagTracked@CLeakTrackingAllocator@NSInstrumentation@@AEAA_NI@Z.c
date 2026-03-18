/*
 * XREFs of ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C0132E2C
 * Callers:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C0132D14 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0132DC0 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996d5___lambda_f46a24200fa13ebf3509176f7b31ac85___ @ 0x1C02D2A00 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_5a5c26db124383813a4ad6aa9f2996.c)
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772bb___lambda_fb1d754a87bb4379b691d90d9f0cbdb4___ @ 0x1C02D2B34 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_d3bf7150635fe7f290e2f1d66af772.c)
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
