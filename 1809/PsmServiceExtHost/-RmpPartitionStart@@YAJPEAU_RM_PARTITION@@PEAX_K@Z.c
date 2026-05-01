/*
 * XREFs of ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x180046BD0
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001B710 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z @ 0x180046CD8 (-RmpMemoryMonitorStartThread@@YAJPEAU_RM_MEMORY_MONITOR_DATA@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180046D88 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionStart(struct _RM_PARTITION *a1, void *a2, __int64 a3)
{
  unsigned int v4; // r9d
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r10d
  int started; // [rsp+30h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *p_started; // [rsp+60h] [rbp+27h]
  UINT32 v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]
  __int64 v16; // [rsp+B0h] [rbp+77h] BYREF

  v16 = a3;
  *((_QWORD *)a1 + 27) = a3;
  started = RmpSystemDuplicateHandle(a2, 1u, (PHANDLE)a1 + 4);
  v4 = started;
  if ( started >= 0 )
  {
    started = RmpMemoryMonitorStartThread((struct _RM_PARTITION *)((char *)a1 + 40));
    v4 = started;
    if ( started >= 0 )
    {
      *((_DWORD *)a1 + 56) &= ~2u;
      *((_DWORD *)a1 + 56) |= 1u;
      v4 = 0;
      started = 0;
    }
  }
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v12 = 0;
    v15 = 0;
    p_started = &started;
    v13 = &v16;
    v11 = cData;
    v14 = 8;
    TlgWrite(v5, &unk_180086EDE, 0LL, 0LL, cData, &pData);
    return (unsigned int)started;
  }
  return v4;
}
