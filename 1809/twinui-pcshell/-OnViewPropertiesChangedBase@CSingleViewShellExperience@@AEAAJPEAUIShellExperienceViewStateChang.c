/*
 * XREFs of ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180064630
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800423F0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x180017774 (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     ?GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z @ 0x1800648F8 (-GetBoolean@Accessor@RoVariant@@QEBAJPEAE@Z.c)
 *     ?GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z @ 0x18006493C (-GetSize@Accessor@RoVariant@@QEBAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CSingleViewShellExperience::OnViewPropertiesChangedBase(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  RoVariant *v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  char v10; // bl
  int Size; // eax
  __int64 v12; // rbx
  int v13; // eax
  char v14; // bl
  int Boolean; // eax
  int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rdx
  RoVariant *v21; // [rsp+20h] [rbp-60h] BYREF
  struct IInspectable *v22; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  RoVariant *v24; // [rsp+38h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-40h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v26 = -2LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *, RoVariant **))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    v19 = (unsigned int)v4;
    v20 = 543LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    return v5;
  }
  if ( !v21 )
  {
    v5 = -2147467259;
    v19 = 2147500037LL;
    v20 = 545LL;
    goto LABEL_27;
  }
  v6 = (RoVariant *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v21;
  v21 = v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
         *((_QWORD *)this + 4),
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v23);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    v24 = 0LL;
    v25 = 0;
    *(_QWORD *)((char *)this + 44) = 0LL;
    v8 = v23;
    v21 = (RoVariant *)&v24;
    v22 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"desiredSize", 0xCu, 0xBu);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, v28, &v22);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22D,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9,
        (int)v21);
      v10 = 0;
    }
    else
    {
      v10 = 1;
    }
    v28 = 0LL;
    RoVariant::Attach(v21, v22);
    if ( v10 )
    {
      v21 = v24;
      LODWORD(v22) = v25;
      Size = RoVariant::Accessor::GetSize(
               (RoVariant::Accessor *)&v21,
               (CSingleViewShellExperience *)((char *)this + 44));
      if ( Size < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x22F,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Size,
          (int)v21);
    }
    *((_BYTE *)this + 52) = 0;
    v12 = v23;
    v21 = (RoVariant *)&v24;
    v22 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"fullScreen", 0xBu, 0xAu);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v12 + 48LL))(v12, v28, &v22);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x233,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v13,
        (int)v21);
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    v28 = 0LL;
    RoVariant::Attach(v21, v22);
    if ( v14 )
    {
      v21 = v24;
      LODWORD(v22) = v25;
      Boolean = RoVariant::Accessor::GetBoolean((RoVariant::Accessor *)&v21, (unsigned __int8 *)this + 52);
      if ( Boolean < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x235,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)Boolean,
          (int)v21);
    }
    (*(void (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 16LL))(
      *((_QWORD *)this + 11),
      this);
    if ( !*((_DWORD *)this + 10) && *((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 10) = 1;
      v17 = *((_DWORD *)this + 16);
      v18 = *((_DWORD *)this + 17) & 1 | 2;
      if ( (*((_DWORD *)this + 17) & 2) == 0 )
        v18 = *((_DWORD *)this + 17) & 1;
      if ( (*((_BYTE *)this + 68) & 4) != 0 )
        v18 |= 4u;
      *((_QWORD *)this + 8) = 0LL;
      if ( v17 == 1 )
        CSingleViewShellExperience::ShowViewAsync((__int64)this, v18);
    }
    v5 = 0;
    RoVariant::~RoVariant((RoVariant *)&v24);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v5;
}
