/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0196FF0
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00190FC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?RemoveHeap@UMPDOBJ@@QEAAXXZ @ 0x1C00192C0 (-RemoveHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1C01391C8 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
    *((_QWORD *)this + 49) = 0LL;
  else
    UMPDOBJ::RemoveHeap(this);
}
