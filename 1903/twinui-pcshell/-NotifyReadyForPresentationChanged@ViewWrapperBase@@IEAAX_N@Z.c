/*
 * XREFs of ?NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z @ 0x180298B34
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x18029BB90 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ffa3af7a26551e9185fc51c113df66ea_____lambda_ffa3af7a26551e9185fc51c113df66ea___ @ 0x180294E1C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ffa3af7a26551.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3650c138a53d014ad04808369cac353b___ @ 0x1802951F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_3650c138a53d014ad04808369cac353b___.c)
 */

void __fastcall ViewWrapperBase::NotifyReadyForPresentationChanged(ViewWrapperBase *this, __int64 a2)
{
  char v2; // si
  unsigned int v4; // r8d
  char *v5; // rbx
  unsigned int v6; // edi
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  ViewWrapperBase *v10; // [rsp+30h] [rbp-20h] BYREF
  char *v11; // [rsp+38h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v13; // [rsp+70h] [rbp+20h] BYREF
  char *v14; // [rsp+80h] [rbp+30h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 && !*((_BYTE *)this + 517) )
  {
    v4 = *((_DWORD *)this + 46);
    v13 = (volatile signed __int32 *)*((_QWORD *)this + 34);
    *((_BYTE *)this + 517) = 1;
    Windows::Internal::ComTaskPool::QueueTask__lambda_3650c138a53d014ad04808369cac353b___((__int64)this, a2, v4, &v13);
  }
  if ( this )
    v5 = (char *)this + 32;
  else
    v5 = 0LL;
  v14 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v10 = this;
  v11 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v6 = *((_DWORD *)this + 46);
  v12 = v2;
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ffa3af7a26551e9185fc51c113df66ea_____lambda_ffa3af7a26551e9185fc51c113df66ea___(
         &v13,
         (__int64)&v10);
  v8 = *v7;
  *v7 = 0LL;
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v6, 0LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
}
