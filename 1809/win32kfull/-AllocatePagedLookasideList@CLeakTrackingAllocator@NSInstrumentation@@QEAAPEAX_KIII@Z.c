/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C01273F4
 * Callers:
 *     Win32AllocPagedLookasideListImpl @ 0x1C01273D0 (Win32AllocPagedLookasideListImpl.c)
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01F8770 (Win32UAFMAllocPagedLookasideListImpl.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01274A0 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C012750C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 */

bool *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T a2,
        unsigned int a3,
        unsigned int a4,
        USHORT Depth)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  bool *result; // rax
  bool *v9; // rbx
  bool IsTagTracked; // al
  SIZE_T Size; // rdx

  v5 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  result = (bool *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                     (enum _POOL_TYPE)544,
                     0x90uLL,
                     a3);
  v9 = result;
  if ( result )
  {
    IsTagTracked = NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v5, a4);
    *v9 = IsTagTracked;
    Size = a2 + 16;
    if ( !IsTagTracked )
      Size = a2;
    ExInitializePagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(v9 + 16),
      (PALLOCATE_FUNCTION)NSInstrumentation::PlatformAllocate,
      (PFREE_FUNCTION)NSInstrumentation::PlatformFree,
      0x220u,
      Size,
      a4,
      Depth);
    return v9;
  }
  return result;
}
