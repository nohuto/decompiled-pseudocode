/*
 * XREFs of Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___ @ 0x18006CE14
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18006CC60 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x18040FCF8 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c8b199a0feb076873244f725fed1af37___ @ 0x18006CEC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_c8b199a0feb076873244f725fed1af37___.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_999dc00085dcb4e97168c8687495f75d___(
        APTTYPE a1,
        int a2,
        struct IInspectable **a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  APTTYPE pAptType; // [rsp+70h] [rbp+28h] BYREF
  int v13; // [rsp+78h] [rbp+30h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+80h] [rbp+38h] BYREF
  char v15; // [rsp+88h] [rbp+40h] BYREF

  v13 = a2;
  pAptType = a1;
  *a3 = 0LL;
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) >= 0 && (pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA) )
    v6 = 65;
  else
    v6 = 33;
  v13 = 0;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v15);
  v11[0] = a4;
  v11[1] = &v15;
  v11[2] = &v13;
  v9 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *))Windows::Internal::ComTaskPool::QueueTask__lambda_c8b199a0feb076873244f725fed1af37___)(
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
