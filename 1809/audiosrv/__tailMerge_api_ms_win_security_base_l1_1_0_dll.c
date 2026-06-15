/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x1800619C4
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x1800619B8 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x180062142 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x180062154 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x180062166 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x180062178 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x18006218A (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x18006219C (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x1800621AE (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x1800621C0 (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x1800621D2 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x1800621E4 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x1800621F6 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x180062208 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x18006221A (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x18006222C (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x18006223E (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x180062250 (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x180062262 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x180062274 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x180062286 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180062298 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x1800622AA (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x1800622BC (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x1800622CE (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x1800622E0 (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x18006240D (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x18006241F (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180062431 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180062443 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180062455 (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180015460 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_security_base_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_base_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
