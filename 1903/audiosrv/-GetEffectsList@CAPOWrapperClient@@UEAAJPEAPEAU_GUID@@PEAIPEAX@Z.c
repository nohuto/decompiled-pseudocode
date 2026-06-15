/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180004AB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

int __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  int result; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  void *v11; // rbx
  HANDLE CurrentProcess; // rax
  int v13; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+44h] [rbp-45h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  const char *v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+78h] [rbp-11h]
  int v19; // [rsp+7Ch] [rbp-Dh]
  int *v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  int *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]

  TargetHandle = 0LL;
  if ( !*((_QWORD *)this + 5) || !g_ADGProcess )
    return -2147024809;
  if ( !a4
    || (v11 = *(void **)&g_ADGProcess[2].LockCount,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(CurrentProcess, a4, v11, &TargetHandle, 0, 0, 2u)) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 5) + 48LL))(
               *((_QWORD *)this + 5),
               a2,
               a3);
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      result = (unsigned __int16)result | 0x80070000;
  }
  v13 = result;
  if ( result < 0 && (unsigned int)dword_1801B64B8 > 2 )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = "CAPOWrapperClient::GetEffectsList";
    v20 = &v14;
    v23 = &v13;
    v18 = 34;
    v14 = 226;
    v21 = 4;
    v24 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CDBD, v9, v10, 5u, &pData);
    return v13;
  }
  return result;
}
