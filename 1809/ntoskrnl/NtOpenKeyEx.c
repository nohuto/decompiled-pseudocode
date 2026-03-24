/*
 * XREFs of NtOpenKeyEx @ 0x1405E0E50
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1405E0EA0 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(int a1)
{
  int v2; // r9d
  int v3; // r10d
  int v4; // r11d
  unsigned int v5; // r8d
  PVOID v7[3]; // [rsp+30h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v7);
  CmOpenKey(a1, v4, v3, v2, 0LL);
  CmCleanupThreadInfo(v7);
  return v5;
}
