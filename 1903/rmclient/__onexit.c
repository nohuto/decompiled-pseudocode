/*
 * XREFs of __onexit @ 0x1000CA90
 * Callers:
 *     _atexit @ 0x1000CB33 (_atexit.c)
 * Callees:
 *     __onexit @ 0x1000CA90 (__onexit.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     __lock @ 0x1000CF80 (__lock.c)
 *     __unlock @ 0x1000CF86 (__unlock.c)
 *     ___dllonexit @ 0x1000CF8C (___dllonexit.c)
 */

_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int (__cdecl *v2)(); // [esp+10h] [ebp-24h]
  int v3; // [esp+14h] [ebp-20h] BYREF
  void *v4; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v4 = __onexitbegin;
  if ( __onexitbegin == (void *)-1 )
    return __onexit(Func);
  _lock(8);
  ms_exc.registration.TryLevel = 0;
  v4 = __onexitbegin;
  v3 = __onexitend;
  v2 = (int (__cdecl *)())__dllonexit(Func, &v4, &v3);
  __onexitbegin = v4;
  __onexitend = v3;
  ms_exc.registration.TryLevel = -2;
  _unlock(8);
  return v2;
}
