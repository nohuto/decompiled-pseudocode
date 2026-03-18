/*
 * XREFs of W32pThreadCallout @ 0x1C00F8FE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     AllocateW32Thread @ 0x1C00F908C (AllocateW32Thread.c)
 *     FreeW32Thread @ 0x1C00F9158 (FreeW32Thread.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int W32Thread; // ebx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( !a2 )
  {
    W32Thread = AllocateW32Thread();
    if ( W32Thread < 0 )
    {
      UserSetLastError(8LL, v4, v6, v7);
      return (unsigned int)W32Thread;
    }
  }
  W32Thread = DCompositionThreadCallout(a1, a2);
  if ( W32Thread >= 0 )
  {
    W32Thread = GdiThreadCallout(a1, a2);
    if ( W32Thread >= 0 )
    {
      W32Thread = UserThreadCallout(a1, a2);
      if ( W32Thread >= 0 )
      {
        W32Thread = 0;
        if ( !a2 )
          return (unsigned int)W32Thread;
      }
      if ( !a2 )
      {
        if ( W32Thread >= 0 )
          return (unsigned int)W32Thread;
        GdiThreadCalloutCleanup(a1);
      }
    }
  }
  if ( a2 == 1 || W32Thread < 0 )
    FreeW32Thread(a1);
  return (unsigned int)W32Thread;
}
