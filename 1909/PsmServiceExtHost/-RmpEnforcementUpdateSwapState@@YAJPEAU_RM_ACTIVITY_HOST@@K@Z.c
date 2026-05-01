/*
 * XREFs of ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180012490
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800121A8 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18007ED88 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall RmpEnforcementUpdateSwapState(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v4; // eax
  int v5; // ebx
  bool UserData; // [rsp+28h] [rbp-41h]
  _DWORD v8[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-9h] BYREF
  void *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  __int64 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  _DWORD *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]

  UserData = a2 != 0;
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, bool))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                               + 56LL))(
         (char *)a1 + 552,
         *((unsigned int *)a1 + 155),
         (char *)a1 + 88,
         *((unsigned int *)a1 + 156),
         *((_QWORD *)a1 + 4),
         UserData);
  v5 = v4;
  if ( *((_DWORD *)a1 + 156) != 8 && v4 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( dword_1800AB2C0 > 4u )
  {
    v9 = *((_QWORD *)a1 + 4);
    v15 = &v9;
    v17 = v8;
    v16 = 8LL;
    v8[0] = a2;
    v18 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    v11.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    v11.Size = *(unsigned __int16 *)off_1800AB2C8;
    v12 = &unk_180096A5B;
    v11.Reserved = 2;
    v13 = 33;
    v14 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &v11);
  }
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
