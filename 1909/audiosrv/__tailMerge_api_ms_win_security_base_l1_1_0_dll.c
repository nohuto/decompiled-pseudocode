/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180066073
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x180066067 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x1800667F1 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x180066803 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x180066815 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x180066827 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x180066839 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x18006684B (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x18006685D (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x18006686F (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x180066881 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x180066893 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x1800668A5 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x1800668B7 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x1800668C9 (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x1800668DB (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x1800668ED (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x1800668FF (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x180066911 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x180066923 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x180066935 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180066947 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x180066959 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x18006696B (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x18006697D (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x18006698F (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x180066ABC (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x180066ACE (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180066AE0 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180066AF2 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180066B04 (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180048A90 (__delayLoadHelper2.c)
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
