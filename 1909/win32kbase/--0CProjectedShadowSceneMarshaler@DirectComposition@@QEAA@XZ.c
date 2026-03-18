/*
 * XREFs of ??0CProjectedShadowSceneMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00050B4
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProjectedShadowSceneMarshaler *__fastcall DirectComposition::CProjectedShadowSceneMarshaler::CProjectedShadowSceneMarshaler(
        DirectComposition::CProjectedShadowSceneMarshaler *this)
{
  DirectComposition::CProjectedShadowSceneMarshaler *result; // rax

  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CProjectedShadowSceneMarshaler::`vftable';
  *((_DWORD *)this + 23) = 2139095039;
  *((_DWORD *)this + 22) = 1065353216;
  *((_QWORD *)this + 12) = 1065353216LL;
  result = this;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = -1082130432;
  return result;
}
