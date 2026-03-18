/*
 * XREFs of ??0CProxyGeometryClipMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01A26F0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0013E90 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CProxyGeometryClipMarshaler *__fastcall DirectComposition::CProxyGeometryClipMarshaler::CProxyGeometryClipMarshaler(
        DirectComposition::CProxyGeometryClipMarshaler *this)
{
  DirectComposition::CProxyGeometryClipMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CProxyGeometryClipMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
