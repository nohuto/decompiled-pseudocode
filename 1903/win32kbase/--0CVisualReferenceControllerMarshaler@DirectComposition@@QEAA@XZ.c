/*
 * XREFs of ??0CVisualReferenceControllerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C009EE70
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CVisualReferenceControllerMarshaler *__fastcall DirectComposition::CVisualReferenceControllerMarshaler::CVisualReferenceControllerMarshaler(
        DirectComposition::CVisualReferenceControllerMarshaler *this)
{
  DirectComposition::CVisualReferenceControllerMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CVisualReferenceControllerMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
