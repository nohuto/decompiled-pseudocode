/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800D521C
 * Callers:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18004B428 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x1801583C0 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    operator delete((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
