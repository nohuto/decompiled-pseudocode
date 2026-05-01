/*
 * XREFs of ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x180360A10
 * Callers:
 *     ?RegisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x180356200 (-RegisterBeginEndListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChangedBe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180413D4C (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

__int64 __fastcall ObservableObjectArray::RegisterBeginEndListener(
        ObservableObjectArray *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CGITRegistrationList::Register((ObservableObjectArray *)((char *)this + 96), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
