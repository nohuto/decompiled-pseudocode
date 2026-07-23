/*
 * XREFs of sub_1800E6C88 @ 0x1800E6C88
 * Callers:
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     RtlAcquireResourceShared @ 0x18005FB10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18005FC20 (RtlAcquireResourceExclusive.c)
 * Callees:
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     RtlCaptureContext @ 0x1800A0730 (RtlCaptureContext.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __fastcall sub_1800E6C88(ULONG_PTR a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  int v4; // eax
  __int64 v5; // rdi
  LONG (__cdecl *v6)(PEXCEPTION_POINTERS); // rcx
  int v7; // edi
  signed __int32 v8; // ecx
  int v9; // eax
  _QWORD *v10; // r9
  int ProcessInformation; // [rsp+30h] [rbp-5E8h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-5E0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-5C8h] BYREF
  int v14; // [rsp+70h] [rbp-5A8h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+90h] [rbp-588h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+130h] [rbp-4E8h] BYREF

  v2 = qword_180165350;
  v3 = dword_180166018;
  if ( !dword_180166018 )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v3 = ProcessInformation;
    dword_180166018 = ProcessInformation;
  }
  v5 = __ROR8__(v2, 64 - (v3 & 0x3F));
  v6 = (LONG (__cdecl *)(PEXCEPTION_POINTERS))(v5 ^ v3);
  if ( v3 == v5 )
    v6 = RtlUnhandledExceptionFilter;
  v12[1] = v6;
  ExceptionRecord.ExceptionCode = -1073741420;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = RtlRaiseException;
  v7 = 1;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = a1;
  v8 = _InterlockedIncrement(&dword_18016695C);
  if ( dword_1801627D4 && v8 == dword_1801627D4 )
  {
    v9 = 10 * dword_1801627D4;
    if ( ((5 * dword_1801627D4) & 0x40000000) != 0 )
      v9 = 0;
    dword_1801627D4 = v9;
    RtlCaptureContext(&ContextRecord);
    v12[0] = 0LL;
    if ( !byte_180165430 )
    {
      if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, v13, 0x40u, 0LL) >= 0
        && v14 == 1 )
      {
        v12[0] = -300000000LL;
      }
      else
      {
        v7 = 0;
      }
      v10 = v12;
      if ( !v7 )
        v10 = 0LL;
      sub_1800DBEC0((__int64)&ExceptionRecord, &ContextRecord, 15LL, (__int64)v10);
    }
  }
  if ( byte_180163EC1 )
    RtlRaiseException(&ExceptionRecord);
}
