/*
 * XREFs of PopAdjustHiberFile @ 0x140727268
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 *     PopCalculateHiberFileSize @ 0x1407466F4 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopAdjustHiberFile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  PopCalculateHiberFileSize(&v3, &v2);
  result = PopResizeHiberFile(v3, &v4);
  if ( (int)result >= 0 )
    byte_140443C16 = v2;
  return result;
}
