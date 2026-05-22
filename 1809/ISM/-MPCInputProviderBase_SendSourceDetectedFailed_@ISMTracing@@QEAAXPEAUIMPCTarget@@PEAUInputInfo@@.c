/*
 * XREFs of ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@I@Z @ 0x180100F38
 * Callers:
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct InputInfo *a3,
        int a4)
{
  __int64 v6; // rdi
  int v7; // eax
  int v8; // [rsp+38h] [rbp-79h] BYREF
  int v9; // [rsp+3Ch] [rbp-75h] BYREF
  int v10; // [rsp+40h] [rbp-71h] BYREF
  struct IMPCTarget *v11; // [rsp+48h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-59h] BYREF
  struct IMPCTarget **v13; // [rsp+78h] [rbp-39h]
  int v14; // [rsp+80h] [rbp-31h]
  int v15; // [rsp+84h] [rbp-2Dh]
  int *v16; // [rsp+88h] [rbp-29h]
  int v17; // [rsp+90h] [rbp-21h]
  int v18; // [rsp+94h] [rbp-1Dh]
  int *v19; // [rsp+98h] [rbp-19h]
  int v20; // [rsp+A0h] [rbp-11h]
  int v21; // [rsp+A4h] [rbp-Dh]
  int *v22; // [rsp+A8h] [rbp-9h]
  int v23; // [rsp+B0h] [rbp-1h]
  int v24; // [rsp+B4h] [rbp+3h]
  char *v25; // [rsp+B8h] [rbp+7h]
  int v26; // [rsp+C0h] [rbp+Fh]
  int v27; // [rsp+C4h] [rbp+13h]
  char *v28; // [rsp+C8h] [rbp+17h]
  int v29; // [rsp+D0h] [rbp+1Fh]
  int v30; // [rsp+D4h] [rbp+23h]
  int *v31; // [rsp+D8h] [rbp+27h]
  int v32; // [rsp+E0h] [rbp+2Fh]
  int v33; // [rsp+E4h] [rbp+33h]
  int v34; // [rsp+130h] [rbp+7Fh] BYREF

  v34 = a4;
  v6 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    v15 = 0;
    v11 = a2;
    v13 = &v11;
    v14 = 8;
    if ( a2 )
      v7 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 48LL))(a2);
    else
      v7 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v8 = v7;
    v16 = &v8;
    v9 = *(_DWORD *)a3;
    v19 = &v9;
    v10 = *((_DWORD *)a3 + 1);
    v22 = &v10;
    v25 = (char *)a3 + 8;
    v28 = (char *)a3 + 528;
    v31 = &v34;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    v32 = 4;
    TlgWrite((TraceLoggingHProvider)v6, &unk_18016B84D, 0LL, 0LL, 9u, &pData);
  }
}
