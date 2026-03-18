/*
 * XREFs of GreCreateFastMutex @ 0x1C0090940
 * Callers:
 *     HmgCreate @ 0x1C008E07C (HmgCreate.c)
 *     EngCreateFastMutex @ 0x1C012E230 (EngCreateFastMutex.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
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
