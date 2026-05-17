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

__int64 __fastcall TppPoolpReferenceGlobalPool(
        volatile signed __int32 **a1,
        volatile signed __int64 *a2,
        volatile signed __int32 **a3,
        unsigned __int64 a4)
{
  _PEB_LDR_DATA *Ldr; // rdx
  char v8; // bl
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 || !a1 || !a2 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  if ( *a1 )
  {
    v8 = 0;
    RtlAcquireSRWLockShared(a2, (unsigned __int64)Ldr, (unsigned __int64)a3, a4);
    if ( *a1 )
    {
      _InterlockedIncrement(*a1);
      *a3 = *a1;
      v8 = 1;
    }
    RtlReleaseSRWLockShared(a2);
    if ( v8 )
      return 0LL;
  }
  v17 = 0LL;
  result = TpAllocPool(&v17, 0LL);
  v16 = result;
  if ( (int)result >= 0 )
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
        TpSetPoolMaxThreads(v17, (unsigned int)TppPoolpGlobalPoolMaxThreads);
      }
      else
      {
        if ( !v17 || (v10 = *(_DWORD *)(v17 + 440)) == 0 )
          v10 = MEMORY[0x7FFE03C0];
        v11 = (unsigned int)(8 * v10);
        if ( (unsigned int)v11 < 0x300 )
          v11 = 768LL;
        v12 = v17;
        TpSetPoolMaxThreads(v17, v11);
        if ( !v12 || (v13 = *(_DWORD *)(v12 + 440)) == 0 )
          v13 = MEMORY[0x7FFE03C0];
        v14 = (unsigned int)(4 * v13);
        if ( (unsigned int)v14 < 0x180 )
          v14 = 384LL;
        TpSetPoolMaxThreadsSoftLimit(v17, v14);
      }
      if ( !TppPoolpGlobalPoolStackSize )
        goto LABEL_25;
      v15 = TpSetPoolStackInformation(v17);
    }
    else
    {
      if ( a1 != (volatile signed __int32 **)&TppPoolpSerializedPool )
      {
LABEL_25:
        *a1 = (volatile signed __int32 *)v17;
        v17 = 0LL;
LABEL_37:
        RtlReleaseSRWLockExclusive(a2);
        if ( v17 )
          TpReleasePool(v17);
        if ( v16 >= 0 )
          *a3 = *a1;
        return (unsigned int)v16;
      }
      TpSetPoolMaxThreads(v17, 1LL);
      v15 = TpSetPoolMinThreads(v17, 1LL);
    }
    v16 = v15;
    if ( v15 < 0 )
      goto LABEL_37;
    goto LABEL_25;
  }
  return result;
}
