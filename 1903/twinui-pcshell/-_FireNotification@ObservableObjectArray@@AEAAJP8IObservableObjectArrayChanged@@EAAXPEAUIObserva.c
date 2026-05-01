/*
 * XREFs of ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x180360BD0
 * Callers:
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180360B0C (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180360F04 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V?$ComPtr@UIObservableObjectArrayChanged@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1803608E4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChanged@@V-$ComPtr@UI.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V?$ComPtr@UIObservableObjectArrayChangedBeginEnd@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180360974 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIObservableObjectArrayChangedBeginEnd@@V-$C.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180413C68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall ObservableObjectArray::_FireNotification(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, __int64),
        unsigned int a3,
        __int64 a4)
{
  int CallbackArray; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  struct IObjectArray *v13; // rbx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rbx
  struct IObjectArray *v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+38h] [rbp-48h] BYREF
  struct IObjectArray *v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h] BYREF
  struct IObjectArray **v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h] BYREF
  struct IObjectArray **v29; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  struct IObjectArray *v31; // [rsp+B0h] [rbp+30h] BYREF

  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  CallbackArray = CGITRegistrationList::GetCallbackArray((CGITRegistrationList *)(a1 + 96), &v31);
  v9 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v10 = CGITRegistrationList::GetCallbackArray((CGITRegistrationList *)(a1 + 48), &v20);
    v9 = v10;
    if ( v10 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v22,
        (__int64)v31);
      LODWORD(v24) = 0;
      v26 = &v22;
      v25 = 0LL;
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v24);
      v11 = (__int64 *)&v27;
      v27 = v23;
      v29 = &v22;
      v28 = 0LL;
      while ( 1 )
      {
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(v11);
        if ( (_DWORD)v24 == v27 && v26 == v29 )
          break;
        v12 = v25;
        v21 = v25;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 24LL))(v12, a1, a3, a4);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        LODWORD(v24) = v24 + 1;
        v11 = &v24;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      v13 = v20;
      v22 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      v23 = 0;
      v14 = ((__int64 (__fastcall *)(struct IObjectArray *, int *))v13->lpVtbl->GetCount)(v13, &v23);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v14);
      LODWORD(v24) = 0;
      v26 = &v22;
      v25 = 0LL;
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::GetCurrentObject(&v24);
      v15 = (__int64 *)&v27;
      v27 = v23;
      v29 = &v22;
      v28 = 0LL;
      while ( 1 )
      {
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChanged,Microsoft::WRL::ComPtr<IObservableObjectArrayChanged>>::Iterator::GetCurrentObject(v15);
        if ( (_DWORD)v24 == v27 && v26 == v29 )
          break;
        v16 = v25;
        v21 = v25;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        a2(v16, a1, a4);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        LODWORD(v24) = v24 + 1;
        v15 = &v24;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v22,
        (__int64)v31);
      LODWORD(v24) = 0;
      v26 = &v22;
      v25 = 0LL;
      details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(&v24);
      v17 = (__int64 *)&v27;
      v27 = v23;
      v29 = &v22;
      v28 = 0LL;
      while ( 1 )
      {
        details::ObjectArrayAdapterImpl<IObservableObjectArrayChangedBeginEnd,Microsoft::WRL::ComPtr<IObservableObjectArrayChangedBeginEnd>>::Iterator::GetCurrentObject(v17);
        if ( (_DWORD)v24 == v27 && v26 == v29 )
          break;
        v18 = v25;
        v21 = v25;
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v18 + 32LL))(v18, a1, a3, a4);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        LODWORD(v24) = v24 + 1;
        v17 = &v24;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
  return v9;
}
