/*
 * XREFs of ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x18001BFF0
 * Callers:
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ @ 0x18001BD58 (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXXZ.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001DD00 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c_____lambda_a9307fb14462ef19126b81021743ae0c___ @ 0x18001C0EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462e.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-10h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 208LL))(*(_QWORD *)(a1 + 288));
  if ( (*(_BYTE *)(a1 + 364) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v7 = *(_QWORD *)a1;
    v11 = a1;
    v12[0] = a1;
    (*(void (__fastcall **)(__int64))(v7 + 8))(a1);
    v12[1] = a2;
    v8 = *(_DWORD *)(a1 + 564);
    v13 = a3;
    v9 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c_____lambda_a9307fb14462ef19126b81021743ae0c___(
                      &v14,
                      &v11);
    v10 = *v9;
    *v9 = 0LL;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    }
    SHTaskPoolQueueTask(3LL, 2LL, v8);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return result;
}
