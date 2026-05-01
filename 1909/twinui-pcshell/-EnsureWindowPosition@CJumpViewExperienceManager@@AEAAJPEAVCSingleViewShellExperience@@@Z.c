/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BAD7C
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC270 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x1801BA740 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x1801BB53C (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1801BB588 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x1804327F0 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  LONG right; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int Int32; // eax
  int v18; // r15d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v21; // rax
  int v22; // eax
  int v23; // edi
  int MonitorInformation; // eax
  struct tagRECT v25; // xmm6
  int v26; // eax
  int v27; // eax
  int *v29; // [rsp+28h] [rbp-89h]
  struct tagRECT v30; // [rsp+48h] [rbp-69h] BYREF
  int v31; // [rsp+58h] [rbp-59h] BYREF
  RoVariant *v32; // [rsp+60h] [rbp-51h] BYREF
  struct IInspectable *v33; // [rsp+68h] [rbp-49h] BYREF
  __int64 v34; // [rsp+70h] [rbp-41h] BYREF
  struct tagPOINT v35; // [rsp+78h] [rbp-39h]
  struct IInspectable *v36; // [rsp+80h] [rbp-31h] BYREF
  struct Windows::Foundation::Size *v37[2]; // [rsp+88h] [rbp-29h] BYREF
  HSTRING_HEADER v38; // [rsp+98h] [rbp-19h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-1h]
  struct tagRECT v40; // [rsp+B8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v37[1] = (struct Windows::Foundation::Size *)-2LL;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v34 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v34);
  right = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 742LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_35;
  }
  *(_QWORD *)&v30.left = 0LL;
  v30.right = 0;
  v8 = v34;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v34 + 48LL);
  v35 = (struct tagPOINT)&v30;
  v36 = 0LL;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v38,
          (const WCHAR **)&JumpViewExperienceEvents::Param_Position);
  right = v9(v8, v10[1].Reserved.Reserved1, &v36);
  v39 = 0LL;
  RoVariant::Attach(*(RoVariant **)&v35, v36);
  if ( right >= 0 )
  {
    v32 = 0LL;
    if ( v30.right != 7 )
    {
      right = -2147316576;
      if ( v30.right < 0 )
        right = v30.right;
      goto LABEL_11;
    }
    right = (*(__int64 (__fastcall **)(_QWORD, RoVariant **))(**(_QWORD **)&v30.left + 184LL))(
              *(_QWORD *)&v30.left,
              &v32);
    if ( right < 0 )
    {
LABEL_11:
      v11 = 748LL;
      goto LABEL_12;
    }
    v35.x = (int)*(float *)&v32;
    v35.y = (int)*((float *)&v32 + 1);
    RoVariant::~RoVariant((RoVariant *)&v30);
    *(_QWORD *)&v30.left = 0LL;
    v30.right = 0;
    v12 = v34;
    v13 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v34 + 48LL);
    v32 = (RoVariant *)&v30;
    v33 = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v38,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign);
    right = v13(v12, v14[1].Reserved.Reserved1, &v33);
    v39 = 0LL;
    RoVariant::Attach(v32, v33);
    if ( right < 0 )
    {
      v15 = (unsigned int)right;
      v16 = 757LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)v15);
      goto LABEL_18;
    }
    v32 = *(RoVariant **)&v30.left;
    LODWORD(v33) = v30.right;
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v32, &v31);
    right = Int32;
    if ( Int32 < 0 )
    {
      v15 = (unsigned int)Int32;
      v16 = 760LL;
      goto LABEL_17;
    }
    v18 = v31;
    RoVariant::~RoVariant((RoVariant *)&v30);
    *(_QWORD *)&v30.left = 0LL;
    v30.right = 0;
    v19 = v34;
    v20 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v34 + 48LL);
    v32 = (RoVariant *)&v30;
    v33 = 0LL;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v38,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign);
    right = v20(v19, v21[1].Reserved.Reserved1, &v33);
    v39 = 0LL;
    RoVariant::Attach(v32, v33);
    if ( right < 0 )
    {
      v15 = (unsigned int)right;
      v16 = 767LL;
      goto LABEL_17;
    }
    v32 = *(RoVariant **)&v30.left;
    LODWORD(v33) = v30.right;
    v22 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v32, &v31);
    right = v22;
    if ( v22 < 0 )
    {
      v15 = (unsigned int)v22;
      v16 = 770LL;
      goto LABEL_17;
    }
    v23 = v31;
    RoVariant::~RoVariant((RoVariant *)&v30);
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v35,
                           &v30,
                           (unsigned int *)v37,
                           (CJumpViewExperienceManager *)((char *)this + 480));
    right = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = (unsigned int)MonitorInformation;
      v7 = 779LL;
      goto LABEL_34;
    }
    v25 = v30;
    *((struct tagRECT *)this + 31) = v30;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)LODWORD(v37[0]),
      (int)&v31,
      (int *)&v32,
      v29);
    if ( v31 <= 0 || (int)v32 <= 0 )
    {
      right = -2147024809;
      v6 = 2147942487LL;
      v7 = 789LL;
      goto LABEL_34;
    }
    v30 = v25;
    v26 = CJumpViewExperienceManager::CalcWindowPosition(&v30.left, *(_QWORD *)&v35, v31, (int)v32, v18, v23, &v40);
    right = v26;
    if ( v26 < 0 )
    {
      v6 = (unsigned int)v26;
      v7 = 792LL;
      goto LABEL_34;
    }
    v27 = CSingleViewShellExperience::SetPosition(a2, &v40);
    right = v27;
    if ( v27 < 0 )
    {
      v6 = (unsigned int)v27;
      v7 = 793LL;
      goto LABEL_34;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
    return 0LL;
  }
  v11 = 745LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)right);
LABEL_18:
  RoVariant::~RoVariant((RoVariant *)&v30);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  return (unsigned int)right;
}
