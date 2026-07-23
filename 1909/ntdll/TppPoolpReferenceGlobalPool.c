/*
 * XREFs of TppPoolpReferenceGlobalPool @ 0x18002FBA8
 * Callers:
 *     TpReserveTaskPost @ 0x18002FD98 (TpReserveTaskPost.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     RtlpTpIoAlloc @ 0x18008969C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreads @ 0x180062EC0 (TpSetPoolMaxThreads.c)
 *     TpAllocPool @ 0x180062F90 (TpAllocPool.c)
 *     TpSetPoolStackInformation @ 0x18007EE40 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080410 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpReleasePool @ 0x180081AA0 (TpReleasePool.c)
 *     TpSetPoolMinThreads @ 0x180081F40 (TpSetPoolMinThreads.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        _RTL_SRWLOCK *a2,
        volatile signed __int32 **a3)
{
  char v6; // bl
  NTSTATUS result; // eax
  int v8; // edx
  ULONG v9; // edx
  PTP_POOL v10; // rbx
  int v11; // edx
  __int64 v12; // rdx
  NTSTATUS v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  PTP_POOL PoolReturn; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 || !a1 || !a2 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  if ( *a1 )
  {
    v6 = 0;
    RtlAcquireSRWLockShared(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v6 = 1;
    }
    RtlReleaseSRWLockShared(a2);
    if ( v6 )
      return 0;
  }
  PoolReturn = 0LL;
  result = TpAllocPool(&PoolReturn, 0LL);
  v14 = result;
  if ( result >= 0 )
  {
    RtlAcquireSRWLockExclusive(a2);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      goto LABEL_37;
    }
    if ( a1 == (volatile signed __int32 **)&TppPoolpGlobalPool )
    {
      if ( TppPoolpGlobalPoolMaxThreads )
      {
        TpSetPoolMaxThreads(PoolReturn, TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        if ( !PoolReturn || (v8 = *((_DWORD *)PoolReturn + 110)) == 0 )
          v8 = MEMORY[0x7FFE03C0];
        v9 = 8 * v8;
        if ( v9 < 0x300 )
          v9 = 768;
        v10 = PoolReturn;
        TpSetPoolMaxThreads(PoolReturn, v9);
        if ( !v10 || (v11 = *((_DWORD *)v10 + 110)) == 0 )
          v11 = MEMORY[0x7FFE03C0];
        v12 = (unsigned int)(4 * v11);
        if ( (unsigned int)v12 < 0x180 )
          v12 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(PoolReturn, v12);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_25;
      v13 = TpSetPoolStackInformation(PoolReturn, TppPoolpGlobalPoolStackSize);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_25:
        *a1 = (volatile signed __int32 *)PoolReturn;
        PoolReturn = 0LL;
LABEL_37:
        RtlReleaseSRWLockExclusive(a2);
        if ( PoolReturn )
          TpReleasePool(PoolReturn);
        if ( v14 >= 0 )
          *a3 = *a1;
        return v14;
      }
      TpSetPoolMaxThreads(PoolReturn, 1u);
      v13 = TpSetPoolMinThreads(PoolReturn, 1u);
    }
    v14 = v13;
    if ( v13 < 0 )
      goto LABEL_37;
    goto LABEL_25;
  }
  return result;
}
