/*
 * XREFs of PspAssignPrimaryToken @ 0x140749B58
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F390 (PspLockUnlockProcessExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     ObDereferenceDeviceMap @ 0x140609F0C (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA398 (SeIsTokenAssignableToProcess.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x140749D88 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, ULONG_PTR a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // r14
  int IsTokenAssignableToProcess; // ebx
  signed __int64 *v10; // rdi
  PVOID v11; // rsi
  _QWORD *v12; // rax
  signed __int64 v13; // rcx
  char v14[8]; // [rsp+40h] [rbp-30h] BYREF
  PVOID v15; // [rsp+48h] [rbp-28h] BYREF
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  PVOID v17; // [rsp+58h] [rbp-18h] BYREF

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v17, 0LL);
  if ( result >= 0 )
  {
    v8 = v17;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v17, v14);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v14[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, a3, 0x200u, a2) )
      {
        IsTokenAssignableToProcess = ObpReferenceObjectByHandleWithTag(
                                       a3,
                                       512,
                                       (__int64)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &v15,
                                       0LL,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = (signed __int64 *)v15;
          v11 = 0LL;
          Object = 0LL;
          if ( (*((_DWORD *)v15 + 192) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 91), 0LL);
            if ( (v10[96] & 0x8000) != 0 )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8, &Object);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v12 = v15;
                v13 = _InterlockedIncrement64(&PsNextSecurityDomain);
                *((_QWORD *)v15 + 262) = v13;
                v12[263] = v13;
              }
            }
            if ( _InterlockedCompareExchange64(v10 + 91, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v10 + 91);
            KeAbPostRelease((ULONG_PTR)(v10 + 91));
            KeLeaveCriticalRegionThread(a1);
            v10 = (signed __int64 *)v15;
            v11 = Object;
            v8 = v17;
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            PspLockUnlockProcessExclusive((__int64)v10, a1);
            ObfDereferenceObject(v11);
            ObDereferenceDeviceMap((__int64)v10);
          }
          ObfDereferenceObjectWithTag(v10, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    ObfDereferenceObject(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
