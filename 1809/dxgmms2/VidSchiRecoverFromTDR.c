/*
 * XREFs of VidSchiRecoverFromTDR @ 0x1C00CB454
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0086990 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0029110 (_TlgWrite.c)
 */

void __fastcall VidSchiRecoverFromTDR(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rax
  __int64 v4; // rcx
  struct _TDR_RECOVERY_CONTEXT *v5; // rcx
  int v6; // [rsp+30h] [rbp-59h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  __int64 v8; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+70h] [rbp-19h]
  __int64 v12; // [rsp+78h] [rbp-11h]
  _DWORD *v13; // [rsp+80h] [rbp-9h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  __int64 v15; // [rsp+90h] [rbp+7h]
  _DWORD v16[2]; // [rsp+98h] [rbp+Fh] BYREF
  int *v17; // [rsp+A0h] [rbp+17h]
  __int64 v18; // [rsp+A8h] [rbp+1Fh]
  __int64 *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  int *v21; // [rsp+C0h] [rbp+37h]
  __int64 v22; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)hProvider > 5
    && (qword_1C004D058 & 0x400000000010LL) != 0
    && (qword_1C004D060 & 0x400000000010LL) == qword_1C004D060 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v8 = *(_QWORD *)(v2 + 276);
    v11 = &v8;
    v12 = 8LL;
    v3 = *(unsigned __int16 **)(v2 + 1392);
    v13 = v16;
    v14 = 2LL;
    LODWORD(v2) = *v3;
    v15 = *((_QWORD *)v3 + 1);
    v16[0] = v2;
    v4 = *(_QWORD *)(a1 + 2408);
    v16[1] = 0;
    v6 = *(_DWORD *)(v4 + 16);
    v17 = &v6;
    v19 = &v9;
    v7 = *(_DWORD *)(a1 + 2424);
    v21 = &v7;
    v18 = 4LL;
    v9 = v4;
    v20 = 8LL;
    v22 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00410B4, 0LL, (LPCGUID)8, 8u, &pData);
  }
  v5 = *(struct _TDR_RECOVERY_CONTEXT **)(a1 + 2408);
  *(_DWORD *)(a1 + 2404) = 2;
  TdrResetFromTimeoutAsync(v5);
}
