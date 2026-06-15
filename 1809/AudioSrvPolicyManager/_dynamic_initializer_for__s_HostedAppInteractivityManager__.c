/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x180001450
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180010974 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_18004FD10);
  qword_18004FD38 = 0LL;
  dword_18004FD60 = 10;
  xmmword_18004FD40 = 0LL;
  xmmword_18004FD50 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
