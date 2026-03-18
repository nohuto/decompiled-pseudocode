/*
 * XREFs of W32pThreadCallout @ 0x1C001E640
 * Callers:
 *     <none>
 * Callees:
 *     AllocateW32Thread @ 0x1C001E730 (AllocateW32Thread.c)
 *     DereferenceW32Thread @ 0x1C001F180 (DereferenceW32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  int W32Thread; // esi
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v8; // rax

  v2 = 0LL;
  if ( a2 || (W32Thread = AllocateW32Thread(), W32Thread >= 0) )
  {
    W32Thread = DCompositionThreadCallout(a1, a2);
    if ( W32Thread >= 0 )
    {
      W32Thread = GdiThreadCallout(a1, a2);
      if ( W32Thread >= 0 )
      {
        W32Thread = UserThreadCallout(a1, a2);
        if ( W32Thread < 0 )
        {
          if ( !a2 )
            GdiThreadCalloutCleanup(a1);
        }
        else
        {
          W32Thread = 0;
          if ( !a2 )
            return (unsigned int)W32Thread;
        }
      }
    }
    if ( a2 == 1 || W32Thread < 0 )
    {
      v6 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
        if ( ThreadWin32Thread )
          v6 = *ThreadWin32Thread;
      }
      vMarkFreeW32Thread(v6);
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v8 = (__int64 *)PsGetThreadWin32Thread(a1);
        if ( v8 )
          v2 = *v8;
      }
      DereferenceW32Thread(v2);
    }
  }
  else
  {
    UserSetLastError(a2 + 8);
  }
  return (unsigned int)W32Thread;
}
