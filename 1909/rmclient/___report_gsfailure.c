/*
 * XREFs of ___report_gsfailure @ 0x1000CE1D
 * Callers:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 * Callees:
 *     ___raise_securityfailure @ 0x1000CDF3 (___raise_securityfailure.c)
 */

void __cdecl __noreturn __report_gsfailure()
{
  int v0; // eax
  int v1; // edx
  int v2; // ecx
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  unsigned int v6; // kr00_4
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]
  char v9; // [esp+32Ch] [ebp+8h] BYREF

  dword_100181C0 = v0;
  dword_100181BC = v2;
  dword_100181B8 = v1;
  dword_100181B4 = v3;
  dword_100181B0 = v5;
  dword_100181AC = v4;
  word_100181D8 = __SS__;
  word_100181CC = __CS__;
  word_100181A8 = __DS__;
  word_100181A4 = __ES__;
  word_100181A0 = __FS__;
  word_1001819C = __GS__;
  v6 = __readeflags();
  dword_100181D0 = v6;
  dword_100181C4 = vars0;
  dword_100181C8 = retaddr;
  dword_100181D4 = (int)&v9;
  dword_10018110 = 65537;
  dword_100180CC = retaddr;
  dword_100180C0 = -1073740791;
  dword_100180C4 = 1;
  dword_100180D0 = 3;
  dword_100180D4[0] = 2;
  dword_100180D4[1] = __security_cookie;
  dword_100180D4[2] = __security_cookie_complement;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
