/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180152F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180146510 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x1801526E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     ?Add@?$GitEventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1801529EC (-Add@-$GitEventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x180152F4C (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 */

__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, __int64 a2, struct IUnknown **a3)
{
  int v5; // esi
  bool CanSendDismissedEvent; // bl
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int64 *v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int64 *v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v5 = Windows::Internal::GitEventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         (__int64)this + 72,
         a2,
         a3);
  if ( v5 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    CanSendDismissedEvent = CSplashScreen::_CanSendDismissedEvent(this);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( CanSendDismissedEvent )
    {
      v18 = 0LL;
      v17 = 2;
      v13 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
             &v18,
             (__int64)&GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             &v13,
             &v17);
      if ( v5 >= 0 )
      {
        v14 = (volatile signed __int64 *)this;
        if ( this )
        {
          v7 = *((_QWORD *)this + 8);
          while ( v7 >= 0 )
          {
            v8 = v7;
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v7 + 1, v7);
            if ( v8 == v7 )
              goto LABEL_10;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
        }
LABEL_10:
        v15 = v18;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
        v16 = (volatile signed __int64 *)this;
        if ( this )
        {
          v10 = *((_QWORD *)this + 8);
          while ( 1 )
          {
            v9 = (unsigned __int64)v10 >> 63;
            if ( v10 < 0 )
              break;
            v9 = v10 + 1;
            v11 = v10;
            v10 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v10 + 1, v10);
            if ( v11 == v10 )
              goto LABEL_16;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
        }
LABEL_16:
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v9, &v15);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v14);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
  }
  return (unsigned int)v5;
}
