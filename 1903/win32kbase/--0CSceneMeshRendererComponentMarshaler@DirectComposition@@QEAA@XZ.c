/*
 * XREFs of ??0CSceneMeshRendererComponentMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4B2C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneMeshRendererComponentMarshaler *__fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::CSceneMeshRendererComponentMarshaler(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this)
{
  DirectComposition::CSceneMeshRendererComponentMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSceneMeshRendererComponentMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
