/*
 * XREFs of CmpInitializeFreezeThaw @ 0x140764DB8
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeFreezeThaw()
{
  __int64 *result; // rax

  CmpFreezeListLock = 0LL;
  result = &CmpFreezeThawWaitListHead;
  qword_140438E68 = (__int64)&CmpFreezeThawWaitListHead;
  CmpFreezeThawWaitListHead = (__int64)&CmpFreezeThawWaitListHead;
  if ( (unsigned int)CmFreezeThawTimeoutInSeconds > 0x384 )
    CmFreezeThawTimeoutInSeconds = 60;
  return result;
}
