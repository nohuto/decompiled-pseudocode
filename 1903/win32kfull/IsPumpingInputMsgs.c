/*
 * XREFs of IsPumpingInputMsgs @ 0x1C00AE918
 * Callers:
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsPumpingInputMsgs(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  __int64 *i; // rdx
  int v7; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( !*(_DWORD *)(v1 + 1168)
    || (unsigned int)(v4 - *(_DWORD *)(v1 + 1168)) <= gdwHungAppTimeout
    || (unsigned int)PsGetThreadFreezeCount(*(_QWORD *)v1) )
  {
    return 1;
  }
  else
  {
    for ( i = *(__int64 **)(v1 + 1152); i; i = (__int64 *)*i )
    {
      v7 = *((_DWORD *)i + 4);
      if ( i[1] == a1 )
      {
        if ( v7 && (unsigned int)(v4 - v7) > gdwHungAppTimeout )
          return v3;
        return 1;
      }
      if ( v7 && (unsigned int)(v4 - v7) > gdwHungAppTimeout )
        return v3;
    }
  }
  return v3;
}
