/*
 * XREFs of ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18003D260
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002284C (-ValidateResources@CText@@AEAAJXZ.c)
 * Callees:
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x18003D2F4 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CText::UpdateAlignmentTransform(CText *this)
{
  CMatrixTransformProxy *v1; // r8
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  void *v6; // [rsp+28h] [rbp-50h]
  struct _MilMatrix3x2D v7; // [rsp+30h] [rbp-48h] BYREF

  v1 = (CMatrixTransformProxy *)*((_QWORD *)this + 49);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*((_DWORD *)this + 31) - *((_DWORD *)this + 101)) / 2;
    *(_OWORD *)&v7.S_11 = _xmm;
    v7.DX = 0.0;
    *(_OWORD *)&v7.S_21 = _xmm;
    v7.DY = (double)v3;
    v4 = CMatrixTransformProxy::Update(v1, &v7);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1E8u, v6);
  }
  return v2;
}
