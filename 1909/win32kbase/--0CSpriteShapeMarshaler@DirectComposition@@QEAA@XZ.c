/*
 * XREFs of ??0CSpriteShapeMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A2A24
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CSpriteShapeMarshaler *__fastcall DirectComposition::CSpriteShapeMarshaler::CSpriteShapeMarshaler(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  DirectComposition::CSpriteShapeMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CSpriteShapeMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
