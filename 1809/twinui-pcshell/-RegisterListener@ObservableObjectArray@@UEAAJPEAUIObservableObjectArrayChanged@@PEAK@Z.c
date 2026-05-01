/*
 * XREFs of ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x180300140
 * Callers:
 *     ?RegisterListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1802F56A0 (-RegisterListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1803B19FC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

__int64 __fastcall ObservableObjectArray::RegisterListener(
        ObservableObjectArray *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CGITRegistrationList::Register((ObservableObjectArray *)((char *)this + 48), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
