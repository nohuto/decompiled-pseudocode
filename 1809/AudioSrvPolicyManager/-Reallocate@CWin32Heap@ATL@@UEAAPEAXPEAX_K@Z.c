/*
 * XREFs of ?Reallocate@CWin32Heap@ATL@@UEAAPEAXPEAX_K@Z @ 0x18002DA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID __fastcall ATL::CWin32Heap::Reallocate(ATL::CWin32Heap *this, void *a2, SIZE_T a3)
{
  void *v3; // rcx

  v3 = (void *)*((_QWORD *)this + 1);
  if ( !a2 )
    return HeapAlloc(v3, 0, a3);
  if ( a3 )
    return HeapReAlloc(v3, 0, a2, a3);
  HeapFree(v3, 0, a2);
  return 0LL;
}
