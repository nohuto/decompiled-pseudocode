/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C010989C
 * Callers:
 *     ProcessSuspendedPostMessage @ 0x1C01096A8 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedEventMessage @ 0x1C0109770 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C010F494 (ProcessSuspendedSendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ProcessComplexCoalescence(
        int a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  int v6; // ecx
  bool v7; // zf
  __int64 v9; // rcx

  v6 = a1 - 2;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v9 = *a5;
      if ( a2 == 536 )
      {
        if ( v9 != a3 || (a3 & 0x8000) != 0 )
          return 1LL;
        v7 = *a6 == a4;
        return !v7;
      }
      if ( v9 || a3 )
        return 1LL;
      *a5 = 0LL;
    }
    else
    {
      *a5 = a3;
    }
    *a6 = a4;
    return 0LL;
  }
  if ( a3 != *a5 )
    return 1LL;
  v7 = a4 == *a6;
  return !v7;
}
