/*
 * XREFs of NtUserUpdatePerUserSystemParameters @ 0x1C0119670
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserUpdatePerUserSystemParameters(unsigned int a1)
{
  __int64 updated; // rbx
  __int64 v3; // rcx
  _QWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v5, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v5[1]);
  v5[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v5[3]) = 32;
  LOBYTE(v5[6]) = -1;
  EnterCrit(0LL, 1LL);
  updated = (int)xxxUpdatePerUserSystemParameters(a1, v5);
  UserSessionSwitchLeaveCrit(v3);
  return updated;
}
