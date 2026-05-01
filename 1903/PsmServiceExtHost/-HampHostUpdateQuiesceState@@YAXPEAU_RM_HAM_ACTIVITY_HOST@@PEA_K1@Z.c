/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180037A18
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037D44 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x180037F80 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x180037FD8 (-HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_K.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x180038098 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180038130 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r12
  int IsDebugEnabled; // eax
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r14d
  unsigned __int64 v14; // r13
  _DWORD *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  char v18; // al
  __int64 v19; // r10
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 *v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-B8h] BYREF
  char v26[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 **v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  char *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  _DWORD *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]

  v24 = a2;
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  if ( *a2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))(*((_QWORD *)a1 + 99));
  else
    v6 = 0LL;
  HampUtilQueryQuiesceTimeouts(&v25, &v23);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, &v22);
  v8 = v22;
  if ( IsDebugEnabled < 0 )
    v8 = 0;
  v22 = v8;
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v9 = *((_QWORD *)a1 + 81);
  v29 = (unsigned int)v9 >> 29;
  v10 = v8 & 1;
  v11 = *a2;
  v12 = v23;
  v30 = v11;
  v31 = *a3;
  do
  {
    v13 = (v9 >> 41) & 1 | (2 * ((v9 >> 42) & 1 | (2 * (v10 | (2 * ((v9 >> 46) & 1))))));
    v23 = v13;
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 99),
      1LL);
    HampHostComputeQuiesceAction(
      (struct _HAM_HOST_QUIESCE_ACTION *)&v29,
      (struct _HAM_HOST_STATE_SNAPSHOT *)&v23,
      v6,
      v25,
      v12,
      (struct _HAM_HOST_QUIESCE_ACTION *)v26);
    v14 = v27;
    if ( v27 )
      RmpSystemResourceTimerSet(a1, v27, *((void **)a1 + 99));
    HampHostQueryIsDebugEnabled(a1, &v22);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v9 = *((_QWORD *)a1 + 81);
    v10 = v22 & 1;
  }
  while ( v13 != ((v9 >> 41) & 1 | (2 * ((v9 >> 42) & 1 | (2 * (v10 | (2 * ((v9 >> 46) & 1))))))) );
  LOBYTE(v9) = v26[0];
  HampHostCommitQuiesceAction(a1, v9);
  v15 = v24;
  v16 = v28;
  *v24 = v14;
  *a3 = v16;
  *((_DWORD *)a1 + 168) = *v15;
  RtlQueryUnbiasedInterruptTime(&v24);
  *((_DWORD *)a1 + 167) = (unsigned __int64)v24 / 0x2710;
  if ( dword_1800AB2C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v17 = (unsigned __int64 *)*((_QWORD *)a1 - 4);
      v34 = &v24;
      v20 = v29;
      v36 = &v20;
      v38 = &v30;
      v40 = &v31;
      v18 = ((unsigned __int64)*((unsigned int *)a1 + 162) >> 29) & 7;
      v24 = v17;
      v21 = v18;
      v42 = &v21;
      v35 = v19;
      v37 = 1LL;
      v39 = v19;
      v41 = v19;
      v43 = 1LL;
      v44 = v15;
      v45 = v19;
      v46 = a3;
      v47 = v19;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098E74, 0LL, 0LL, 0xAu, &pData);
    }
  }
}
