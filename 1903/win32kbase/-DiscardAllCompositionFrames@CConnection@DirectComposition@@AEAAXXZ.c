/*
 * XREFs of ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0008338
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C00083B4 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00B7728 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::DiscardAllCompositionFrames(DirectComposition::CConnection *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
}
