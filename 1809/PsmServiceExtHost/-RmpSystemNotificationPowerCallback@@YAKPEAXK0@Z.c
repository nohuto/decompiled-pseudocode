/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180040580
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18003E0A0 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180040740 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180058C40 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180058D48 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  unsigned __int64 v10; // r8
  ExecutionModel::ResourceManager *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  int v13; // eax
  DWORD v14; // ebx
  int v16; // edx
  unsigned int v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh]
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h] BYREF
  char v21[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  int *v23; // [rsp+F8h] [rbp-10h]
  int v24; // [rsp+100h] [rbp-8h]
  int v25; // [rsp+104h] [rbp-4h]
  unsigned int *v26; // [rsp+108h] [rbp+0h]
  int v27; // [rsp+110h] [rbp+8h]
  int v28; // [rsp+114h] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  RmpAcquireGlobalLock();
  v6 = *((_DWORD *)a1 + 164);
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  if ( v7 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v8 = v6 & 0xFFFFFFFD;
    else
      v8 = v6 | 2;
  }
  else
  {
    v8 = v6 | 1;
    if ( !*((_DWORD *)a3 + 5) )
      v8 = *((_DWORD *)a1 + 164) & 0xFFFFFFFE;
  }
  v17 = *((_DWORD *)a1 + 164);
  v18 = v8;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v5,
    (int (*)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v17);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = *((unsigned int *)a1 + 131);
  v11 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 336);
  if ( (_DWORD)v10 )
  {
    v16 = (v18 >> 1) & 1;
    if ( ((v17 >> 1) & 1) != v16 )
    {
      if ( v16 )
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
          v11,
          *((unsigned int *)a1 + 131),
          (struct ExecutionModel::BaseResourceSet *)v10);
      }
      else
      {
        *((_QWORD *)v11 + 8) -= v10;
        if ( (*(_BYTE *)(*((_QWORD *)v11 + 6) + 1392LL) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v11, v10);
      }
    }
  }
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v13 = *((_DWORD *)a1 + 164);
    v25 = 0;
    v28 = 0;
    v19 = v13;
    v23 = &v19;
    v26 = &v20;
    v24 = 4;
    v20 = v8;
    v27 = 4;
    TlgWrite(v12, &unk_180086DC2, 0LL, 0LL, 4u, &pData);
  }
  *((_DWORD *)a1 + 164) = v8;
  RmpReleaseGlobalLock();
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  return 0LL;
}
