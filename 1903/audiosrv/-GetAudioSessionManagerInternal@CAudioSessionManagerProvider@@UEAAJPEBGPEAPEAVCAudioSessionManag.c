/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800092B0
 * Callers:
 *     GetAudioSessionManager @ 0x180008EA0 (GetAudioSessionManager.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800091D0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009480 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180009BCC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x180009F78 (--$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSe.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180066D78 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  char *v5; // rbx
  struct IUnknown **v6; // rbx
  struct IUnknown **i; // r14
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 result; // rax
  volatile signed __int32 **v13; // rdx
  volatile signed __int32 *v14; // rcx
  struct IUnknown *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int32 *v17; // [rsp+70h] [rbp+8h] BYREF
  PCNZWCH lpString1; // [rsp+78h] [rbp+10h] BYREF
  char *v19; // [rsp+80h] [rbp+18h] BYREF

  lpString1 = a2;
  *a3 = 0LL;
  v5 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v19 = v5;
  v6 = (struct IUnknown **)*((_QWORD *)this + 7);
  for ( i = (struct IUnknown **)*((_QWORD *)this + 8); v6 != i; ++v6 )
  {
    v8 = CompareStringW(0x7Fu, 1u, lpString1, -1, (PCNZWCH)(*v6)[37].lpVtbl, -1);
    if ( v8 == 2 )
      break;
  }
  try
  {
    if ( v6 == *((struct IUnknown ***)this + 8) )
    {
      v17 = 0LL;
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManager,CAudioSessionManager,unsigned short const * &>(
             &v17,
             &lpString1);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD9,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v9);
        if ( v17 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v17);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
        return v10;
      }
      v13 = (volatile signed __int32 **)*((_QWORD *)this + 8);
      if ( *((volatile signed __int32 ***)this + 9) == v13 )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
          (char *)this + 56,
          v13,
          &v17);
        v14 = v17;
      }
      else
      {
        v14 = v17;
        *v13 = v17;
        if ( v14 )
        {
          _InterlockedIncrement(v14 + 3);
          v14 = v17;
        }
        *((_QWORD *)this + 8) += 8LL;
      }
      if ( v14 )
      {
        *a3 = (struct CAudioSessionManager *)v14;
        _InterlockedIncrement(v14 + 3);
        v14 = v17;
      }
      else
      {
        *a3 = 0LL;
      }
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v14);
    }
    else
    {
      if ( HasTooManyReferences(*v6) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE2,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)0x8007000ELL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
        return 2147942414LL;
      }
      v15 = *v6;
      if ( *v6 )
      {
        *a3 = (struct CAudioSessionManager *)v15;
        _InterlockedIncrement((volatile signed __int32 *)&v15[1].lpVtbl + 1);
      }
      else
      {
        *a3 = 0LL;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                           v11);
  }
  return result;
}
