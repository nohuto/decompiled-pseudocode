/*
 * XREFs of PspOneDirectionSecurityDomainCombine @ 0x1406B7BE4
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1405F8498 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     ObOpenObjectByPointer @ 0x1406480E0 (ObOpenObjectByPointer.c)
 */

void __fastcall PspOneDirectionSecurityDomainCombine(HANDLE *Object)
{
  PEPROCESS v2; // rbx
  signed __int64 v3; // rax
  signed __int32 v4[8]; // [rsp+0h] [rbp-100h] BYREF
  PEPROCESS Process; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v8[28]; // [rsp+F0h] [rbp-10h] BYREF

  Process = 0LL;
  Handle = 0LL;
  if ( PsLookupProcessByProcessId(Object[124], &Process) < 0 )
    goto LABEL_16;
  v2 = Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x40000000000000LL) == 0 )
    goto LABEL_11;
  _InterlockedOr(v4, 0);
  if ( *((int *)Object + 520) < 0 )
  {
LABEL_16:
    v2 = Process;
  }
  else
  {
    v2 = Process;
    if ( (Process[2].UserTime & 0x80000000) == 0
      && (int)SeCreateAccessStateEx(
                0LL,
                Process,
                &PassedAccessState,
                v8,
                0x28u,
                (GENERIC_MAPPING *)((char *)PsProcessType + 76)) >= 0 )
    {
      if ( ObOpenObjectByPointer(Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
      {
        Object[263] = *(HANDLE *)&v2[2].AddressPolicy;
        if ( ((v2[2].UserTime | *((_DWORD *)Object + 520)) & 0x80000000) != 0 )
        {
          v3 = _InterlockedIncrement64(&PsNextSecurityDomain);
          Object[262] = (HANDLE)v3;
          Object[263] = (HANDLE)v3;
        }
        v2 = Process;
      }
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
    }
  }
LABEL_11:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
}
