/*
 * XREFs of ??0DragInputHandler@@QEAA@XZ @ 0x180398000
 * Callers:
 *     ??$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJPEAPEAVDragInputHandler@@AEAPEAUIExternalDragHost@@@Z @ 0x180397F74 (--$MakeAndInitialize@VDragInputHandler@@V1@AEAPEAUIExternalDragHost@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18035EE38 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

DragInputHandler *__fastcall DragInputHandler::DragInputHandler(DragInputHandler *this)
{
  DragInputHandler *result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DragInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputSource>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return result;
}
