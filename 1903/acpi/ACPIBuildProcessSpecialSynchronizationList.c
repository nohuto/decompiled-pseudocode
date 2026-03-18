/*
 * XREFs of ACPIBuildProcessSpecialSynchronizationList @ 0x1C001CC84
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001C760 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001CEA0 (ACPIBuildProcessGenericComplete.c)
 */

__int64 ACPIBuildProcessSpecialSynchronizationList()
{
  PSLIST_ENTRY v0; // rdi
  char v1; // bl
  PSLIST_ENTRY v2; // rsi
  int Next; // eax
  PSLIST_ENTRY v5; // rdi
  PSLIST_ENTRY v6; // rsi
  const char *v7; // r10
  const char *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  const char *v13; // r11
  const char *v14; // r8
  __int64 v15; // r10
  __int64 v16; // rdx
  char v17; // [rsp+80h] [rbp+8h]

  v0 = AcpiBuildSpecialSynchronizationList;
  v1 = 1;
  v17 = 1;
  if ( AcpiBuildSpecialSynchronizationList == (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
    goto LABEL_23;
  do
  {
    v2 = v0;
    v0 = v0->Next;
    Next = (int)v2[5].Next;
    if ( (Next & 8) != 0 && (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList
      || (Next & 0x20) != 0 && AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList
      || (Next & 1) != 0 && (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList
      || (Next & 2) != 0 && (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList
      || (Next & 0x10) != 0 && (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList
      || (Next & 4) != 0 && (__int64 *)AcpiBuildPowerResourceList != &AcpiBuildPowerResourceList )
    {
      v1 = 0;
    }
    else
    {
      if ( (Next & 0x80u) != 0 && (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
        v1 = 0;
      if ( (Next & 0x40) == 0 )
      {
        v12 = (_QWORD *)*((_QWORD *)&v2[2].Next + 1);
        v13 = (const char *)&unk_1C006FE7D;
        v14 = (const char *)&unk_1C006FE7D;
        LOBYTE(v15) = 0;
        if ( v12 )
        {
          v16 = v12[1];
          v15 = *((_QWORD *)&v2[2].Next + 1);
          if ( (v16 & 0x200000000000LL) != 0 )
          {
            v13 = (const char *)v12[70];
            if ( (v16 & 0x400000000000LL) != 0 )
              v14 = (const char *)v12[71];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x45u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            Next,
            v15,
            v13,
            v14);
        ACPIBuildProcessGenericComplete(v2);
      }
    }
  }
  while ( v0 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
  v17 = v1;
  if ( v1 )
  {
LABEL_23:
    v5 = AcpiBuildSpecialSynchronizationList;
    if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
    {
      do
      {
        v6 = v5;
        v7 = (const char *)&unk_1C006FE7D;
        v5 = v5->Next;
        v8 = (const char *)&unk_1C006FE7D;
        LOBYTE(v9) = 0;
        v10 = (_QWORD *)*((_QWORD *)&v6[2].Next + 1);
        if ( v10 )
        {
          v11 = v10[1];
          v9 = *((_QWORD *)&v6[2].Next + 1);
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v7 = (const char *)v10[70];
            if ( (v11 & 0x400000000000LL) != 0 )
              v8 = (const char *)v10[71];
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x46u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            (char)v6[5].Next,
            v9,
            v7,
            v8);
        ACPIBuildProcessGenericComplete(v6);
      }
      while ( v5 != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList );
      v1 = v17;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
