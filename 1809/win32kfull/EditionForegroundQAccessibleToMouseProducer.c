/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1C010E250
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C0125480 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 */

__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx

  if ( !gpqForeground )
    return 1LL;
  v4 = *(_QWORD *)(gpqForeground + 428LL);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)a1 > (unsigned int)v4 )
    return 1LL;
  if ( (_DWORD)a1 == (_DWORD)v4 )
  {
    v5 = HIDWORD(v4);
    v6 = HIDWORD(a1);
    if ( (_DWORD)v6 == (_DWORD)v5 || (_DWORD)v5 == -1 || (_DWORD)v6 == -1 )
      return 1LL;
  }
  if ( a2 )
    MSGLUA_GPQFOREGROUND();
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
