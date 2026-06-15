/*
 * XREFs of _o_malloc_0 @ 0x14001CBD0
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     ?AllocateHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z @ 0x140050C9C (-AllocateHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl o_malloc_0(size_t Size)
{
  return malloc(Size);
}
