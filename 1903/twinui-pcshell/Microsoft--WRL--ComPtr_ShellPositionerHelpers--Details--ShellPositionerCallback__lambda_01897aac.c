/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____ @ 0x18008C91C
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3a68b375ea49de67176423822fd94ed9____::_1_::dtor$2 @ 0x18008C257 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3a68b375ea49de67176423822fd9_ea_18008C257.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc____::_1_::dtor$2 @ 0x1800C6185 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_07b9f11f8de93b612f17f3c1dda448fc____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860310e____::_1_::dtor$2 @ 0x18012CB94 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_4e85860f665640dc245d482c7860_ea_18012CB94.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8b070____::_1_::dtor$2 @ 0x180153BA1 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_0287d14f7e0736f839859862c6d8_ea_180153BA1.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_15697834fe23e2b75c1d0ea3471583fc____::_1_::dtor$2 @ 0x180153D09 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_15697834fe23e2b75c1d0ea34715_ea_180153D09.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffaf454____::_1_::dtor$2 @ 0x18015C8A5 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9bb15cab0ea2ee67c9bdb8ae1ffa_ea_18015C8A5.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666dbaf4b____::_1_::dtor$2 @ 0x180226200 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9334db2e415983af27a6cf1666db_ea_180226200.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb7164930____::_1_::dtor$2 @ 0x18022636C (_ShellPositionerHelpers--PerformCallbackOnView__lambda_a268cc864b1d4e9bb111a66fb716_ea_18022636C.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbddc04____::_1_::dtor$2 @ 0x1802264D8 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbd_ea_1802264D8.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e710dca____::_1_::dtor$2 @ 0x180226644 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e71_ea_180226644.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09177c____::_1_::dtor$2 @ 0x1802557B8 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_6bddbf0d24291becc987c4f70b09_ea_1802557B8.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_9ed0fe26fa1f6403a1b3d30e97a670dd____::_1_::dtor$2 @ 0x180255924 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_9ed0fe26fa1f6403a1b3d30e97a6_ea_180255924.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecdeabd____::_1_::dtor$2 @ 0x18039163C (_ShellPositionerHelpers--PerformCallbackOnView__lambda_01897aac42b7dc25bdb9079eaecd_ea_18039163C.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080580 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180080580.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_01897aac42b7dc25bdb9079eaecdeabd_____(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
