/*
 * XREFs of ??0CPrimitiveGroupLayerClipMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A26CC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CPrimitiveGroupLayerClipMarshaler *__fastcall DirectComposition::CPrimitiveGroupLayerClipMarshaler::CPrimitiveGroupLayerClipMarshaler(
        DirectComposition::CPrimitiveGroupLayerClipMarshaler *this)
{
  DirectComposition::CPrimitiveGroupLayerClipMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupLayerClipMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
