/*
 * XREFs of _RmpClientInitializeCoreApi@0 @ 0x10006F10
 * Callers:
 *     _DllMain@12 @ 0x1000D02C (_DllMain@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

int __stdcall RmpClientInitializeCoreApi()
{
  int result; // eax
  _BYTE SystemInformation[8]; // [esp+0h] [ebp-30h] BYREF
  int v2; // [esp+8h] [ebp-28h]

  dword_10018404 = (int)&RmpClientConnectionListHead;
  RmpClientConnectionListHead = (int)&RmpClientConnectionListHead;
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x2Cu, 0);
  result = v2;
  RmpPageSize = v2;
  dword_1001840C = 0;
  return result;
}
