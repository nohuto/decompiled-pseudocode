/*
 * XREFs of ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x140002600
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x140002450 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1400449B8 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x140002638 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>();
  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
