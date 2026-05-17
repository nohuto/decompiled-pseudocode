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

__int64 __fastcall sub_1800CFBE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rbx
  int InformationProcess; // eax
  __int64 (__fastcall *v7)(_QWORD *); // rbx
  __int64 result; // rax
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  unsigned __int16 Length; // ax
  int v11; // ecx
  wchar_t *Buffer; // rax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh]
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

  v2 = dword_180166018;
  v4 = qword_180165350;
  v18[0] = a1;
  v18[1] = a2;
  if ( !dword_180166018 )
  {
    InformationProcess = ZwQueryInformationProcess();
    if ( InformationProcess < 0 )
      RtlRaiseStatus((unsigned int)InformationProcess);
    v2 = v16;
    dword_180166018 = v16;
  }
  v7 = (__int64 (__fastcall *)(_QWORD *))(v2 ^ __ROR8__(v4, 64 - (v2 & 0x3F)));
  if ( v7 )
    result = v7(v18);
  else
    result = RtlUnhandledExceptionFilter2(v18, &unk_18011D492);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister((int)&unk_18011E318, 0LL, 0LL, (__int64)&v17) )
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
      EtwEventWrite(v17, (int)&unk_18012C1B0, 2, (__int64)&v24);
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
