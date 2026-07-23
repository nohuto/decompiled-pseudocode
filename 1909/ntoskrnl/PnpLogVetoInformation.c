/*
 * XREFs of PnpLogVetoInformation @ 0x14086D120
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14087B850 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x14012C270 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14029FF70 (PnpDiagnosticTraceAppVeto.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14066BAF8 (PsGetAllocatedFullProcessImageName.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x140873CC4 (PnpTraceDeviceRemoveProcessVeto.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool v5; // zf
  char v6; // r12
  int *p_LockNV; // rsi
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rbx
  const CHAR *ProcessImageFileName; // rax
  _QWORD *i; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r15
  _QWORD *v14; // rdi
  _STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+50h] BYREF

  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  result = (_QWORD *)*a2;
  v5 = a2 == (_QWORD *)*a2;
  Process = 0LL;
  while ( 1 )
  {
    v14 = result - 3;
    if ( v5 )
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
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          v6 = 1;
          ExFreePoolWithTag(P, 0);
          v9 = &v16;
          P = &v16;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v16, &DestinationString, 1u);
        }
      }
      else
      {
        v9 = 0LL;
        P = 0LL;
      }
      PnpDiagnosticTraceAppVeto(v8, p_LockNV[186], (__int64)v9, a1);
      for ( i = (_QWORD *)*v14; ; i = (_QWORD *)v13[1] )
      {
        v13 = i - 1;
        if ( v14 == i )
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
    v5 = a2 == result;
  }
  return result;
}
