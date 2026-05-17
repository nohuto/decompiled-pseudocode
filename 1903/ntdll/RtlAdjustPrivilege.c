/*
 * XREFs of RtlAdjustPrivilege @ 0x180078490
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenThreadToken @ 0x18009CB60 (ZwOpenThreadToken.c)
 *     ZwAdjustPrivilegesToken @ 0x18009CF00 (ZwAdjustPrivilegesToken.c)
 *     ZwOpenProcessToken @ 0x18009EB30 (ZwOpenProcessToken.c)
 */

__int64 __fastcall RtlAdjustPrivilege(unsigned int a1, bool a2, char a3, bool *a4)
{
  __int64 result; // rax
  int v8; // edi
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  char v10[8]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+4Ch] [rbp-24h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14[3]; // [rsp+58h] [rbp-18h] BYREF
  int v15; // [rsp+64h] [rbp-Ch]

  if ( a3 == 1 )
    result = ZwOpenThreadToken(-2LL, 40LL, 0LL, v9);
  else
    result = ZwOpenProcessToken(-1LL, 40LL, v9);
  if ( (int)result >= 0 )
  {
    v9[1] = a1;
    v12 = a1;
    v11 = 1;
    v13 = a2 ? 2 : 0;
    v8 = ZwAdjustPrivilegesToken(v9[0], 0LL, &v11, 16LL, v14, v10);
    ZwClose(v9[0]);
    if ( v8 == 262 )
      v8 = -1073741727;
    if ( v8 >= 0 )
    {
      if ( v14[0] )
        *a4 = (v15 & 2) != 0;
      else
        *a4 = a2;
    }
    return (unsigned int)v8;
  }
  return result;
}
