/*
 * XREFs of PopIntSteerSetMode @ 0x140193F30
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmCheckCustomRun @ 0x14015B6D0 (PpmCheckCustomRun.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 */

__int64 __fastcall PopIntSteerSetMode(__int64 a1, int *a2, int a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( a3 != 4 )
    return 3221225485LL;
  if ( *a2 == 4 )
  {
    v3 = 1;
  }
  else
  {
    PpmIntSteerMode = *a2;
    v3 = 0;
  }
  PpmIntSteerDisabled = v3;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PpmCheckReInit();
  PpmCheckCustomRun(4u, v4, v5);
  return 0LL;
}
