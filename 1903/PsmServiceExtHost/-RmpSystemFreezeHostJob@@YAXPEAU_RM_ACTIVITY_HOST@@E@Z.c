/*
 * XREFs of ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800734F8
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemFreezeHostJob(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  char v6; // [rsp+30h] [rbp-39h] BYREF
  int v7; // [rsp+38h] [rbp-31h] BYREF
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  char *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  __int64 *v15; // [rsp+A0h] [rbp+37h]
  __int64 v16; // [rsp+A8h] [rbp+3Fh]

  v2 = *((_QWORD *)a1 + 6);
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, char))(*(_QWORD *)(v2 + 40) + 64LL))(
         (char *)a1 + 552,
         *((unsigned int *)a1 + 155),
         (char *)a1 + 88,
         *((_QWORD *)a1 + 4),
         a2);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      v11 = 4LL;
      v10 = &v7;
      v13 = 1LL;
      v12 = &v6;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
      v4 = *((_QWORD *)a1 + 4);
      v15 = &v8;
      v8 = v4;
      v16 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180096D76, 0LL, 0LL, 6u, &pData);
    }
  }
}
