/*
 * XREFs of ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C01651C0
 * Callers:
 *     ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C02A28DC (-UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDOBJ::ResetHeap(UMPDOBJ *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 49);
  if ( v1 )
    *(_DWORD *)(v1 + 56) = 0;
}
