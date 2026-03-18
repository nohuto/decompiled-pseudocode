/*
 * XREFs of ??0CSceneMeshMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4B0C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneMeshMarshaler *__fastcall DirectComposition::CSceneMeshMarshaler::CSceneMeshMarshaler(
        DirectComposition::CSceneMeshMarshaler *this)
{
  DirectComposition::CSceneMeshMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSceneMeshMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
