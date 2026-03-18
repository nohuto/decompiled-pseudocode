/*
 * XREFs of ??0CDesktopTargetMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00A635C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CDesktopTargetMarshaler *__fastcall DirectComposition::CDesktopTargetMarshaler::CDesktopTargetMarshaler(
        DirectComposition::CDesktopTargetMarshaler *this)
{
  DirectComposition::CDesktopTargetMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_QWORD *)this = &DirectComposition::CDesktopTargetMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
