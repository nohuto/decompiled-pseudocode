/*
 * XREFs of ??0CCompiledEffectTemplateMarshaler@DirectComposition@@QEAA@XZ @ 0x1C00999BC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CCompiledEffectTemplateMarshaler *__fastcall DirectComposition::CCompiledEffectTemplateMarshaler::CCompiledEffectTemplateMarshaler(
        DirectComposition::CCompiledEffectTemplateMarshaler *this)
{
  DirectComposition::CCompiledEffectTemplateMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CCompiledEffectTemplateMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  return result;
}
