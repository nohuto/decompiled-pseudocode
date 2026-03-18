/*
 * XREFs of GreCreateFastMutex @ 0x1C005FB68
 * Callers:
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C01309E0 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 */

struct _FAST_MUTEX *GreCreateFastMutex()
{
  struct _FAST_MUTEX *v0; // rax
  struct _FAST_MUTEX *v1; // rbx

  v0 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 0x6D736647u);
  v1 = v0;
  if ( v0 )
    KeInitializeGuardedMutex(v0);
  return v1;
}
