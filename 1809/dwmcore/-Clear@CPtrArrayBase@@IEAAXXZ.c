/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800767EC
 * Callers:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18006842C (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x1801E1F18 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    WPF::ProcessHeapImpl::Free((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
