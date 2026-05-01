/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180036290
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180063E7C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180064AE0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180064CD8 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180065130 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800654E0 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180065678 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        int a2,
        DWORD a3,
        enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  DWORD v7; // edi
  unsigned int v9; // r9d
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  void *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  void *v25; // rdx
  __int64 v26; // r8
  DWORD v27; // eax
  unsigned int v28; // ebx
  int v29; // ecx
  ULONG v31; // ecx
  __int16 v32; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v33; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v38[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+80h] [rbp-80h] BYREF
  void *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  unsigned int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  __int16 *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  _DWORD *v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  int v55; // [rsp+FCh] [rbp-4h]
  DWORD *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  HANDLE Handles[6]; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  if ( WaitForSingleObjectEx(*((HANDLE *)a1 + 1), 0, 0) )
    *((_DWORD *)a1 + 23) &= ~1u;
  v9 = 0;
  v10 = 1;
  do
  {
    if ( (v10 & a2) != 0 && (v9 || (*((_BYTE *)a1 + 92) & 1) == 0) )
    {
      v11 = v7++;
      v38[v11] = v9;
      Handles[v11] = (HANDLE)*((_QWORD *)a1 + v9 + 1);
    }
    if ( (__ROL4__(v10, 1) & a2) != 0 )
    {
      v12 = v9 + 1;
      v13 = (void *)*((_QWORD *)a1 + v12 + 1);
      v14 = v7++;
      v38[v14] = v12;
      Handles[v14] = v13;
    }
    if ( (__ROL4__(v10, 2) & a2) != 0 )
    {
      v15 = v9 + 2;
      v16 = (void *)*((_QWORD *)a1 + v15 + 1);
      v17 = v7++;
      v38[v17] = v15;
      Handles[v17] = v16;
    }
    if ( (__ROL4__(v10, 3) & a2) != 0 )
    {
      v18 = v9 + 3;
      v19 = (void *)*((_QWORD *)a1 + v18 + 1);
      v20 = v7++;
      v38[v20] = v18;
      Handles[v20] = v19;
    }
    if ( (__ROL4__(v10, 4) & a2) != 0 )
    {
      v21 = v9 + 4;
      v22 = (void *)*((_QWORD *)a1 + v21 + 1);
      v23 = v7++;
      v38[v23] = v21;
      Handles[v23] = v22;
    }
    if ( (__ROL4__(v10, 5) & a2) != 0 )
    {
      v24 = v9 + 5;
      v25 = (void *)*((_QWORD *)a1 + v24 + 1);
      v26 = v7++;
      v38[v26] = v24;
      Handles[v26] = v25;
    }
    v9 += 6;
    v10 = __ROL4__(v10, 6);
  }
  while ( v9 < 6 );
  if ( dword_18009B0B0 > 5u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    v32 = v7;
    v54 = 4 * (unsigned __int16)v7;
    v51 = &v32;
    v56 = &v33;
    v52 = 2LL;
    v53 = v38;
    v55 = 0;
    v33 = a3;
    v57 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800886B2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v48 = &unk_1800886BD;
    UserData.Reserved = 2;
    v49 = 51;
    v50 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v27 = WaitForMultipleObjectsEx(v7, Handles, 0, a3, 0);
  if ( v27 >= 0x40 )
  {
    v28 = 258;
    if ( v27 != 258 )
    {
      v28 = 0;
      *(_DWORD *)a4 = v38[0];
    }
  }
  else
  {
    v28 = 0;
    v29 = v38[v27];
    *(_DWORD *)a4 = v29;
    if ( !v29 )
      *((_DWORD *)a1 + 23) |= 1u;
  }
  if ( dword_18009B0B0 > 5u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    v34 = v28;
    v43 = &v34;
    v35 = *(_DWORD *)a4;
    v45 = &v35;
    v44 = 4LL;
    v46 = 4LL;
    *(_DWORD *)&v37.Level = 517;
    v39.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v37.Id = ((unsigned int)&unk_180088793 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v37.Keyword = 1LL;
    v31 = *(unsigned __int16 *)off_18009B0B8;
    v40 = &unk_18008879E;
    v39.Size = v31;
    v39.Reserved = 2;
    v41 = 57;
    v42 = 1;
    EventWriteTransfer(qword_18009B0D0, &v37, 0LL, 0LL, 4u, &v39);
  }
  return v28;
}
