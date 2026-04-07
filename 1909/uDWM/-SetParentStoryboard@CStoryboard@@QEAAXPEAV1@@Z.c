/*
 * XREFs of ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18002EC48
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002EA44 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002ECF4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002D1BC (-Release@CStoryboard@@QEAAKXZ.c)
 */

void __fastcall CStoryboard::SetParentStoryboard(CStoryboard *this, struct CStoryboard *a2)
{
  CStoryboard *v4; // rcx

  v4 = (CStoryboard *)*((_QWORD *)this + 10);
  if ( v4 )
    CStoryboard::Release(v4);
  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
