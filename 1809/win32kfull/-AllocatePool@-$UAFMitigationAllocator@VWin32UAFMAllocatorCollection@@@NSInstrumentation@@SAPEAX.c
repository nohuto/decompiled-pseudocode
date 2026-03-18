/*
 * XREFs of ?AllocatePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAPEAXW4_POOL_TYPE@@_KIPEAI@Z @ 0x1C01F7F6C
 * Callers:
 *     Win32UAFMAllocPagedLookasideListImpl @ 0x1C01F8770 (Win32UAFMAllocPagedLookasideListImpl.c)
 *     Win32UAFMAllocPoolImpl @ 0x1C01F87F0 (Win32UAFMAllocPoolImpl.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01274A0 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C01F7F54 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01F800C (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

char *__fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(
        enum _POOL_TYPE a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  char *v7; // rbx
  char *v8; // rdi
  int Cookie; // eax

  v5 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  v7 = 0LL;
  if ( v5 )
  {
    v8 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
           (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
           a1,
           v5,
           v6);
    if ( v8 )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *((_DWORD *)v8 + 3) = Cookie;
      v7 = v8 + 16;
      *a4 = Cookie - 1;
    }
  }
  return v7;
}
