/*
 * XREFs of BaseTrayFlyoutExperienceManager_CreateInstanceWithTest @ 0x180093700
 * Callers:
 *     ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180092624 (-RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@AEAPEBGAEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@AEAPEBG2@Z @ 0x18008EB1C (--$MakeAndInitialize@VCBaseTrayFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 */

__int64 __fastcall BaseTrayFlyoutExperienceManager_CreateInstanceWithTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  const wchar_t *v8; // [rsp+20h] [rbp-10h] BYREF
  const wchar_t *v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF

  v11 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  v8 = L"StartExperienceHostVS_ccv6fwk6gx0xp!App";
  v9 = L"Windows.Internal.ShellExperience.MeetNow";
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CBaseTrayFlyoutExperienceManager,IInspectable,IServiceProvider * &,unsigned short const * &,unsigned short const * &>(
         &v12,
         &v11,
         &v9,
         &v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v6 = 0;
    *a4 = v12;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AE,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v6;
}
