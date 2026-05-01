/*
 * XREFs of ?HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042A3C
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004206C (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampOplockWatchStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = RtlSubscribeWnfStateChangeNotification(
               (char *)a1 + 8 * v2 + 312,
               HamOplockWatchStateNames[v2],
               0LL,
               HampOplockCallback,
               a1,
               0LL,
               0,
               0);
    if ( (int)result < 0 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 4 )
      return 0LL;
  }
  return result;
}
