/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180037130
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180044F30 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180070F6C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180071BD0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180071DC8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180072228 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800725D8 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180072770 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        int a2,
        DWORD a3,
        enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  __int64 v8; // rdi
  int v9; // eax
  unsigned int i; // r9d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  DWORD v16; // eax
  unsigned int v17; // ebx
  int v18; // ecx
  __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v26[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-80h] BYREF
  void *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  unsigned int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int16 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  _DWORD *v41; // [rsp+F0h] [rbp-10h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  unsigned int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  HANDLE Handles[6]; // [rsp+110h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( WaitForSingleObjectEx(*((HANDLE *)a1 + 1), 0, 0) )
    *((_DWORD *)a1 + 23) &= ~1u;
  v9 = 1;
  for ( i = 0; i < 6; i += 6 )
  {
    if ( (v9 & a2) != 0 && (i || (*((_BYTE *)a1 + 92) & 1) == 0) )
    {
      v26[v8] = i;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + i + 1);
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__ROL4__(v9, 1) & a2) != 0 )
    {
      v11 = i + 1;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + v11 + 1);
      v26[v8] = v11;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__ROL4__(v9, 2) & a2) != 0 )
    {
      v12 = i + 2;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + v12 + 1);
      v26[v8] = v12;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__ROL4__(v9, 3) & a2) != 0 )
    {
      v13 = i + 3;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + v13 + 1);
      v26[v8] = v13;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__ROL4__(v9, 4) & a2) != 0 )
    {
      v14 = i + 4;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + v14 + 1);
      v26[v8] = v14;
      v8 = (unsigned int)(v8 + 1);
    }
    if ( (__ROL4__(v9, 5) & a2) != 0 )
    {
      v15 = i + 5;
      Handles[v8] = (HANDLE)*((_QWORD *)a1 + v15 + 1);
      v26[v8] = v15;
      v8 = (unsigned int)(v8 + 1);
    }
    v9 = __ROL4__(v9, 6);
  }
  if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v20 = v8;
    v42 = 4 * (unsigned __int16)v8;
    v39 = &v20;
    v44 = &v21;
    v40 = 2LL;
    v41 = v26;
    v43 = 0;
    v21 = a3;
    v45 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v36 = &unk_1800963C5;
    UserData.Reserved = 2;
    v37 = 51;
    v38 = 1;
    v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v16 = WaitForMultipleObjectsEx(v8, Handles, 0, a3, 0);
  if ( v16 >= 0x40 )
  {
    v17 = 258;
    if ( v16 != 258 )
    {
      v17 = 0;
      *(_DWORD *)a4 = v26[0];
    }
  }
  else
  {
    v17 = 0;
    v18 = v26[v16];
    *(_DWORD *)a4 = v18;
    if ( !v18 )
      *((_DWORD *)a1 + 23) |= 1u;
  }
  if ( hProvider > 5u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v23 = v17;
    v31 = &v23;
    v22 = *(_DWORD *)a4;
    v33 = &v22;
    v32 = 4LL;
    v34 = 4LL;
    *(_DWORD *)&v25.Level = 517;
    v27.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v25.Id = 184549376;
    v25.Keyword = 1LL;
    v27.Size = *(unsigned __int16 *)off_1800AB288;
    v28 = &unk_1800964A6;
    v27.Reserved = 2;
    v29 = 57;
    v30 = 1;
    v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &v25, 0LL, 0LL, 4u, &v27);
  }
  return v17;
}
