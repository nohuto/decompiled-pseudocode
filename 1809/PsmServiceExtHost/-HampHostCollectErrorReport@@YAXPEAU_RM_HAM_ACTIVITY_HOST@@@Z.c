/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069548
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x18000CC30 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180066418 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180073E0C (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // r15d
  int v3; // esi
  void *v4; // rdi
  int v6; // r12d
  unsigned int v7; // r13d
  BOOL IsSuspendWaiter; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  BOOL v13; // eax
  int v14; // edx
  int v15; // eax
  unsigned int i; // esi
  __int64 v17; // r14
  PVOID Heap; // rax
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  _DWORD *v24; // rcx
  __int64 v25; // r8
  int *v26; // rdx
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rax
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h]
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-90h] BYREF
  int *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  char *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  int *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v56; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+11Ch] [rbp+1Ch]
  int *v60; // [rsp+120h] [rbp+20h]
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v6 = 1;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B26E, 0LL, 0LL, 2u, &pData);
  v7 = *((unsigned __int16 *)a1 + 316);
  v33 = *((_DWORD *)a1 + 204);
  if ( (*((_DWORD *)a1 + 158) & 0x30000) != 0x20000LL )
  {
    v31 = 0;
LABEL_44:
    if ( hProvider > 4u )
    {
      v29 = *((_QWORD *)a1 - 4);
      v59 = 0;
      v62 = 0;
      v38 = v29;
      v57 = &v38;
      v60 = (int *)&v36;
      v58 = 8;
      v36 = v7;
      v61 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AEA8, 0LL, 0LL, 4u, &v56);
    }
    goto LABEL_46;
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  v9 = *((_DWORD *)a1 + 140);
  if ( v9 != 2 )
  {
    if ( v9 != 4 || (*((_BYTE *)a1 + 1124) & 0x40) != 0 )
      goto LABEL_14;
    *((_DWORD *)a1 + 282) |= 0x40u;
    goto LABEL_13;
  }
  v10 = *((_DWORD *)a1 + 281);
  if ( (v10 & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 282) |= 0x180u;
LABEL_13:
    v3 = 1;
    goto LABEL_14;
  }
  if ( (v10 & 0x100) == 0 )
  {
    *((_DWORD *)a1 + 282) |= 0x100u;
    goto LABEL_13;
  }
LABEL_14:
  HampHostCheckUpdateSuspendWaitState(a1, IsSuspendWaiter);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v6 = 0;
  if ( v3 )
  {
    v11 = *((_DWORD *)a1 + 140);
    if ( v11 == 2 )
    {
      v31 = RmpSystemChangePsmApplicationState((__int64)a1 - 64, 2);
    }
    else if ( v11 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 1);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v13 = HampHostIsSuspendWaiter(a1, v12);
    *((_DWORD *)a1 + 282) = 0;
    v14 = v13;
    v15 = *((_DWORD *)a1 + 140);
    if ( v15 == 2 )
    {
      *((_DWORD *)a1 + 281) |= 0x180u;
    }
    else if ( v15 == 4 )
    {
      *((_DWORD *)a1 + 281) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v14);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  for ( i = 1; ; i = v32 )
  {
    v17 = i;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * i);
    v4 = Heap;
    if ( !Heap )
    {
      v2 = 10;
      v31 = -1073741801;
      goto LABEL_41;
    }
    v19 = *((_QWORD *)a1 - 2);
    v20 = *((_QWORD *)a1 - 4);
    v21 = *((unsigned int *)a1 + 140);
    v22 = *((unsigned int *)a1 + 139);
    v32 = i;
    v23 = (*(__int64 (__fastcall **)(char *, __int64, char *, __int64, __int64, PVOID, unsigned int *))(*(_QWORD *)(v19 + 40) + 72LL))(
            (char *)a1 + 488,
            v22,
            (char *)a1 + 24,
            v21,
            v20,
            Heap,
            &v32);
    v31 = v23;
    if ( v23 >= 0 )
      break;
    if ( v23 != -2147483643 )
    {
      v2 = 20;
      goto LABEL_30;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  v25 = v32;
  if ( v32 )
  {
    if ( i )
    {
      v24 = v4;
      v26 = (int *)v4;
      do
      {
        v27 = *v26;
        v26 += 2;
        *v24++ = v27;
        --v17;
      }
      while ( v17 );
      v25 = v32;
    }
    v23 = HampSystemReportHang(v24, v4, v25, v7, v33);
    v31 = v23;
    if ( v23 >= 0 )
    {
      v31 = 0;
      goto LABEL_44;
    }
    v2 = 30;
  }
LABEL_30:
  if ( v23 >= 0 )
    goto LABEL_44;
LABEL_41:
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
    {
      v42 = 0;
      v45 = 0;
      v40 = &v31;
      v41 = 4;
      v43 = &v34;
      v34 = v2;
      v44 = 4;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v28 = *((_QWORD *)a1 - 4);
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v47 = &v37;
      v30 = *((_BYTE *)a1 + 560);
      v50 = &v30;
      v53 = (int *)&v35;
      v37 = v28;
      v48 = 8;
      v51 = 1;
      v35 = v7;
      v54 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B3E5, 0LL, 0LL, 8u, &v39);
    }
    goto LABEL_44;
  }
LABEL_46:
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( !v6 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 79) &= ~0x10000000000000uLL;
}
