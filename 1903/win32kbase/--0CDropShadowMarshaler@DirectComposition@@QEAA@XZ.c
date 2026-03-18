/*
 * XREFs of ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00AC3F0
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(
        DirectComposition::CDropShadowMarshaler *this)
{
  DirectComposition::CDropShadowMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 25) = 0;
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  *((_DWORD *)this + 24) = 1065353216;
  *((_DWORD *)this + 19) = 1065353216;
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 20) = 1091567616;
  return result;
}
