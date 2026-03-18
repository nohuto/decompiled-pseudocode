/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800D50AC
 * Callers:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x1800C4810 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x180159AA0 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    operator delete((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
