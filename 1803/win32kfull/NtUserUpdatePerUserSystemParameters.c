/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C0050960
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v8[1]);
  v8[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v8[3]) = 32;
  LOBYTE(v8[6]) = -1;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, v8);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return updated;
}
