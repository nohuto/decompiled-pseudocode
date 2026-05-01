/*
 * XREFs of ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002F2C8
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180019680 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000E2C0 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012D40 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostCheckNotifyZeroProcess(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // esi
  unsigned int v3; // edx
  int v4; // r14d
  unsigned int v5; // edx
  __int64 v6; // rax
  char *v7; // rdi
  __int64 v8; // rdx
  int v9; // r9d
  char v11; // [rsp+40h] [rbp-49h] BYREF
  int v12; // [rsp+44h] [rbp-45h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  char *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp+17h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098BFF, 0LL, 0LL, 2u, &pData);
  v2 = 0;
  LODWORD(v13) = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  if ( (*((_QWORD *)a1 + 81) & 0x800000000LL) != 0 )
  {
    v4 = 1;
    v7 = (char *)a1 + 680;
  }
  else
  {
    v4 = 0;
    HampHostStartProcessPresenceChange(a1);
    if ( (*((_QWORD *)a1 + 81) & 0x2000000000000LL) != 0 )
    {
      HampHostReleaseLockExclusiveEx(a1, v5);
      v6 = *((_QWORD *)a1 - 2);
      v12 = 0;
      (*(void (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)(v6 + 40) + 72LL))(
        (char *)a1 + 488,
        *((unsigned int *)a1 + 139),
        (char *)a1 + 24,
        *((unsigned int *)a1 + 140),
        *((_QWORD *)a1 - 4),
        0LL,
        &v12);
      if ( v12 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
      }
      else
      {
        HampHostNotifyZeroProcess((__int64)a1, 0, 0, 0, &v13);
        v2 = v13;
      }
    }
    v7 = (char *)a1 + 680;
    *((_QWORD *)a1 + 81) &= ~0x1000000000000uLL;
    RtlWakeAllConditionVariable((char *)a1 + 680);
  }
  HampHostReleaseLockExclusiveEx(a1, v3);
  if ( v4 )
    RtlWakeAllConditionVariable(v7);
  if ( v2 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)a1 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64));
    RmpReleaseGlobalLock();
  }
  if ( dword_1800AB2C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v8 = *((_QWORD *)a1 - 4);
      v18 = 0;
      v21 = 0;
      v16 = &v13;
      v11 = *((_BYTE *)a1 + 560);
      v19 = &v11;
      v13 = v8;
      v17 = v9;
      v20 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098CA4, 0LL, 0LL, 5u, &v14);
    }
  }
}
