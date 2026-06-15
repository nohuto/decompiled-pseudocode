/*
 * XREFs of _dynamic_initializer_for__s_HostedAppInteractivityManager__ @ 0x1800012D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000D674 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int dynamic_initializer_for__s_HostedAppInteractivityManager__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&unk_18004DC20);
  qword_18004DC48 = 0LL;
  dword_18004DC70 = 10;
  xmmword_18004DC50 = 0LL;
  xmmword_18004DC60 = 0LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__);
}
