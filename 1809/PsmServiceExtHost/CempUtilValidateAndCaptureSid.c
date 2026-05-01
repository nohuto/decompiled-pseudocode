/*
 * XREFs of CempUtilValidateAndCaptureSid @ 0x1800710D4
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x1800673EC (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x180067C80 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x180015540 (CempUtilValidateSid.c)
 */

NTSTATUS __fastcall CempUtilValidateAndCaptureSid(PSID SourceSid, unsigned int a2, void *a3)
{
  if ( (int)CempUtilValidateSid(SourceSid, a2) >= 0 )
    return RtlCopySid(0x44u, a3, SourceSid);
  else
    return -1073741585;
}
