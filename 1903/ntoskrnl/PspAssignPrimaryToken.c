/*
 * XREFs of PspAssignPrimaryToken @ 0x140780184
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140109B18 (PspLockUnlockProcessExclusive.c)
 *     PspUnlockProcessSecurityShared @ 0x140307B04 (PspUnlockProcessSecurityShared.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     SeIsTokenAssignableToProcess @ 0x14061CA40 (SeIsTokenAssignableToProcess.c)
 *     ObDereferenceDeviceMap @ 0x140671E58 (ObDereferenceDeviceMap.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  NTSTATUS IsTokenAssignableToProcess; // ebx
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  char v12[8]; // [rsp+40h] [rbp-28h] BYREF
  PVOID Object; // [rsp+48h] [rbp-20h] BYREF
  PVOID v14; // [rsp+50h] [rbp-18h] BYREF
  PVOID v15; // [rsp+58h] [rbp-10h] BYREF

  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, &v14, 0LL);
  if ( result >= 0 )
  {
    v8 = v14;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v14, v12);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v12[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (unsigned __int64)a3, 0x200u, a2) )
      {
        IsTokenAssignableToProcess = ObReferenceObjectByHandleWithTag(
                                       a3,
                                       0x200u,
                                       (POBJECT_TYPE)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &Object,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v10 = Object;
          v15 = 0LL;
          if ( (*((_DWORD *)Object + 194) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            --*(_WORD *)(a1 + 484);
            ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 92), 0LL);
            if ( (v10[97] & 0x8000) != 0 )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v10, v8, &v15);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v10 = Object;
                v11 = _InterlockedIncrement64(&PsNextSecurityDomain);
                v8 = v14;
                *((_QWORD *)Object + 268) = v11;
                v10[269] = v11;
              }
            }
            PspUnlockProcessSecurityShared((__int64)v10, a1);
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            PspLockUnlockProcessExclusive((__int64)v10, a1);
            ObfDereferenceObject(v15);
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
