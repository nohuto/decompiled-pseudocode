/*
 * XREFs of ??0CCrossFade@@QEAA@XZ @ 0x1800A7204
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180006C4C (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000575C (--0CStoryboard@@IEAA@_N@Z.c)
 */

CCrossFade *__fastcall CCrossFade::CCrossFade(CCrossFade *this)
{
  CCrossFade *v1; // rcx
  CCrossFade *result; // rax

  CStoryboard::CStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CCrossFade::`vftable'{for `CBaseObject'};
  return result;
}
