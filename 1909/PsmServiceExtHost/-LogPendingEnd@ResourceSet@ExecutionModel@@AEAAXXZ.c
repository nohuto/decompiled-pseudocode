/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001D730
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001D960 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[24]; // [rsp+60h] [rbp-A0h] BYREF
  char v15; // [rsp+78h] [rbp-88h] BYREF
  char v16; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v18; // [rsp+C0h] [rbp-40h]
  int v19; // [rsp+C8h] [rbp-38h]
  int v20; // [rsp+CCh] [rbp-34h]
  __int64 *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  int *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  char *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  char *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  int *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]
  int *v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, a2, 0LL) )
  {
    RmpSystemMemoryMetricsQuery(
      *(struct _RM_PARTITION **)(*((_QWORD *)this + 164) + 64LL),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v14);
    v3 = *((_DWORD *)this + 441);
    if ( v3 <= *((_DWORD *)this + 442) )
      v3 = *((_DWORD *)this + 442);
    RtlQueryUnbiasedInterruptTime(&v11);
    v4 = *((_DWORD *)this + 440);
    v5 = *((_DWORD *)this + 441) - v4;
    v6 = *((_DWORD *)this + 442) - v4;
    if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
    {
      v12 = *((_QWORD *)this + 219);
      v21 = &v12;
      v7 = *((_DWORD *)this + 334);
      v23 = &v7;
      v25 = &v16;
      v27 = &v15;
      v29 = &v8;
      v31 = &v9;
      v33 = &v10;
      v22 = 8LL;
      v24 = 4LL;
      v26 = 8LL;
      v28 = 8LL;
      v8 = v5;
      v30 = 4LL;
      v9 = v11 / 0x2710 - v3;
      v32 = 4LL;
      v10 = v6;
      v34 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800AB288;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800AB288;
      v18 = &unk_1800953C0;
      UserData.Reserved = 2;
      v19 = 160;
      v20 = 1;
      LODWORD(v11) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
}
