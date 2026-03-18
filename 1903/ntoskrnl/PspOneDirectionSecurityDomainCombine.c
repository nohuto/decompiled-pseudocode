/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x1406722F4
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405E732C (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PspIsParentProcess @ 0x1400ADAF8 (PspIsParentProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     SeCreateAccessStateEx @ 0x140672F30 (SeCreateAccessStateEx.c)
 */

void __fastcall PspOneDirectionSecurityDomainCombine(__int64 Object)
{
  void *v2; // rcx
  PEPROCESS v3; // rbx
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[224]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v9, 0, sizeof(v9));
  v2 = *(void **)(Object + 1000);
  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(v2, &Process) < 0 )
    goto LABEL_17;
  v3 = Process;
  if ( !PspIsParentProcess((__int64)Process, Object) || (v3[2].ActiveProcessors.Bitmap[4] & 0x40000000000000LL) == 0 )
    goto LABEL_12;
  _InterlockedOr(v5, 0);
  if ( *(int *)(Object + 2128) < 0 )
  {
LABEL_17:
    v3 = Process;
    goto LABEL_12;
  }
  v3 = Process;
  if ( *(int *)&Process[2].Spare2[7] >= 0
    && (int)SeCreateAccessStateEx(0LL, Process, 40, (__int64)PsProcessType + 76) >= 0 )
  {
    if ( ObOpenObjectByPointer((PVOID)Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
    {
      *(_QWORD *)(Object + 2152) = *(_QWORD *)&v3[2].Spare2[23];
      if ( (*(_DWORD *)&v3[2].Spare2[7] | *(_DWORD *)(Object + 2128)) < 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(Object + 1788), 0x200000u);
        v4 = _InterlockedIncrement64(&PsNextSecurityDomain);
        *(_QWORD *)(Object + 2144) = v4;
        *(_QWORD *)(Object + 2152) = v4;
      }
      v3 = Process;
    }
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_12:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
}
