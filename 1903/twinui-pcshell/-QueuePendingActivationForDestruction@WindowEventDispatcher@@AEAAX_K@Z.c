/*
 * XREFs of ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x18027F09C
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18000BA20 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x18027FF50 (-RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Buynode@AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@?$_List_buy@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@1@PEAU21@0AEBV?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18000E914 (--$_Buynode@AEBV-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___ @ 0x18027723C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_394f447e3cb73.c)
 *     ?erase@?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18028282C (-erase@-$list@V-$com_ptr_t@V-$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowEventDispatcher::QueuePendingActivationForDestruction(WindowEventDispatcher *this, __int64 a2)
{
  char *v3; // rsi
  _QWORD *v4; // rax
  _QWORD *i; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // edi
  volatile signed __int32 **v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rcx
  WindowEventDispatcher *v16; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int32 *v18; // [rsp+70h] [rbp+20h] BYREF
  WindowEventDispatcher *v19; // [rsp+80h] [rbp+30h] BYREF

  v3 = (char *)this + 488;
  v4 = (_QWORD *)*((_QWORD *)this + 61);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = (_QWORD *)i[2];
    if ( v6[1] == a2 )
    {
      v18 = (volatile signed __int32 *)i[2];
      if ( v6 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      std::list<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::erase(
        v3,
        &v19,
        i);
      v7 = *((_QWORD *)this + 63);
      v8 = *(__int64 **)(v7 + 8);
      v10 = std::_List_buy<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::_Buynode<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy> const &>(
              v9,
              v7,
              (__int64)v8,
              (_QWORD **)&v18);
      v11 = *((_QWORD *)this + 64);
      if ( v11 == 0xAAAAAAAAAAAAAA9LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 64) = v11 + 1;
      *(_QWORD *)(v7 + 8) = v10;
      *v8 = v10;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
      break;
    }
  }
  v19 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v16 = this;
  v17[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v17);
  v12 = *((_DWORD *)this + 121);
  v13 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_394f447e3cb7383e15c0434f11a7d111_____lambda_394f447e3cb7383e15c0434f11a7d111___(
          &v18,
          &v16);
  v14 = *v13;
  *v13 = 0LL;
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v15);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v12, 0LL, v14, 0LL);
  if ( v14 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
}
