/*
 * XREFs of ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C0008274
 * Callers:
 *     ProcessSuspendedEventMessage @ 0x1C0124B64 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1C0124C00 (ProcessSuspendedPostMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C0125E54 (ProcessSuspendedSendMessage.c)
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
  __int64 v8; // rcx
  bool v9; // zf

  v6 = a1 - 2;
  if ( !v6 )
  {
    if ( a3 != *a5 )
      return 1LL;
    v9 = a4 == *a6;
    return !v9;
  }
  if ( v6 != 1 )
  {
    *a5 = a3;
LABEL_4:
    *a6 = a4;
    return 0LL;
  }
  v8 = *a5;
  if ( a2 == 536 )
  {
    if ( v8 != a3 || (a3 & 0x8000) != 0 )
      return 1LL;
    v9 = *a6 == a4;
    return !v9;
  }
  if ( !v8 && !a3 )
  {
    *a5 = 0LL;
    goto LABEL_4;
  }
  return 1LL;
}
