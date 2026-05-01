/*
 * XREFs of Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___ @ 0x180063510
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1803ADA68 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f6b9fe64c6e760c2172b0542f8248dd5___ @ 0x180063840 (Windows--Internal--ComTaskPool--QueueTask__lambda_f6b9fe64c6e760c2172b0542f8248dd5___.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___(
        APTTYPE a1,
        int a2,
        struct IInspectable **a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  APTTYPE pAptType; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+70h] [rbp+30h] BYREF
  char v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  CoGetApartmentType(&pAptType, &pAptQualifier);
  v13 = 0;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v15);
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v13;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))Windows::Internal::ComTaskPool::QueueTask__lambda_f6b9fe64c6e760c2172b0542f8248dd5___)(
         v7,
         v6,
         v8,
         v11);
  if ( v9 >= 0 )
  {
    v9 = v13;
    if ( v13 >= 0 )
      v9 = Microsoft::WRL::WeakRef::InternalResolve(
             (Microsoft::WRL::WeakRef *)&v15,
             &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
             a3);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v15);
  return (unsigned int)v9;
}
