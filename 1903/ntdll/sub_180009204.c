/*
 * XREFs of sub_180009204 @ 0x180009204
 * Callers:
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     sub_1800EDA08 @ 0x1800EDA08 (sub_1800EDA08.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F6E70 @ 0x1800F6E70 (sub_1800F6E70.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCD80 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x18000BCD0 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x180029AC0 (RtlOpenCurrentUser.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 *     sub_180115F88 @ 0x180115F88 (sub_180115F88.c)
 */

__int64 __fastcall sub_180009204(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a3 )
    return 3221225485LL;
  v5 = dword_180166084;
  if ( !dword_180166084 )
  {
    if ( (unsigned __int8)RtlIsMultiSessionSku() )
      v5 = 1;
    else
      v5 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_180166084 = v5;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return RtlOpenCurrentUser(a1, a3);
  v8 = v6 - 1;
  if ( !v8 )
    return sub_180115F88(a1, a3);
  if ( v8 == 1 )
    return sub_180115D48(a1, a2, a3, &v9);
  return 3221225701LL;
}
