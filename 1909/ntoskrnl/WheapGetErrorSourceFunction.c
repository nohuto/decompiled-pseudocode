/*
 * XREFs of WheapGetErrorSourceFunction @ 0x14018BA58
 * Callers:
 *     WheapCallErrorSourceInitialize @ 0x14018B9C0 (WheapCallErrorSourceInitialize.c)
 *     WheapCallErrorSourceCorrect @ 0x14018BA1C (WheapCallErrorSourceCorrect.c)
 *     WheapReportBootError @ 0x14033F4F8 (WheapReportBootError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14033FD40 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheapFillOutErrorRecord @ 0x14034005C (WheapFillOutErrorRecord.c)
 *     WheapCallErrorSourceReady @ 0x140340AEC (WheapCallErrorSourceReady.c)
 *     WheapCallErrorSourceUninitialize @ 0x140340B3C (WheapCallErrorSourceUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetErrorSourceFunction(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  signed __int32 i; // eax
  int v5; // edx
  __int64 v6; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = 0LL;
  if ( a1 && *(int *)(a1 + 40) < 17 )
  {
    if ( a3 )
    {
LABEL_8:
      if ( a2 )
      {
        v5 = a2 - 1;
        if ( v5 )
        {
          v9 = v5 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 == 2 )
                {
                  v12 = *(int *)(a1 + 40);
                  if ( (_DWORD)v12 == 16 )
                    return *(_QWORD *)(a1 + 156);
                  else
                    return *((_QWORD *)&WheapSourceConfiguration + 8 * v12 + 7);
                }
              }
              else
              {
                v13 = *(int *)(a1 + 40);
                if ( (_DWORD)v13 == 16 )
                  return *(_QWORD *)(a1 + 148);
                else
                  return *((_QWORD *)&WheapSourceConfiguration + 8 * v13 + 6);
              }
            }
            else
            {
              return *((_QWORD *)&WheapSourceConfiguration + 8 * (__int64)*(int *)(a1 + 40) + 5);
            }
          }
          else
          {
            return *((_QWORD *)&WheapSourceConfiguration + 8 * (__int64)*(int *)(a1 + 40) + 4);
          }
        }
        else
        {
          v6 = *(int *)(a1 + 40);
          if ( (_DWORD)v6 == 16 )
            return *(_QWORD *)(a1 + 140);
          else
            return *((_QWORD *)&WheapSourceConfiguration + 8 * v6 + 3);
        }
      }
      else
      {
        v8 = *(int *)(a1 + 40);
        if ( (_DWORD)v8 == 16 )
          return *(_QWORD *)(a1 + 164);
        else
          return *((_QWORD *)&WheapSourceConfiguration + 8 * v8 + 2);
      }
    }
    else if ( *(_DWORD *)(a1 + 108) != 3 )
    {
      for ( i = *(_DWORD *)(a1 + 92); i >= 0; i = *(_DWORD *)(a1 + 92) )
      {
        if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), i + 1, i) )
          goto LABEL_8;
      }
    }
  }
  return v3;
}
