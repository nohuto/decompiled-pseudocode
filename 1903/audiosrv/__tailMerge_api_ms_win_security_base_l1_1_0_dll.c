/*
 * XREFs of __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x180065083
 * Callers:
 *     __imp_load_GetTokenInformation @ 0x180065077 (__imp_load_GetTokenInformation.c)
 *     __imp_load_GetSidLengthRequired @ 0x180065801 (__imp_load_GetSidLengthRequired.c)
 *     __imp_load_InitializeSid @ 0x180065813 (__imp_load_InitializeSid.c)
 *     __imp_load_GetSidSubAuthority @ 0x180065825 (__imp_load_GetSidSubAuthority.c)
 *     __imp_load_CopySid @ 0x180065837 (__imp_load_CopySid.c)
 *     __imp_load_GetLengthSid @ 0x180065849 (__imp_load_GetLengthSid.c)
 *     __imp_load_IsValidSid @ 0x18006585B (__imp_load_IsValidSid.c)
 *     __imp_load_EqualSid @ 0x18006586D (__imp_load_EqualSid.c)
 *     __imp_load_InitializeAcl @ 0x18006587F (__imp_load_InitializeAcl.c)
 *     __imp_load_AddAce @ 0x180065891 (__imp_load_AddAce.c)
 *     __imp_load_GetAclInformation @ 0x1800658A3 (__imp_load_GetAclInformation.c)
 *     __imp_load_GetAce @ 0x1800658B5 (__imp_load_GetAce.c)
 *     __imp_load_GetSecurityDescriptorOwner @ 0x1800658C7 (__imp_load_GetSecurityDescriptorOwner.c)
 *     __imp_load_GetSecurityDescriptorGroup @ 0x1800658D9 (__imp_load_GetSecurityDescriptorGroup.c)
 *     __imp_load_GetSecurityDescriptorDacl @ 0x1800658EB (__imp_load_GetSecurityDescriptorDacl.c)
 *     __imp_load_SetSecurityDescriptorDacl @ 0x1800658FD (__imp_load_SetSecurityDescriptorDacl.c)
 *     __imp_load_GetSecurityDescriptorSacl @ 0x18006590F (__imp_load_GetSecurityDescriptorSacl.c)
 *     __imp_load_SetSecurityDescriptorSacl @ 0x180065921 (__imp_load_SetSecurityDescriptorSacl.c)
 *     __imp_load_MakeSelfRelativeSD @ 0x180065933 (__imp_load_MakeSelfRelativeSD.c)
 *     __imp_load_GetSecurityDescriptorLength @ 0x180065945 (__imp_load_GetSecurityDescriptorLength.c)
 *     __imp_load_GetSecurityDescriptorControl @ 0x180065957 (__imp_load_GetSecurityDescriptorControl.c)
 *     __imp_load_MakeAbsoluteSD @ 0x180065969 (__imp_load_MakeAbsoluteSD.c)
 *     __imp_load_InitializeSecurityDescriptor @ 0x18006597B (__imp_load_InitializeSecurityDescriptor.c)
 *     __imp_load_AddAccessAllowedAceEx @ 0x18006598D (__imp_load_AddAccessAllowedAceEx.c)
 *     __imp_load_SetKernelObjectSecurity @ 0x18006599F (__imp_load_SetKernelObjectSecurity.c)
 *     __imp_load_CheckTokenMembership @ 0x180065ACC (__imp_load_CheckTokenMembership.c)
 *     __imp_load_AllocateAndInitializeSid @ 0x180065ADE (__imp_load_AllocateAndInitializeSid.c)
 *     __imp_load_AddAccessAllowedAce @ 0x180065AF0 (__imp_load_AddAccessAllowedAce.c)
 *     __imp_load_FreeSid @ 0x180065B02 (__imp_load_FreeSid.c)
 *     __imp_load_GetKernelObjectSecurity @ 0x180065B14 (__imp_load_GetKernelObjectSecurity.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800445D0 (__delayLoadHelper2.c)
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
