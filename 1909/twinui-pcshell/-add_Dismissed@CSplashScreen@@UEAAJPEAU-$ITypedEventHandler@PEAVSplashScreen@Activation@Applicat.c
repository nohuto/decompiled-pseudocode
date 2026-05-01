/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180172200
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180014CFC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1801658D0 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180171900 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x180171A00 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--_lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ?Add@?$GitEventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180171C7C (-Add@-$GitEventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x1801721DC (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 */

__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, __int64 a2, struct IUnknown **a3)
{
  int v5; // esi
  bool CanSendDismissedEvent; // bl
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 *v10; // rax
  __int64 v11; // rcx
  CSplashScreen *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v5 = Windows::Internal::GitEventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         (_QWORD *)this + 9,
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
      v14 = a2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
             &v18,
             (__int64)&GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             &v14,
             &v17);
      if ( v5 >= 0 )
      {
        v13 = this;
        if ( this )
        {
          v8 = *((_QWORD *)this + 8);
          while ( v8 >= 0 )
          {
            if ( (_DWORD)v8 != 0x7FFFFFFF )
            {
              v9 = v8;
              v8 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v8 + 1, v8);
              if ( v9 != v8 )
                continue;
            }
            goto LABEL_11;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v8 + 16),
            v7);
        }
LABEL_11:
        v10 = lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_(
                &v15,
                &v18,
                (__int64 *)&v13);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v11, v10);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((__int64 *)&v13);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    }
  }
  return (unsigned int)v5;
}
