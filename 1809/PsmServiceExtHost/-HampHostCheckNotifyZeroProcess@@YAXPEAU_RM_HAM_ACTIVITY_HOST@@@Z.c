/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EBC8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180011318 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D104 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18002E36C (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // r10d
  char v7; // [rsp+40h] [rbp-39h] BYREF
  int v8; // [rsp+44h] [rbp-35h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  char *v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+98h] [rbp+1Fh]
  int v17; // [rsp+9Ch] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+27h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B0AC, 0LL, 0LL, 2u, &pData);
  v2 = 0;
  LODWORD(v9) = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  HampHostStartProcessPresenceChange(a1);
  if ( (*((_QWORD *)a1 + 79) & 0x2000000000000LL) != 0 )
  {
    HampHostReleaseLockExclusiveEx(a1);
    v3 = *((_QWORD *)a1 - 2);
    v8 = 0;
    (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)(v3 + 40) + 72LL))(
      (char *)a1 + 488,
      *((unsigned int *)a1 + 139),
      (char *)a1 + 24,
      *((unsigned int *)a1 + 140),
      *((_QWORD *)a1 - 4),
      0LL,
      &v8);
    if ( v8 )
    {
      HampHostAcquireLockExclusiveEx(a1, 0);
    }
    else
    {
      HampHostNotifyZeroProcess(a1, 0LL, 0LL, 0LL, &v9);
      v2 = v9;
    }
  }
  *((_QWORD *)a1 + 79) &= ~0x1000000000000uLL;
  RtlWakeAllConditionVariable((char *)a1 + 656);
  HampHostReleaseLockExclusiveEx(a1);
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v4 = *((_QWORD *)a1 - 4);
      v14 = 0;
      v17 = 0;
      v12 = &v9;
      v7 = *((_BYTE *)a1 + 560);
      v15 = &v7;
      v9 = v4;
      v13 = v5;
      v16 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AC04, 0LL, 0LL, 5u, &v10);
    }
  }
}
