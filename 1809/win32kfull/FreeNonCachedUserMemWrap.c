/*
 * XREFs of FreeNonCachedUserMemWrap @ 0x1C0101E90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0101ED8 (-RemoveHeap@UMPDOBJ@@QEAAXXZ.c)
 */

void __fastcall FreeNonCachedUserMemWrap(UMPDOBJ *this)
{
  if ( *((_DWORD *)this + 106) && *((_DWORD *)this + 102) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    *((_QWORD *)this + 49) = 0LL;
  else
    UMPDOBJ::RemoveHeap(this);
}
