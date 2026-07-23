/*
 * XREFs of PopPepGetComponentPreferedIdleState @ 0x140100044
 * Callers:
 *     PopPepUpdateIdleState @ 0x1400FFFE4 (PopPepUpdateIdleState.c)
 * Callees:
 *     PopPepArmIdleTimer @ 0x1402DCA04 (PopPepArmIdleTimer.c)
 */

__int64 __fastcall PopPepGetComponentPreferedIdleState(_DWORD *a1)
{
  __int64 v1; // r9
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  unsigned int *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  bool v11; // cl
  int v12; // eax

  LODWORD(v1) = 0;
  v3 = a1[47] - 1;
  if ( v3 >= a1[41] )
    v3 = a1[41];
  v4 = v3;
  if ( v3 )
  {
    v6 = a1 + 38;
    v7 = 6LL;
    do
    {
      v8 = *v6;
      v9 = *v6++;
      if ( v8 >= v4 )
        v9 = v4;
      v4 = v9;
      v10 = v1 + 1;
      if ( v8 != v3 )
        v10 = v1;
      v1 = v10;
      --v7;
    }
    while ( v7 );
    v11 = 0;
    if ( v10 == 5 )
      v11 = a1[40] < v3;
    v12 = a1[1];
    if ( (v12 & 4) == 0 && v11 )
    {
      a1[1] = v12 | 4;
      if ( _InterlockedIncrement(&PopPepPoweredIdleComponentCount) == 1 )
        PopPepArmIdleTimer(0LL, a1, v12 & 4, v1);
    }
    else if ( (v12 & 4) != 0 && !v11 )
    {
      a1[1] = v12 & 0xFFFFFFFB;
      _InterlockedDecrement(&PopPepPoweredIdleComponentCount);
    }
  }
  return v4;
}
