/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x180224098
 * Callers:
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802247DC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180025C00 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  HSTRING_HEADER *v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rbx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  __int64 (__fastcall *v18)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, __int64 *); // rdi
  int v21; // eax
  int v23; // [rsp+28h] [rbp-39h] BYREF
  __int64 v24; // [rsp+30h] [rbp-31h] BYREF
  __int64 v25; // [rsp+38h] [rbp-29h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-9h] BYREF
  __int64 (__fastcall ***v30[2])(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-1h] BYREF
  HSTRING_HEADER v31; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v30[1] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))-2LL;
  *a4 = 0;
  v30[0] = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v30);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&off_180451640);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
         v30,
         (__int64)v7[1].Reserved.Reserved1,
         v8,
         &v29);
  if ( v9 >= 0 )
  {
    v10 = v29;
    v28 = 0LL;
    v11 = *((_QWORD *)this + 28);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    v9 = v12(v11, v10, &v28);
    if ( v9 >= 0 )
    {
      v27 = 0LL;
      v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v28;
      v14 = **v28;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v9 = v14(v13, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v27);
      if ( v9 >= 0 )
      {
        v26 = 0LL;
        v15 = v27;
        v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        v17 = v16(v15, &v26);
        v9 = v17;
        if ( v17 >= 0 )
        {
          v25 = 0LL;
          v18 = **a2;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
          v9 = v18((struct IApplicationView *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v25);
          if ( v9 >= 0 )
          {
            v24 = 0LL;
            v19 = v25;
            v20 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            v21 = v20(v19, &v24);
            v9 = v21;
            if ( v21 >= 0 )
            {
              v23 = 0;
              if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v24 + 104LL))(v24, v26, &v23) >= 0 && v23 )
                *a4 = 1;
              v9 = 0;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x648,
                (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
                (const char *)(unsigned int)v21);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x642,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v30);
  return (unsigned int)v9;
}
