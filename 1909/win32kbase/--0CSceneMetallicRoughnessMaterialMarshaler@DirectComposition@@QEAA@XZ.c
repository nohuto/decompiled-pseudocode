/*
 * XREFs of ??0CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A288C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *__fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::CSceneMetallicRoughnessMaterialMarshaler(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this)
{
  DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
