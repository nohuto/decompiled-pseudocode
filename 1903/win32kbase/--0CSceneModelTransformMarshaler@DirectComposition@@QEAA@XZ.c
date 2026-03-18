/*
 * XREFs of ??0CSceneModelTransformMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4B6C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneModelTransformMarshaler *__fastcall DirectComposition::CSceneModelTransformMarshaler::CSceneModelTransformMarshaler(
        DirectComposition::CSceneModelTransformMarshaler *this)
{
  DirectComposition::CSceneModelTransformMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSceneModelTransformMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
