/*
 * XREFs of ??0CSlideOut@@QEAA@XZ @ 0x18003B794
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002ECF4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x18003B7C8 (--0CSlide@@IEAA@XZ.c)
 */

CSlideOut *__fastcall CSlideOut::CSlideOut(CSlideOut *this)
{
  CSlideOut *v1; // rcx
  CSlideOut *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 16) = 0LL;
  *((_QWORD *)v1 + 2) = &CSlide::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CSlideOut::`vftable'{for `CBaseObject'};
  return result;
}
