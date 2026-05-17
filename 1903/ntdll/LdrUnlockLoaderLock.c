/*
 * XREFs of LdrUnlockLoaderLock @ 0x18007CC60
 * Callers:
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180033520 @ 0x180033520 (sub_180033520.c)
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18007E384 @ 0x18007E384 (sub_18007E384.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx

  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !a2 )
      return v2;
    if ( a2 >= 0x1000000000000000LL )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) == 0 )
      {
        if ( (a1 & 1) != 0 )
          sub_18002D75C(a1, 13, 0);
        else
          sub_18002D75C(a1, 14, 0);
        return v2;
      }
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
    }
    return (unsigned int)-1073741584;
  }
  if ( (a1 & 1) != 0 )
    RtlRaiseStatus(3221225711LL);
  return (unsigned int)-1073741585;
}
