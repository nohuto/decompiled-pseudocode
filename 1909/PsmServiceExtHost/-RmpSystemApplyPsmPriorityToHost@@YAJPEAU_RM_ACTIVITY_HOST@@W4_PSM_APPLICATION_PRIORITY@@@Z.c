/*
 * XREFs of ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180038C44
 * Callers:
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180038AE0 (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 * Callees:
 *     ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180038DA0 (-SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATIO.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemApplyPsmPriorityToHost(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v6; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  unsigned int *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  unsigned int *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  v2 = *(_QWORD *)(a1 + 48);
  v7 = a2;
  result = ModernResourceEnforcer::SetApplicationPriority(
             *(ModernResourceEnforcer **)(v2 + 40),
             (struct _RM_ACTIVITY_HOST *)a1,
             (enum _PSM_APPLICATION_PRIORITY *)&v7);
  v6 = result;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v16 = 4LL;
    v15 = &v6;
    v9 = *(_QWORD *)(a1 + 32);
    v17 = &v9;
    v19 = &v8;
    v18 = 8LL;
    v8 = a2;
    v20 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v12 = &unk_180096CDE;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 80;
    v7 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    return v6;
  }
  return result;
}
