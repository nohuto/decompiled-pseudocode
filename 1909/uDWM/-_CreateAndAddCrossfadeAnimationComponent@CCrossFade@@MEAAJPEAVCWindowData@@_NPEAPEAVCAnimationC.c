/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A99B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18002E918 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  int v7; // eax

  v7 = (*(__int64 (__fastcall **)(CCrossFade *, _QWORD))(*(_QWORD *)this + 112LL))(this, *((unsigned int *)a2 + 153));
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v7, 0LL, 0LL, 0xFFFFFFFF, 1, a4);
}
