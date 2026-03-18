/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0277E88
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C008E5F4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0101ED8 (-RemoveHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C0160104 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rdx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
    *((_QWORD *)this + 49) = 0LL;
  else
    UMPDOBJ::RemoveHeap((struct _UMPDHEAP **)this, v2);
}
