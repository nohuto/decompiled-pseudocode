/*
 * XREFs of sub_1800CFBE0 @ 0x1800CFBE0
 * Callers:
 *     sub_1800A03B0 @ 0x1800A03B0 (sub_1800A03B0.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

LONG __fastcall sub_1800CFBE0(_EXCEPTION_RECORD *a1, struct _CONTEXT *a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  int v6; // eax
  __int64 (__fastcall *v7)(_EXCEPTION_POINTERS *); // rbx
  LONG result; // eax
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rdx
  USHORT Length; // ax
  int v11; // ecx
  PWCH Buffer; // rax
  void *Rip; // rax
  NTSTATUS v14; // eax
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessInformation; // [rsp+34h] [rbp-CCh] BYREF
  ULONGLONG RegHandle; // [rsp+38h] [rbp-C8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+40h] [rbp-C0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  __int16 *v20; // [rsp+F0h] [rbp-10h] BYREF
  int v21; // [rsp+F8h] [rbp-8h]
  int v22; // [rsp+FCh] [rbp-4h]
  PWCH v23; // [rsp+100h] [rbp+0h]
  int v24; // [rsp+108h] [rbp+8h]
  int v25; // [rsp+10Ch] [rbp+Ch]

  v2 = dword_180166018;
  v4 = qword_180165350;
  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = a2;
  if ( !dword_180166018 )
  {
    v6 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v2 = ProcessInformation;
    dword_180166018 = ProcessInformation;
  }
  v7 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&dword_18011D492);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&stru_18011E318, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v22 = 0;
      v15 = Length >> 1;
      v20 = &v15;
      v21 = 2;
      v11 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v25 = 0;
      v24 = v11;
      v23 = Buffer;
      EtwEventWrite(RegHandle, &stru_18012C1B0, 2u, (PEVENT_DATA_DESCRIPTOR)&v20);
      EtwNotificationUnregister(RegHandle, 0LL);
    }
    Rip = (void *)a2->Rip;
    ExceptionRecord.NumberParameters = 0;
    ExceptionRecord.ExceptionAddress = Rip;
    LODWORD(Rip) = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = (unsigned int)Rip;
    ExceptionRecord.ExceptionRecord = a1;
    v14 = ZwRaiseException(&ExceptionRecord, a2, 0);
    RtlRaiseStatus(v14);
  }
  return result;
}
