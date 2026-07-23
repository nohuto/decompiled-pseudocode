/*
 * XREFs of ObRegisterCallbacks @ 0x14075BD60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140186880 (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpInsertCallbackByAltitude @ 0x14075BF34 (ObpInsertCallbackByAltitude.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v3; // edi
  NTSTATUS inserted; // ebx
  USHORT OperationRegistrationCount; // ax
  unsigned int v7; // ebp
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rsi
  size_t Length; // r8
  char *v11; // rcx
  unsigned int v12; // ebp
  OB_OPERATION_REGISTRATION *v13; // r14
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 PostOperation; // rcx
  unsigned __int16 *v16; // rbx
  POBJECT_TYPE v17; // rcx
  __int64 v18; // rax
  unsigned __int16 *v20; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  unsigned __int16 **v23; // rax

  v3 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C46624Fu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, v7);
  *v9 = 256;
  *((_QWORD *)v9 + 1) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  v9[9] = Length;
  v9[8] = Length;
  v11 = (char *)v9 + v7 - (unsigned int)Length;
  *((_QWORD *)v9 + 3) = v11;
  memmove(v11, CallbackRegistration->Altitude.Buffer, Length);
  v12 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v13 = &CallbackRegistration->OperationRegistration[v12];
      if ( !v13->Operations || ((*v13->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
        break;
      PreOperation = (unsigned __int64)v13->PreOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          goto LABEL_21;
      }
      else if ( !v13->PostOperation )
      {
        break;
      }
      PostOperation = (unsigned __int64)v13->PostOperation;
      if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
      {
LABEL_21:
        inserted = -1073741790;
        goto LABEL_22;
      }
      v16 = &v9[32 * (unsigned __int64)v12 + 16];
      *((_QWORD *)v16 + 1) = v16;
      *(_QWORD *)v16 = v16;
      ExInitializePushLock((PKSPIN_LOCK)v16 + 7);
      *((_DWORD *)v16 + 4) = v13->Operations;
      *((_QWORD *)v16 + 3) = v9;
      v17 = *v13->ObjectType;
      *((_QWORD *)v16 + 4) = v17;
      *((_QWORD *)v16 + 5) = v13->PreOperation;
      *((_QWORD *)v16 + 6) = v13->PostOperation;
      inserted = ObpInsertCallbackByAltitude(v17, v16);
      if ( inserted >= 0 )
      {
        ++v9[1];
        if ( ++v12 < CallbackRegistration->OperationRegistrationCount )
          continue;
      }
      goto LABEL_12;
    }
    inserted = -1073741811;
  }
LABEL_12:
  if ( inserted < 0 )
  {
LABEL_22:
    if ( v9[1] )
    {
      do
      {
        v20 = &v9[32 * (unsigned __int64)v3 + 16];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(*((_QWORD *)v20 + 4) + 184LL, 0LL);
        v22 = *(_QWORD *)v20;
        if ( *(unsigned __int16 **)(*(_QWORD *)v20 + 8LL) != v20
          || (v23 = (unsigned __int16 **)*((_QWORD *)v20 + 1), *v23 != v20) )
        {
          __fastfail(3u);
        }
        *v23 = (unsigned __int16 *)v22;
        *(_QWORD *)(v22 + 8) = v23;
        ExReleasePushLockEx(*((_QWORD *)v20 + 4) + 184LL, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        ++v3;
      }
      while ( v3 < v9[1] );
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
    if ( v9[1] )
    {
      do
      {
        v18 = v3++;
        *(_DWORD *)&v9[32 * v18 + 26] |= 1u;
      }
      while ( v3 < v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
