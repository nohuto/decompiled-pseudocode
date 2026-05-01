/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016D4EC
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016E4F0 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x18016CEA4 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x18016DAFC (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18016DB48 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z @ 0x18016DCDC (-GetPoint@Accessor@RoVariant@@QEBAJPEAUPoint@Foundation@Windows@@@Z.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x1803B0CEC (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  PVOID Reserved1; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int Point; // eax
  __int64 v13; // rbx
  PVOID v14; // rdx
  int Int32; // eax
  int v16; // r15d
  __int64 v17; // rbx
  PVOID v18; // rdx
  int v19; // eax
  int v20; // r14d
  int MonitorInformation; // eax
  struct tagRECT v22; // xmm6
  int v23; // eax
  int v24; // eax
  int *v26; // [rsp+28h] [rbp-89h]
  struct tagRECT v27; // [rsp+48h] [rbp-69h] BYREF
  int v28; // [rsp+58h] [rbp-59h] BYREF
  RoVariant *v29; // [rsp+60h] [rbp-51h] BYREF
  struct IInspectable *v30; // [rsp+68h] [rbp-49h] BYREF
  __int64 v31; // [rsp+70h] [rbp-41h] BYREF
  struct tagPOINT v32; // [rsp+78h] [rbp-39h] BYREF
  struct IInspectable *v33; // [rsp+80h] [rbp-31h] BYREF
  struct Windows::Foundation::Size *v34[2]; // [rsp+88h] [rbp-29h] BYREF
  HSTRING_HEADER v35; // [rsp+98h] [rbp-19h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-1h]
  struct tagRECT v37; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v34[1] = (struct Windows::Foundation::Size *)-2LL;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v31 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v31);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 669LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_29;
  }
  *(_QWORD *)&v27.left = 0LL;
  v27.right = 0;
  v8 = v31;
  v32 = (struct tagPOINT)&v27;
  v33 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &v35,
                (const WCHAR **)&JumpViewExperienceEvents::Param_Position)[1].Reserved.Reserved1;
  v5 = (*(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, Reserved1, &v33);
  v36 = 0LL;
  RoVariant::Attach(*(RoVariant **)&v32, v33);
  if ( v5 >= 0 )
  {
    v32 = *(struct tagPOINT *)&v27.left;
    LODWORD(v33) = v27.right;
    Point = RoVariant::Accessor::GetPoint((RoVariant::Accessor *)&v32, (struct Windows::Foundation::Point *)&v29);
    v5 = Point;
    if ( Point < 0 )
    {
      v10 = (unsigned int)Point;
      v11 = 675LL;
      goto LABEL_12;
    }
    v32.x = (int)*(float *)&v29;
    v32.y = (int)*((float *)&v29 + 1);
    RoVariant::~RoVariant((RoVariant *)&v27);
    *(_QWORD *)&v27.left = 0LL;
    v27.right = 0;
    v13 = v31;
    v29 = (RoVariant *)&v27;
    v30 = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v35,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign)[1].Reserved.Reserved1;
    v5 = (*(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v13 + 48LL))(v13, v14, &v30);
    v36 = 0LL;
    RoVariant::Attach(v29, v30);
    if ( v5 < 0 )
    {
      v10 = (unsigned int)v5;
      v11 = 684LL;
      goto LABEL_12;
    }
    v29 = *(RoVariant **)&v27.left;
    LODWORD(v30) = v27.right;
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v29, &v28);
    v5 = Int32;
    if ( Int32 < 0 )
    {
      v10 = (unsigned int)Int32;
      v11 = 687LL;
      goto LABEL_12;
    }
    v16 = v28;
    RoVariant::~RoVariant((RoVariant *)&v27);
    *(_QWORD *)&v27.left = 0LL;
    v27.right = 0;
    v17 = v31;
    v29 = (RoVariant *)&v27;
    v30 = 0LL;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v35,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign)[1].Reserved.Reserved1;
    v5 = (*(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v17 + 48LL))(v17, v18, &v30);
    v36 = 0LL;
    RoVariant::Attach(v29, v30);
    if ( v5 < 0 )
    {
      v10 = (unsigned int)v5;
      v11 = 694LL;
      goto LABEL_12;
    }
    v29 = *(RoVariant **)&v27.left;
    LODWORD(v30) = v27.right;
    v19 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v29, &v28);
    v5 = v19;
    if ( v19 < 0 )
    {
      v10 = (unsigned int)v19;
      v11 = 697LL;
      goto LABEL_12;
    }
    v20 = v28;
    RoVariant::~RoVariant((RoVariant *)&v27);
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v32,
                           &v27,
                           (unsigned int *)v34,
                           (CJumpViewExperienceManager *)((char *)this + 480));
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = (unsigned int)MonitorInformation;
      v7 = 706LL;
      goto LABEL_28;
    }
    v22 = v27;
    *((struct tagRECT *)this + 31) = v27;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)LODWORD(v34[0]),
      (int)&v28,
      (int *)&v29,
      v26);
    if ( v28 <= 0 || (int)v29 <= 0 )
    {
      v5 = -2147024809;
      v6 = 2147942487LL;
      v7 = 716LL;
      goto LABEL_28;
    }
    v27 = v22;
    v23 = CJumpViewExperienceManager::CalcWindowPosition(&v27.left, *(_QWORD *)&v32, v28, (int)v29, v16, v20, &v37);
    v5 = v23;
    if ( v23 < 0 )
    {
      v6 = (unsigned int)v23;
      v7 = 719LL;
      goto LABEL_28;
    }
    v24 = CSingleViewShellExperience::SetPosition(a2, &v37);
    v5 = v24;
    if ( v24 < 0 )
    {
      v6 = (unsigned int)v24;
      v7 = 720LL;
      goto LABEL_28;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    return 0LL;
  }
  v10 = (unsigned int)v5;
  v11 = 672LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)v10);
  RoVariant::~RoVariant((RoVariant *)&v27);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  return (unsigned int)v5;
}
