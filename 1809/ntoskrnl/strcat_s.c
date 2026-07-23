/*
 * XREFs of strcat_s @ 0x14019B860
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcat_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  char *v3; // r9
  signed __int64 v4; // r9
  char v5; // al
  errno_t v6; // ebx

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
      goto LABEL_14;
    v3 = a1;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( SizeInBytes )
    {
      v4 = v3 - Src;
      do
      {
        v5 = *Src;
        Src[v4] = *Src;
        ++Src;
        if ( !v5 )
          break;
        --SizeInBytes;
      }
      while ( SizeInBytes );
      if ( SizeInBytes )
        return 0;
      v6 = 34;
    }
    else
    {
LABEL_14:
      v6 = 22;
    }
    *a1 = 0;
    xHalTimerWatchdogStop();
    return v6;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
