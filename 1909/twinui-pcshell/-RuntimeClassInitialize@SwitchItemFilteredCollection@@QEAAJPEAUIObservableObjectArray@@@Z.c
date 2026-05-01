/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x180375BB8
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x180374C78 (--$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@W.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEAVSwitchItemFilteredCollection@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@AEAPEAVSwitchItemFilteredCollection@@@Z @ 0x180374ABC (--$MakeAndInitialize@V-$CWeakReference@VSwitchItemFilteredCollection@@@WeakReference@@V12@AEAPEA.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x18037574C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x18037581C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_18037581C.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18038039C (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::RuntimeClassInitialize(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2)
{
  _QWORD *v2; // rbx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v15; // [rsp+50h] [rbp+20h] BYREF
  SwitchItemFilteredCollection *v16; // [rsp+60h] [rbp+30h] BYREF

  v2 = (_QWORD *)((char *)this + 304);
  v16 = this;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<SwitchItemFilteredCollection>,WeakReference::CWeakReference<SwitchItemFilteredCollection>,SwitchItemFilteredCollection * &>(
         v2,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v5);
    v7 = 419LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
         (_QWORD *)this + 32,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 421LL;
    goto LABEL_3;
  }
  v6 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
         (_QWORD *)this + 34,
         (__int64)a2);
  if ( v6 < 0 )
  {
    v7 = 422LL;
    goto LABEL_3;
  }
  v9 = (_QWORD *)((char *)this + 184);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 23, (__int64)a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v9 + 24LL))(*v9, &v15);
  if ( v6 < 0 )
  {
    v7 = 427LL;
    goto LABEL_3;
  }
  v10 = 0;
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = 0LL;
      v11 = *v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, SwitchItemFilteredCollection **))(*(_QWORD *)v11 + 32LL))(
              v11,
              v10,
              &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
              &v16);
      v6 = v12;
      if ( v12 < 0 )
        break;
      v12 = ObservableObjectArray::_AddItem(this, &v16, 2LL);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 432LL;
        goto LABEL_18;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      if ( ++v10 >= v15 )
        return 0LL;
    }
    v13 = 431LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    return (unsigned int)v6;
  }
  return 0LL;
}
