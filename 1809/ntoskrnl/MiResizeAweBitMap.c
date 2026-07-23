/*
 * XREFs of MiResizeAweBitMap @ 0x140851454
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlCopyBitMapEx @ 0x1401191B0 (RtlCopyBitMapEx.c)
 *     MiLockAwePagesExclusive @ 0x1402B1484 (MiLockAwePagesExclusive.c)
 *     MiUnlockAwePagesExclusive @ 0x1402B22A8 (MiUnlockAwePagesExclusive.c)
 *     MiCreateAweInfoBitMap @ 0x140850B24 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x140850EF8 (MiDeleteAweBitMap.c)
 */

__int64 __fastcall MiResizeAweBitMap(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 result; // rax
  __int128 *v11; // r14
  __int128 *v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v15[4]; // [rsp+40h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)a1 & 1) != 0 )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = 0LL;
  v6 = *(_OWORD *)(a1 + 16);
  v14 = *(_OWORD *)a1;
  v7 = *(_OWORD *)(a1 + 32);
  v15[0] = v6;
  v8 = *(_OWORD *)(a1 + 48);
  v15[1] = v7;
  v9 = *(_OWORD *)(a1 + 64);
  v15[2] = v8;
  v15[3] = v9;
  result = MiCreateAweInfoBitMap((__int64)&v14, a2, a3);
  if ( (int)result >= 0 )
  {
    v11 = (__int128 *)(a1 + 16);
    if ( Process )
    {
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
        MiDeleteAweBitMap((struct _KPROCESS *)Process, v15);
        return 3221225738LL;
      }
    }
    MiLockAwePagesExclusive(a1, (__int64)CurrentThread);
    if ( *(_QWORD *)&v15[0] > *(_QWORD *)v11 )
    {
      RtlCopyBitMapEx(a1 + 16, v15, 0LL);
      v13 = *v11;
      *v11 = v15[0];
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      if ( !*((_QWORD *)&v13 + 1) )
        return 0LL;
      v12 = &v13;
    }
    else
    {
      MiUnlockAwePagesExclusive(a1, (__int64)CurrentThread);
      if ( Process )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
      v12 = v15;
    }
    MiDeleteAweBitMap((struct _KPROCESS *)Process, v12);
    return 0LL;
  }
  return result;
}
