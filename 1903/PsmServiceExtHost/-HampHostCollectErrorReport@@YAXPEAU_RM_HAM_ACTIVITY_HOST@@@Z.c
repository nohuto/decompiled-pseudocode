/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077258
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026B20 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000DE78 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180022100 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002BED0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180039670 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x180072C48 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800734F8 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18007FE3C (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v3; // esi
  int v4; // r15d
  unsigned int v5; // r14d
  int v6; // r12d
  BOOL IsSuspendWaiter; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  BOOL v14; // eax
  int v15; // ecx
  int ProcessesInfo; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  int v23; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v30; // [rsp+78h] [rbp-90h] BYREF
  int *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  int *v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  unsigned int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  unsigned int *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]

  v3 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v4 = 1;
  v28 = 0LL;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098DAC, 0LL, 0LL, 2u, &pData);
  v5 = *((unsigned __int16 *)a1 + 324);
  v6 = *((_DWORD *)a1 + 210);
  if ( (*((_DWORD *)a1 + 162) & 0x30000) != 0x20000LL )
    goto LABEL_4;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  v8 = *((_DWORD *)a1 + 140);
  v9 = IsSuspendWaiter;
  v10 = 256;
  if ( v8 != 2 )
  {
    if ( v8 != 4 || (*((_BYTE *)a1 + 1180) & 0x40) != 0 )
      goto LABEL_14;
    *((_DWORD *)a1 + 296) |= 0x40u;
    goto LABEL_13;
  }
  v11 = *((_DWORD *)a1 + 295);
  if ( (v11 & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 296) |= 0x180u;
LABEL_13:
    v3 = 1;
    goto LABEL_14;
  }
  if ( (v11 & 0x100) == 0 )
  {
    *((_DWORD *)a1 + 296) |= 0x100u;
    goto LABEL_13;
  }
LABEL_14:
  HampHostCheckUpdateSuspendWaitState(a1, v9);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v4 = 0;
  if ( v3 )
  {
    v12 = *((_DWORD *)a1 + 140);
    if ( v12 == 2 )
    {
      RmpSystemChangePsmApplicationState((__int64)a1 - 64, 2LL);
    }
    else if ( v12 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 1);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v14 = HampHostIsSuspendWaiter(a1, v13);
    *((_DWORD *)a1 + 296) = 0;
    v15 = *((_DWORD *)a1 + 140);
    if ( v15 == 2 )
    {
      *((_DWORD *)a1 + 295) |= 0x180u;
    }
    else if ( v15 == 4 )
    {
      *((_DWORD *)a1 + 295) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v14);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  v22 = HampSystemCheckReportGameCoreHang((__int64)a1, v5, &v23);
  if ( v22 < 0 )
    goto LABEL_32;
  if ( v23 )
  {
LABEL_4:
    v22 = 0;
    goto LABEL_35;
  }
  ProcessesInfo = RmHamHostGetProcessesInfo(
                    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
                    0,
                    1,
                    (struct _HAM_PROCESS_SNAPSHOT *)&v26);
  v22 = ProcessesInfo;
  if ( ProcessesInfo >= 0 )
  {
    ProcessesInfo = HampSystemReportHang(v17, v27, (unsigned int)v28, v5, v6);
    v22 = ProcessesInfo;
    if ( ProcessesInfo >= 0 )
    {
      ProcessesInfo = 0;
      v10 = 0;
      v22 = 0;
    }
    else
    {
      v10 = 768;
    }
  }
  else
  {
    v10 = 512;
  }
  if ( ProcessesInfo < 0 )
  {
LABEL_32:
    if ( dword_1800AB2C0 <= 4u )
      goto LABEL_37;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
    {
      v32 = v18;
      v31 = &v22;
      v23 = v10;
      v33 = &v23;
      v34 = v18;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v19 = *((_QWORD *)a1 - 4);
      v36 = &v29;
      LOBYTE(v21) = *((_BYTE *)a1 + 560);
      v38 = &v21;
      v40 = &v24;
      v42 = &v25;
      v29 = v19;
      v37 = 8LL;
      v39 = 1LL;
      v24 = v5;
      v41 = v20;
      v25 = 0x1000000LL;
      v43 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098F23, 0LL, 0LL, 9u, &v30);
    }
  }
LABEL_35:
  if ( dword_1800AB2C0 > 4u )
  {
    v25 = *((_QWORD *)a1 - 4);
    v45 = &v25;
    v47 = &v24;
    v46 = 8LL;
    v24 = v5;
    v48 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800991F8, 0LL, 0LL, 4u, &pData);
  }
LABEL_37:
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v26);
  if ( !v4 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 81) &= ~0x10000000000000uLL;
}
