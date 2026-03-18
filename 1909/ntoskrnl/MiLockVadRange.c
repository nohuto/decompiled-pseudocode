/*
 * XREFs of MiLockVadRange @ 0x140688410
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088AC90 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D554 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140053A20 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071A78 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1402DEE34 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     MiWaitForVadDeletion @ 0x1402E53D8 (MiWaitForVadDeletion.c)
 *     MiVadIsCfgBitmap @ 0x1406885DC (MiVadIsCfgBitmap.c)
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
  unsigned __int64 v14; // rcx
  __int64 i; // rbx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 j; // rbx
  __int64 v29; // rcx
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = a4;
  v7 = a2;
  v30[0] = 0LL;
  v30[1] = 0LL;
  v8 = 1;
LABEL_2:
  if ( v6 )
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( !v8 || (*(_DWORD *)(a1 + 780) & 0x20) != 0 )
    return 0LL;
  if ( v7 == -1LL )
  {
    v20 = *(_QWORD **)(a1 + 1624);
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
        goto LABEL_23;
      }
      if ( v13 )
      {
        if ( (v18 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) + 1 == (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
          goto LABEL_23;
        v13 = 0LL;
      }
      v8 = 0;
    }
LABEL_23:
    if ( (unsigned int)MiVadIsCfgBitmap(v11) == 1 )
    {
      v30[v12] = v11;
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
            v25 = *(_QWORD *)(Address + 8);
            v26 = Address;
            if ( v25 )
            {
              v27 = *(_QWORD **)v25;
              if ( *(_QWORD *)v25 )
              {
                do
                {
                  v25 = (unsigned __int64)v27;
                  v27 = (_QWORD *)*v27;
                }
                while ( v27 );
              }
            }
            else
            {
              for ( j = *(_QWORD *)(Address + 16); ; j = *(_QWORD *)(v25 + 16) )
              {
                v25 = j & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v25 || *(_QWORD *)v25 == v26 )
                  break;
                v26 = v25;
              }
            }
            if ( !(unsigned int)MiVadIsCfgBitmap(Address) )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
              KeAbPostRelease(Address + 40);
            }
            Address = v25;
          }
          while ( v25 != v11 );
        }
        if ( a4 )
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1, v23, v24);
        else
          UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED((__int64)CurrentThread, a1);
        if ( (unsigned int)MiVadDeleted(v11) == 1 )
          MiWaitForVadDeletion(v29);
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
    v21 = v30;
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
