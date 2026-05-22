/*
 * XREFs of ?MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800446F8
 * Callers:
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18004258C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProvi.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_PrepAndStabilizeTargetingRay_PostStabilization_(
        ISMTracing *this,
        struct LegacyInputInfo *a2)
{
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-49h] BYREF
  char *v5; // [rsp+50h] [rbp-29h]
  __int64 v6; // [rsp+58h] [rbp-21h]
  char *v7; // [rsp+60h] [rbp-19h]
  __int64 v8; // [rsp+68h] [rbp-11h]
  char *v9; // [rsp+70h] [rbp-9h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  char *v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  char *v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  char *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  char *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  v3 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
  {
    v6 = 4LL;
    v5 = (char *)a2 + 536;
    v7 = (char *)a2 + 540;
    v9 = (char *)a2 + 544;
    v11 = (char *)a2 + 548;
    v13 = (char *)a2 + 552;
    v15 = (char *)a2 + 556;
    v17 = (char *)a2 + 560;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    TlgWrite((TraceLoggingHProvider)v3, &unk_1801670C2, 0LL, 0LL, 9u, &pData);
  }
}
