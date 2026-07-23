/*
 * XREFs of MiLockVadRange @ 0x140605B60
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140605944 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1402C538C (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 *     MiVadIsCfgBitmap @ 0x140605D30 (MiVadIsCfgBitmap.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v6; // eax
  unsigned __int64 v7; // rbx
  int v8; // r13d
  unsigned __int64 Address; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 i; // rbx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 j; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a4;
  v7 = a2;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v8 = 1;
LABEL_2:
  if ( v6 )
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( !v8 || (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
    return 0LL;
  if ( v7 == -1LL )
  {
    v20 = *(_QWORD **)(a1 + 1576);
    Address = 0LL;
    while ( v20 )
    {
      Address = (unsigned __int64)v20;
      v20 = (_QWORD *)*v20;
    }
  }
  else
  {
    Address = MiLocateAddress(v7);
  }
  v10 = 0LL;
  v11 = Address;
  v12 = 0LL;
  while ( v11 )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = v11;
    if ( v13 )
    {
      v17 = *(_QWORD **)v13;
      if ( *(_QWORD *)v13 )
      {
        do
        {
          v13 = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    else
    {
      for ( i = *(_QWORD *)(v11 + 16); ; i = *(_QWORD *)(v13 + 16) )
      {
        v13 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 || *(_QWORD *)v13 == v14 )
          break;
        v14 = v13;
      }
    }
    if ( a3 != -1LL )
    {
      v18 = *(unsigned int *)(v11 + 28);
      if ( a3 <= (v18 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12 )
      {
        v13 = 0LL;
        goto LABEL_22;
      }
      if ( v13 )
      {
        if ( (v18 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) + 1 == (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
          goto LABEL_22;
        v13 = 0LL;
      }
      v8 = 0;
    }
LABEL_22:
    if ( (unsigned int)MiVadIsCfgBitmap(v11) == 1 )
    {
      v31[v12] = v11;
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(v11 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, v11);
      if ( (unsigned int)MiVadDeleted(v11) == 1 || !v8 )
      {
        MiReferenceVad(v19);
        if ( Address != v11 )
        {
          do
          {
            v23 = *(_QWORD *)(Address + 8);
            v24 = Address;
            if ( v23 )
            {
              v25 = *(_QWORD **)v23;
              if ( *(_QWORD *)v23 )
              {
                do
                {
                  v23 = (unsigned __int64)v25;
                  v25 = (_QWORD *)*v25;
                }
                while ( v25 );
              }
            }
            else
            {
              for ( j = *(_QWORD *)(Address + 16); ; j = *(_QWORD *)(v23 + 16) )
              {
                v23 = j & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v23 || *(_QWORD *)v23 == v24 )
                  break;
                v24 = v23;
              }
            }
            if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
              KeAbPostRelease(Address + 40);
            }
            Address = v23;
          }
          while ( v23 != v11 );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(v11) == 1 )
          MiWaitForVadDeletion(v28, v27, v29, v30);
        MiUnlockAndDereferenceVad((char *)v11);
        v6 = a4;
        v7 = a2;
        goto LABEL_2;
      }
      ++v10;
    }
    v11 = v13;
  }
  if ( v8 == 1 && (_DWORD)v12 )
  {
    v21 = v31;
    v22 = (unsigned int)v12;
    do
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(*v21 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, *v21);
      ++v10;
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  return v10;
}
