/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003D690
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
  _QWORD v9[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  _DWORD SystemInformation[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp-21h]
  int v13; // [rsp+60h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  NTSTATUS *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  int *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]
  __int64 *v19; // [rsp+B0h] [rbp+37h]
  __int64 v20; // [rsp+B8h] [rbp+3Fh]

  v9[1] = a2;
  v9[0] = 257LL;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v13 = 16;
  v12 = v9;
  result = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v7 = result;
  if ( hProvider > 4u )
  {
    v16 = 4LL;
    v15 = &v7;
    v17 = &v8;
    v10 = *((_QWORD *)a1 + 4);
    v19 = &v10;
    v8 = a3;
    v18 = 4LL;
    v20 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088C8B, 0LL, 0LL, 5u, &pData);
    return v7;
  }
  return result;
}
