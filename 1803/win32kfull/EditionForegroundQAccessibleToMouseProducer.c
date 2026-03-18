/*
 * XREFs of EditionForegroundQAccessibleToMouseProducer @ 0x1C00F5A30
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeInjectedFlushWaiter@@YAXXZ @ 0x1C01058A0 (-WakeInjectedFlushWaiter@@YAXXZ.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 */

__int64 __fastcall EditionForegroundQAccessibleToMouseProducer(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  if ( !gpqForeground )
    return 1LL;
  v5 = *(_QWORD *)(gpqForeground + 428LL);
  if ( !gbEnforceUIPI )
    return 1LL;
  if ( (unsigned int)a1 > (unsigned int)v5 )
    return 1LL;
  if ( (_DWORD)a1 == (_DWORD)v5 )
  {
    v6 = HIDWORD(v5);
    a1 >>= 32;
    if ( (_DWORD)a1 == (_DWORD)v6 || (_DWORD)v6 == -1 || (_DWORD)a1 == -1 )
      return 1LL;
  }
  if ( a2 )
    MSGLUA_GPQFOREGROUND(a1);
  if ( a3 )
    WakeInjectedFlushWaiter();
  return 0LL;
}
