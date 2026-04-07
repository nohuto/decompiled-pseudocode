/*
 * XREFs of ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x1800A4684
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800A3BDC (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

char __fastcall CTransitionVisualController::_FakeGutterAlreadyExists(
        CTransitionVisualController *this,
        const struct CTransitionVisualController::FakeGutterInfo *a2)
{
  char v2; // bl
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  RECT rc2; // [rsp+20h] [rbp-48h] BYREF
  RECT v10; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 34) )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 14);
      rc2 = *(RECT *)(*(_QWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 40LL) + 856LL);
      v10 = *(RECT *)(*(_QWORD *)(*(_QWORD *)(v6 + 8LL * v5) + 40LL) + 872LL);
      v7 = *(_QWORD *)(v6 + 8LL * v5);
      if ( (*(_DWORD *)(v7 + 24) & 0xFFF) == 0x16
        && *(_DWORD *)a2 == *(_DWORD *)(v7 + 28)
        && *((_QWORD *)a2 + 1) == *(_QWORD *)(v7 + 128)
        && EqualRect((const RECT *)a2 + 1, &rc2)
        && EqualRect((const RECT *)a2 + 2, &v10) )
      {
        break;
      }
      if ( ++v5 >= *((_DWORD *)this + 34) )
        return v2;
    }
    return 1;
  }
  return v2;
}
