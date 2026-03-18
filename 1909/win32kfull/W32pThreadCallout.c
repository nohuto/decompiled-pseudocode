/*
 * XREFs of W32pThreadCallout @ 0x1C0123880
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FreeW32Thread @ 0x1C0123510 (FreeW32Thread.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C012397C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     AllocateW32Thread @ 0x1C0123ADC (AllocateW32Thread.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int W32Thread; // ebp
  int v12; // eax

  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
  {
    W32Thread = 0;
    if ( !a2 )
      W32Thread = AllocateW32Thread(a1);
    v12 = GdiThreadCallout(a1, a2);
    v5 = v12;
    if ( a2 )
      goto LABEL_18;
    if ( W32Thread < 0 )
      return (unsigned int)v5;
    if ( v12 >= 0 )
    {
LABEL_18:
      if ( a2 != 1 )
        return (unsigned int)v5;
    }
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v5 = AllocateW32Thread(a1);
    if ( v5 < 0 )
    {
      UserSetLastError(8LL, v4, v6, v7);
      return (unsigned int)v5;
    }
  }
  v5 = DCompositionThreadCallout(a1, a2);
  if ( v5 >= 0 )
  {
    v5 = GdiThreadCallout(a1, a2);
    if ( v5 >= 0 )
    {
      v5 = UserThreadCallout(a1, a2);
      if ( v5 >= 0 )
      {
        v5 = 0;
        if ( !a2 )
          return (unsigned int)v5;
      }
      if ( !a2 )
      {
        if ( v5 >= 0 )
          return (unsigned int)v5;
        GdiThreadCalloutCleanup(a1);
      }
    }
  }
  if ( a2 == 1 || v5 < 0 )
LABEL_12:
    FreeW32Thread(a1, v8, v9);
  return (unsigned int)v5;
}
