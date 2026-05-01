/*
 * XREFs of ?RmpEmptyWorkerRun@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180060BBC
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerRun(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v3; // rcx
  int v4; // r9d
  UINT32 cData; // r10d
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  int *v14; // [rsp+70h] [rbp+37h]
  UINT32 v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  *(_DWORD *)(a1 + 1264) = a2;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16)) <= 1 )
    __fastfail(0xEu);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    v13 = 0;
    v16 = 0;
    v9 = v6;
    v11 = &v9;
    v14 = &v8;
    v12 = 8;
    v8 = v4;
    v15 = cData;
    TlgWrite(v3, &unk_18008712B, 0LL, 0LL, cData, &pData);
  }
  return TpPostWork(*(_QWORD *)(a1 + 1240));
}
