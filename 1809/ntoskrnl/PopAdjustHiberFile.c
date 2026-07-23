/*
 * XREFs of PopAdjustHiberFile @ 0x1406E0EB0
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x1406E0F88 (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x14071F244 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopAdjustHiberFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  PopCalculateHiberFileSize(&v3, &v2);
  result = PopResizeHiberFile(v3, &v4, 0LL);
  if ( (int)result >= 0 )
    byte_1404192F6 = v2;
  return result;
}
