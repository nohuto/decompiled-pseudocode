/*
 * XREFs of ?RmpSystemSetApplicationQuiesceCompleteEvents@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003C350
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemSetApplicationQuiesceCompleteEvents(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 160LL))(*((_QWORD *)a1 + 143));
  if ( hProvider > 5u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 44);
    v2 = *((_QWORD *)a1 + 4);
    v8 = 0;
    v6 = &v3;
    v3 = v2;
    v7 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180088E61, 0LL, 0LL, 4u, &pData);
  }
}
