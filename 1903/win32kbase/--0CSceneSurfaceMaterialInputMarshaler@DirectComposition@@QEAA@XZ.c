/*
 * XREFs of ??0CSceneSurfaceMaterialInputMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A4BC0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSceneSurfaceMaterialInputMarshaler *__fastcall DirectComposition::CSceneSurfaceMaterialInputMarshaler::CSceneSurfaceMaterialInputMarshaler(
        DirectComposition::CSceneSurfaceMaterialInputMarshaler *this)
{
  DirectComposition::CSceneSurfaceMaterialInputMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSceneSurfaceMaterialInputMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
