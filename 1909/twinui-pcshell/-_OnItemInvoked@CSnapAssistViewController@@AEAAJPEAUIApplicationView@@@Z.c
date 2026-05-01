/*
 * XREFs of ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x18037E5F0
 * Callers:
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18037E2E0 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180014CFC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18014CD44 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x180377C64 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DEEC (Windows--Internal--ComTaskPool--QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___.c)
 */

__int64 __fastcall CSnapAssistViewController::_OnItemInvoked(
        CSnapAssistViewController *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  struct IApplicationView *v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+48h] [rbp-28h] BYREF
  struct IApplicationView *v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *((_BYTE *)this + 168) = 1;
  v16 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v13);
  v17 = *((_QWORD *)this + 17);
  v14 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v13,
         (__int64)&GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         &v17,
         &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
           (_QWORD *)this + 18,
           &v15);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v10 = *(_OWORD *)((char *)this + 152);
        v19 = a2;
        v18 = v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v20, (const struct CMarshaledInterface *)&v13);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___(v11, (__int64)&v18);
        Microsoft::WRL::WeakRef::~WeakRef(&v20);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        if ( v5 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
          goto LABEL_11;
        }
        v7 = (unsigned int)v5;
        v8 = 118LL;
      }
      else
      {
        v7 = (unsigned int)v9;
        v8 = 110LL;
      }
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 109LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::WeakRef::~WeakRef(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v5;
}
