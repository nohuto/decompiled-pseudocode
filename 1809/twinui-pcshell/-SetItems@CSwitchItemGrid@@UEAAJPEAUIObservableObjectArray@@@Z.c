/*
 * XREFs of ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1803097F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister @ 0x180276574 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChangedBegi.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x1802F53DC (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1802F54B4 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1802F54B4.c)
 *     ?_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z @ 0x180309A9C (-_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::SetItems(CSwitchItemGrid *this, struct IObservableObjectArray *a2)
{
  CSwitchItemGrid *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  struct IUnknown *v15; // [rsp+68h] [rbp+10h] BYREF

  v2 = (CSwitchItemGrid *)((char *)this - 208);
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 56LL))(this);
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v2 + 80LL))(v2);
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister((__int64)this + 680);
  EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Unregister((__int64)this + 696);
  if ( !a2 )
    goto LABEL_17;
  v5 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
        v8 = (*(__int64 (__fastcall **)(struct IObservableObjectArray *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
               a2,
               v7,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v15);
        v6 = v8;
        if ( v8 < 0 )
          break;
        v8 = CSwitchItemGrid::_AddElementForObject(v2, v15);
        v6 = v8;
        if ( v8 < 0 )
        {
          v11 = 427LL;
          goto LABEL_12;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
        if ( ++v7 >= v14 )
          goto LABEL_8;
      }
      v11 = 426LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      goto LABEL_16;
    }
LABEL_8:
    v9 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register(
           (_QWORD *)this + 85,
           (__int64)a2);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 431LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)v2 + 80LL))(v2);
      goto LABEL_18;
    }
    v9 = EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register(
           (_QWORD *)this + 87,
           (__int64)a2);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 432LL;
      goto LABEL_15;
    }
LABEL_17:
    v6 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19F,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
    (const char *)(unsigned int)v5);
LABEL_18:
  (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 64LL))(this);
  return v6;
}
