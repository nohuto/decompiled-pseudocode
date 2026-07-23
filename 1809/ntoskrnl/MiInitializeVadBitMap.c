/*
 * XREFs of MiInitializeVadBitMap @ 0x14067ADA0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiExpandVadBitMap @ 0x14067AE8C (MiExpandVadBitMap.c)
 */

__int64 __fastcall MiInitializeVadBitMap(int a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 Process; // r13
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  int v9; // ebx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v4 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v6 = *(_QWORD *)(Process + 1296) + 48LL;
  if ( *(_DWORD *)(*(_QWORD *)(Process + 1296) + 216LL) )
  {
    while ( 1 )
    {
      v7 = v6 + 56LL * v4;
      v8 = *(_DWORD *)(v7 + 48) >> 15 << 12;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(v7 + 48) & 0x7FFF;
      *(_QWORD *)(v7 + 8) = qword_14043B5E8 + 4 * (v8 >> 2);
      if ( a1 == 1 )
        *(_DWORD *)v7 = 0;
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      v9 = MiExpandVadBitMap(v6 + 56LL * v4, 1LL);
      *(_DWORD *)(v7 + 24) = *(_DWORD *)(v7 + 16);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( !v9 )
        break;
      if ( ++v4 >= *(_DWORD *)(v6 + 168) )
        return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
