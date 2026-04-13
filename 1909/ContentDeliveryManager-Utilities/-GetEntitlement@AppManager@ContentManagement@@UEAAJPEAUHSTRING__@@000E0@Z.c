/*
 * XREFs of ?GetEntitlement@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@000E0@Z @ 0x180055770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z @ 0x1800574C4 (-GetEntitlementInternal@AppManager@ContentManagement@@AEAAJPEAUHSTRING__@@000E0@Z.c)
 */

__int64 __fastcall ContentManagement::AppManager::GetEntitlement(
        ContentManagement::AppManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        char a6,
        HSTRING a7)
{
  int EntitlementInternal; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  EntitlementInternal = ContentManagement::AppManager::GetEntitlementInternal(
                          (ContentManagement::AppManager *)((char *)this - 48),
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          a7);
  v8 = EntitlementInternal;
  if ( EntitlementInternal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x33,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
    (const char *)(unsigned int)EntitlementInternal);
  return v8;
}
