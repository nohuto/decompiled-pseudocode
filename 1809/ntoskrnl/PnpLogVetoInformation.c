/*
 * XREFs of PnpLogVetoInformation @ 0x1408330D0
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140840750 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400EED90 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x140129C70 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140289E9C (PnpDiagnosticTraceAppVeto.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     PsLookupProcessByProcessId @ 0x140646C20 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406671F8 (PsGetAllocatedFullProcessImageName.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x140839948 (PnpTraceDeviceRemoveProcessVeto.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool i; // zf
  char v6; // r15
  int *p_LockNV; // rbp
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rbx
  const char *ProcessImageFileName; // rax
  _QWORD *j; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+18h] BYREF

  Process = 0LL;
  result = (_QWORD *)*a2;
  for ( i = a2 == (_QWORD *)*a2; ; i = a2 == result )
  {
    v14 = result - 3;
    if ( i )
      break;
    v6 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v14 + 4), &Process) >= 0 )
    {
      p_LockNV = &Process->Header.LockNV;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v9 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v6 = 1;
          ExFreePoolWithTag(P, 0);
          v9 = &v16;
          P = &v16;
          ProcessImageFileName = (const char *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v16, &DestinationString, 1u);
        }
      }
      else
      {
        v9 = 0LL;
        P = 0LL;
      }
      PnpDiagnosticTraceAppVeto(v8, p_LockNV[184], (__int64)v9, a1);
      for ( j = (_QWORD *)*v14; ; j = (_QWORD *)v13[1] )
      {
        v13 = j - 1;
        if ( v14 == j )
          break;
        if ( *v13 )
          v12 = *(_QWORD *)(*(_QWORD *)(*v13 + 312LL) + 40LL);
        else
          v12 = 0LL;
        PnpTraceDeviceRemoveProcessVeto(a1, v12 + 40, v9);
      }
      if ( v6 )
      {
        RtlFreeAnsiString(v9);
      }
      else if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
      }
      ObfDereferenceObjectWithTag(p_LockNV, 0x746C6644u);
    }
    result = (_QWORD *)v14[3];
  }
  return result;
}
