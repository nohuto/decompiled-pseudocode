/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideListImpl @ 0x1C01D3F60
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C0196B1C (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01D3714 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

struct _SLIST_ENTRY *__fastcall Win32UAFMAllocateFromPagedLookasideListImpl(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        _DWORD *a2)
{
  struct _SLIST_ENTRY *v3; // rbx
  struct _SLIST_ENTRY *result; // rax
  ULONG Cookie; // eax

  v3 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(a1, *(union _SLIST_HEADER **)a1);
  result = 0LL;
  if ( v3 )
  {
    Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
    *((_DWORD *)&v3->Next + 3) = Cookie;
    *a2 = Cookie - 1;
    return v3 + 1;
  }
  return result;
}
