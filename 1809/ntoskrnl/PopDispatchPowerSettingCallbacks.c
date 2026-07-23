/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x14058BAC0
 * Callers:
 *     <none>
 * Callees:
 *     PopIncrementPowerSettingPendingUpdates @ 0x140004CE4 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x140004D6C (PopDecrementPowerSettingPendingUpdates.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141F50 (PopUnregisterPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopCallPowerSettingCallback @ 0x1405B13B8 (PopCallPowerSettingCallback.c)
 */

__int64 PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rbx
  PVOID *v1; // rdi
  __int64 v2; // r14
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbp
  char v6; // cl
  PVOID *v7; // rbx
  char v9; // al
  _QWORD *v10; // rdx
  __int64 v11; // r8
  PVOID *v13; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_14041918C;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = v1 + 2;
      v4 = (__int64)v1[2];
      while ( (_QWORD *)v4 != v3 )
      {
        if ( *(_BYTE *)(v4 + 104) )
        {
          v4 = *(_QWORD *)v4;
        }
        else
        {
          *(_BYTE *)(v4 + 104) = 1;
          if ( *(PVOID *)(v4 + 72) != v1[v2 + 8] )
            PopCallPowerSettingCallback(v4);
          v5 = *(_QWORD *)v4;
          *(_BYTE *)(v4 + 104) = 0;
          if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 32) )
            PopUnregisterPowerSettingCallback((__int64 *)v4);
          v4 = v5;
        }
      }
      v6 = 0;
      if ( (_QWORD *)*v3 == v3 && !*((_DWORD *)v1 + 14) && !*((_DWORD *)v1 + 15) )
      {
        v9 = 1;
        v10 = v1 + 8;
        v11 = 3LL;
        do
        {
          v6 = 0;
          if ( *v10++ == 0LL )
            v6 = v9;
          v9 = v6;
          --v11;
        }
        while ( v11 );
      }
      v7 = (PVOID *)*v1;
      if ( v6 )
      {
        if ( v7[1] != v1 || (v13 = (PVOID *)v1[1], *v13 != v1) )
          __fastfail(3u);
        *v13 = v7;
        v7[1] = v13;
        ExFreePoolWithTag(v1, 0x74655350u);
      }
      if ( v7 == &PopPowerSettings )
        break;
      v1 = v7;
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return PopDecrementPowerSettingPendingUpdates(0);
}
