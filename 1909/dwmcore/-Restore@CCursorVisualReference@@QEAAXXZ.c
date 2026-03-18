/*
 * XREFs of ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18018B8A8
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180023B50 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCursorVisualReference::Restore(CCursorVisualReference *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 94) ^= (*(_BYTE *)(v2 + 94) ^ (8 * *((_BYTE *)this + 24))) & 8;
  v3 = (__int64 *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( *((float *)v3 + 18) != 0.0 )
    {
      v4 = *v3;
      *((_DWORD *)v3 + 18) = 0;
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 64))(v3, 0LL, 0LL);
    }
    ReleaseInterface<MoveOptimizationInfo>((CGdiSpriteBitmap **)this + 2);
  }
  *((_DWORD *)this + 7) = 0;
}
