/*
 * XREFs of ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002EC1C
 * Callers:
 *     ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x1800303A4 (-_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180027DE0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___ @ 0x1800E95B4 (Windows--Internal--ComTaskPool--QueueTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
        LPCWSTR psz,
        const unsigned __int16 *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  unsigned int v4; // ebx
  HRESULT v5; // eax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // r8
  char v7; // di
  HRESULT v9; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-50h] BYREF
  LPWSTR ppwsz; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v14[1] = -2LL;
  LODWORD(ppwsz) = 0;
  v4 = 0;
  v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  if ( a2 )
    (*(void (__fastcall **)(const unsigned __int16 *, const unsigned __int16 *, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(
      a2,
      a2,
      a3);
  string = 0LL;
  v5 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    RaiseException(v5, 1u, 0, 0LL);
    JUMPOUT(0x1800BD6E8LL);
  }
  v7 = 1;
  LODWORD(ppwsz) = 1;
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v13, (__int64)string, v6, &v11) < 0
    || !(_BYTE)v11 )
  {
    v7 = 0;
  }
  if ( v7 )
  {
    v9 = SHStrDupW(psz, &ppwsz);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v14[0] = ppwsz;
      v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_26b87ca59359fe239e5114e68fb2ebc3___(retaddr, v14);
      v4 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32,
          (unsigned int)"internal\\onecoreuapshell\\private\\inc\\appactivation_propertyset.h",
          (const char *)(unsigned int)v10,
          v11);
        CoTaskMemFree(ppwsz);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\appactivation_propertyset.h",
        (const char *)(unsigned int)v9,
        v11);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v4;
}
