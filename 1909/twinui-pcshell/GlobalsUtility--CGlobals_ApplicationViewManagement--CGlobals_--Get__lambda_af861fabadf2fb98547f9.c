/*
 * XREFs of GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___ @ 0x1800901E8
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180073BB0 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ??$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewManagement@@QEAAJPEBGAEBUVirtualDesktopPersistedData@CApplicationViewBase@@@Z @ 0x18003DD0C (--$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewM.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 */

__int64 *__fastcall GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_af861fabadf2fb98547f901f5c924f13___(
        __int64 a1)
{
  __int64 *result; // rax
  __int64 v3; // rbx
  const unsigned __int16 *v4; // rdx
  volatile int *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  result = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v7);
  v3 = v7;
  if ( v7 )
  {
    v4 = **(const unsigned __int16 ***)a1;
    v6 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
    ApplicationViewManagement::CPersistence::PersistData<CApplicationViewBase::VirtualDesktopPersistedData>(
      (ApplicationViewManagement::CPersistence *)(v7 + 40),
      v4,
      &v6);
    return (__int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
                        v3,
                        v5);
  }
  return result;
}
