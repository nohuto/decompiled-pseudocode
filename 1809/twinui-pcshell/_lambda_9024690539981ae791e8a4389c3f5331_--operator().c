/*
 * XREFs of _lambda_9024690539981ae791e8a4389c3f5331_::operator() @ 0x1801301DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9024690539981ae791e8a4389c3f5331__&___ptr64_::Run @ 0x1801322E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9024690539981ae791e8a4389c3f53_ea_1801322E0.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x180052080 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180131440 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180135340 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9024690539981ae791e8a4389c3f5331_::operator()(__int64 a1)
{
  const unsigned __int16 *v2; // rbx
  int Window; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int16 **v6; // r8
  struct HWND__ v8[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v8[0].unused = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)EdpGetIsManaged(a1) )
  {
    Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)(*(_QWORD *)a1 + 152LL), &v12);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 388LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)Window);
      goto LABEL_10;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
    v9 = -1LL;
    v10 = -1LL;
    Window = EdpHelpers::GetEnterpriseIdForWindow((EdpHelpers *)v12, v8, v6);
    v4 = Window;
    if ( Window < 0 )
    {
      v5 = 391LL;
      goto LABEL_9;
    }
    v2 = *(const unsigned __int16 **)&v8[0].unused;
  }
  Window = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*(_QWORD *)a1 + 24LL), v2);
  v4 = Window;
  if ( Window < 0 )
  {
    v5 = 394LL;
    goto LABEL_9;
  }
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v8);
  return v4;
}
