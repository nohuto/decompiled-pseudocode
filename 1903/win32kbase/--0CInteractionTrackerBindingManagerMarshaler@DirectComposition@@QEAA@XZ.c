/*
 * XREFs of ??0CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAA@XZ @ 0x1C01AD828
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0012B84 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CInteractionTrackerBindingManagerMarshaler *__fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CInteractionTrackerBindingManagerMarshaler(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this)
{
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *result; // rax

  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerBindingManagerMarshaler::`vftable';
  result = this;
  *((_DWORD *)this + 5) = 1;
  *((_BYTE *)this + 64) = 1;
  *((_QWORD *)this + 11) = 32LL;
  return result;
}
