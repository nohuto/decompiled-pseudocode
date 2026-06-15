/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800632FC
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18006324C (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800C58A0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (**(__int64 (__fastcall ***)(CPolicyConfig *, GUID *, struct IPolicyConfig **))g_PolicyConfig)(
         g_PolicyConfig,
         &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 5705, v1);
  return v2;
}
