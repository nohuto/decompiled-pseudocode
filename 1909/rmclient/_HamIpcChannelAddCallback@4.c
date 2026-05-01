/*
 * XREFs of _HamIpcChannelAddCallback@4 @ 0x100072A0
 * Callers:
 *     _HamCreateExtendedExecution@20 @ 0x10007D20 (_HamCreateExtendedExecution@20.c)
 *     _HamCreateActivityForProcess@20 @ 0x1000B880 (_HamCreateActivityForProcess@20.c)
 *     _RmpClientRegisterActivityHostCallbacks@24 @ 0x1001191D (_RmpClientRegisterActivityHostCallbacks@24.c)
 * Callees:
 *     _HampIpcChannelObjectCompareObjectsForTree@8 @ 0x1000AFE0 (_HampIpcChannelObjectCompareObjectsForTree@8.c)
 */

int __thiscall HamIpcChannelAddCallback(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  int v4; // ebx
  unsigned int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v7 = this[5];
  RtlAcquireSRWLockExclusive(v7 + 4);
  *(_DWORD *)(v7 + 8) = GetCurrentThreadId();
  v2 = this[5] + 16;
  v8 = v2;
  v3 = *(_DWORD *)v2;
  if ( (*(_DWORD *)(this[5] + 20) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_DWORD *)(this[5] + 20) & 1;
  LOBYTE(v9) = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( (int)HampIpcChannelObjectCompareObjectsForTree(this, v3) < 0 )
      {
        v5 = *(_DWORD *)v3;
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_15;
          v5 ^= v3;
        }
        if ( !v5 )
        {
LABEL_15:
          LOBYTE(v9) = 0;
          break;
        }
      }
      else
      {
        v5 = *(_DWORD *)(v3 + 4);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_16;
          v5 ^= v3;
        }
        if ( !v5 )
        {
LABEL_16:
          LOBYTE(v9) = 1;
          break;
        }
      }
      v3 = v5;
    }
  }
  RtlRbInsertNodeEx(v8, v3, v9, this);
  *(_DWORD *)(v7 + 8) = 0;
  return RtlReleaseSRWLockExclusive(v7 + 4);
}
