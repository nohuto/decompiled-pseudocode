/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____ @ 0x18008F380
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb24fb____::_1_::dtor$2 @ 0x18008EE33 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_d501edc7b04cbeac4930c1b70efb_ea_18008EE33.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc____::_1_::dtor$2 @ 0x1800E88AA (_ShellPositionerHelpers--PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860310e____::_1_::dtor$2 @ 0x18014C0D4 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860_ea_18014C0D4.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8b070____::_1_::dtor$2 @ 0x180172E0D (_ShellPositionerHelpers--PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8_ea_180172E0D.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_15697834fe23e2b75c1d0ea3471583fc____::_1_::dtor$2 @ 0x180172F75 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_15697834fe23e2b75c1d0ea34715_ea_180172F75.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454____::_1_::dtor$2 @ 0x18017BB55 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffa_ea_18017BB55.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b____::_1_::dtor$2 @ 0x18024588C (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666db_ea_18024588C.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb7164930____::_1_::dtor$2 @ 0x1802459F8 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb716_ea_1802459F8.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbddc04____::_1_::dtor$2 @ 0x180245B64 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbd_ea_180245B64.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e710dca____::_1_::dtor$2 @ 0x180245CD0 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e71_ea_180245CD0.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c____::_1_::dtor$2 @ 0x180274D18 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09_ea_180274D18.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9ed0fe26fa1f6403a1b3d30e97a670dd____::_1_::dtor$2 @ 0x180274E84 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9ed0fe26fa1f6403a1b3d30e97a6_ea_180274E84.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd____::_1_::dtor$2 @ 0x1803B0F6C (_ShellPositionerHelpers--PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecd_ea_1803B0F6C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800604C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
