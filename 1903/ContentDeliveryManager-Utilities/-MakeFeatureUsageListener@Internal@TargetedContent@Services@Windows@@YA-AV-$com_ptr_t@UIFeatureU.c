/*
 * XREFs of ?MakeFeatureUsageListener@Internal@TargetedContent@Services@Windows@@YA?AV?$com_ptr_t@UIFeatureUsageListener@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18006FE14
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006FEF0 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070070 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::MakeFeatureUsageListener(_QWORD *a1)
{
  HRESULT ClassObject; // eax
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *ppv; // [rsp+58h] [rbp+10h] BYREF

  ppv = 0LL;
  ClassObject = CoGetClassObject(
                  &CLSID_FeatureUsageListener,
                  4u,
                  0LL,
                  &GUID_00000001_0000_0000_c000_000000000046,
                  (LPVOID *)&ppv);
  if ( ClassObject < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)ClassObject);
    JUMPOUT(0x18006FEE1LL);
  }
  *a1 = 0LL;
  v3 = ppv;
  v4 = *ppv;
  *a1 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, _QWORD *))(v4 + 24))(
         v3,
         0LL,
         &GUID_32f807c2_30d3_437d_b81e_ca08714107ad,
         a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  if ( ppv )
    (*(void (__fastcall **)(__int64 *))(*ppv + 16))(ppv);
  return a1;
}
