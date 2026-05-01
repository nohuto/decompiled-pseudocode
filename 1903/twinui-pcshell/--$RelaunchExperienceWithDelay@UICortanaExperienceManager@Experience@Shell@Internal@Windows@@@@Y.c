/*
 * XREFs of ??$RelaunchExperienceWithDelay@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x1802F11FC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_64453e8f1d1795856607ef361707b1d3___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802F3480 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802F3480.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73cefd8c13ecf1af56d5bf778034e996___ @ 0x1802F1174 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_73cefd8c13ecf1af56d5bf778034e996___.c)
 */

__int64 __fastcall RelaunchExperienceWithDelay<Windows::Internal::Shell::Experience::ICortanaExperienceManager>(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // r8
  int v8; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v12; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+18h] BYREF
  int v14; // [rsp+4Ch] [rbp+1Ch]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF

  v14 = HIDWORD(a2);
  v12 = 0LL;
  v15 = a1;
  v13 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v12,
         (__int64)&GUID_3b810852_511f_4404_89ae_347bc2e8b561,
         &v15,
         &v13);
  if ( v2 < 0 )
  {
    v3 = (unsigned int)v2;
    v4 = 49LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v3);
    return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  v10[0] = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  v10[1] = (__int64)StartWindowTelemetry::CortanaRecoveryDuringShutdown;
  v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73cefd8c13ecf1af56d5bf778034e996___(
         v6,
         v5,
         v7,
         (volatile signed __int32 *)v10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10);
  if ( v8 < 0 )
  {
    v3 = (unsigned int)v8;
    v4 = 71LL;
    goto LABEL_5;
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
}
