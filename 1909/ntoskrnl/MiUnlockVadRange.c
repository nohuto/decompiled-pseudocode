/*
 * XREFs of MiUnlockVadRange @ 0x140688300
 * Callers:
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088AC90 (MiCoalescePlaceholderAllocations.c)
 *     MiCloneProcessAddressSpace @ 0x14089A6F4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall MiUnlockVadRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 Address; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 i; // rbx
  _QWORD *v12; // rcx
  ULONG_PTR v14; // rdi
  _QWORD *v15; // rax

  CurrentThread = KeGetCurrentThread();
  if ( a2 == -1LL )
  {
    v15 = *(_QWORD **)(a1 + 1624);
    Address = 0LL;
    while ( v15 )
    {
      Address = (unsigned __int64)v15;
      v15 = (_QWORD *)*v15;
    }
  }
  else
  {
    Address = MiLocateAddress(a2);
  }
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(Address + 8);
      v10 = Address;
      if ( v9 )
      {
        v12 = *(_QWORD **)v9;
        if ( *(_QWORD *)v9 )
        {
          do
          {
            v9 = (unsigned __int64)v12;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 );
        }
      }
      else
      {
        for ( i = *(_QWORD *)(Address + 16); ; i = *(_QWORD *)(v9 + 16) )
        {
          v9 = i & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 || *(_QWORD *)v9 == v10 )
            break;
          v10 = v9;
        }
      }
      if ( a3 == 1 )
        break;
      v14 = Address + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Address + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(Address + 40));
      KeAbPostRelease(v14);
      Address = v9;
      if ( !--a3 )
        goto LABEL_13;
    }
    MiUnlockVad((__int64)CurrentThread, Address);
  }
LABEL_13:
  if ( a4 )
    return (unsigned __int8)UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  else
    return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
