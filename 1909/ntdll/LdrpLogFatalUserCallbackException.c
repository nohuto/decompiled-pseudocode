/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x1800CFCA0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x1800A0B60 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x180052D50 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     ZwRaiseException @ 0x18009FA80 (ZwRaiseException.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA420 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  NTSTATUS v6; // eax
  __int64 (__fastcall *v7)(_QWORD *); // rbx
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v11; // ecx
  wchar_t *Buffer; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessInformation; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+54h] [rbp-ACh]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  __int16 *v24; // [rsp+F0h] [rbp-10h] BYREF
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  wchar_t *v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+10Ch] [rbp+Ch]

  v2 = `RtlpGetCookieValue'::`2'::CookieValue;
  v4 = RtlpUnhandledExceptionFilter;
  v18[0] = a1;
  v18[1] = a2;
  if ( !`RtlpGetCookieValue'::`2'::CookieValue )
  {
    v6 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    v2 = ProcessInformation;
    `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
  }
  v7 = (__int64 (__fastcall *)(_QWORD *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(v18);
  else
    result = RtlUnhandledExceptionFilter2(v18, &unk_18011D492);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v17) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      Length = ProcessParameters->ImagePathName.Length;
      v26 = 0;
      v15 = Length >> 1;
      v24 = &v15;
      v25 = 2;
      v11 = ProcessParameters->ImagePathName.Length;
      Buffer = ProcessParameters->ImagePathName.Buffer;
      v29 = 0;
      v28 = v11;
      v27 = Buffer;
      EtwEventWrite(v17, (int)&FatalUserCallbackException, 2, (__int64)&v24);
      EtwNotificationUnregister(v17, 0LL);
    }
    v13 = *(_QWORD *)(a2 + 248);
    v23 = 0;
    v22 = v13;
    LODWORD(v13) = *(_DWORD *)(a1 + 4) | 1;
    v19 = -1073740771;
    v20 = v13;
    v21 = a1;
    v14 = ZwRaiseException();
    RtlRaiseStatus(v14);
  }
  return result;
}
