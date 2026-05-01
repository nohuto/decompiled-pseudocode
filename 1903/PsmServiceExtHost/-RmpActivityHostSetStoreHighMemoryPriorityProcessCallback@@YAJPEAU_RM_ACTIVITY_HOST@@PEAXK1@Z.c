/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003E330
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  NTSTATUS result; // eax
  NTSTATUS v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  __int64 v9; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v10[2]; // [rsp+40h] [rbp-39h] BYREF
  void *v11; // [rsp+48h] [rbp-31h]
  _DWORD SystemInformation[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD *v13; // [rsp+58h] [rbp-21h]
  int v14; // [rsp+60h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  NTSTATUS *v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  int *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  __int64 *v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+B8h] [rbp+3Fh]
  int v24; // [rsp+BCh] [rbp+43h]

  v10[1] = 0;
  v11 = a2;
  v10[0] = 257;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v13 = v10;
  v14 = 16;
  result = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v7 = result;
  if ( dword_1800AB2C0 > 4u )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v7;
    v19 = &v8;
    v9 = *((_QWORD *)a1 + 4);
    v22 = &v9;
    v17 = 4;
    v8 = a3;
    v20 = 4;
    v23 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096A0D, 0LL, 0LL, 5u, &pData);
    return v7;
  }
  return result;
}
