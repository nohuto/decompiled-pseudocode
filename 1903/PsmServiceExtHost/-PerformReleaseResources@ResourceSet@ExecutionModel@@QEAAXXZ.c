/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x18001B410
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001B930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001B610 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18001B7A0 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001D960 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  DWORD v9; // edi
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+68h] [rbp-98h] BYREF
  char v15; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v17; // [rsp+B0h] [rbp-50h]
  int v18; // [rsp+B8h] [rbp-48h]
  int v19; // [rsp+BCh] [rbp-44h]
  char *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v23; // [rsp+F0h] [rbp-10h]
  __int64 v24; // [rsp+F8h] [rbp-8h]
  char *v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  char *v27; // [rsp+110h] [rbp+10h]
  __int64 v28; // [rsp+118h] [rbp+18h]
  __int64 *v29; // [rsp+120h] [rbp+20h]
  __int64 v30; // [rsp+128h] [rbp+28h]

  if ( (*((_BYTE *)this + 1284) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, a2, 0LL) )
    {
      v9 = GetTickCount() - *((_DWORD *)this + 443);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 164) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v13);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v10 = *((_QWORD *)this + 219);
          v23 = &v10;
          v25 = &v15;
          v27 = &v14;
          v11 = v9;
          v29 = &v11;
          v24 = 8LL;
          v26 = 8LL;
          v28 = 8LL;
          v30 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800951BF, 0LL, 0LL, 6u, &pData);
        }
      }
    }
  }
  RmpResourceSetReleaseResources(*((PVOID *)this + 164));
  *((_QWORD *)this + 164) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v3 = *((_QWORD *)this + 165) + 24LL * *((int *)this + 332);
  v4 = (_QWORD *)((char *)this + 1296);
  v5 = *((_QWORD *)this + 162);
  if ( *(ExecutionModel::ResourceSet **)(v5 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1296)
    || (v6 = (_QWORD *)*((_QWORD *)this + 163), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  --*(_DWORD *)(v3 + 1128);
  v7 = *(_QWORD *)this;
  *((_DWORD *)this + 332) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v7 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v8 = *((_QWORD *)this + 214);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 214) = 0LL;
  }
  *((_QWORD *)this + 216) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  if ( hProvider > 4u && (byte_1800AB290 & 9) != 0 && (qword_1800AB298 & 9) == qword_1800AB298 )
  {
    v21 = 8LL;
    v20 = (char *)this + 1752;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v17 = &unk_180095389;
    UserData.Reserved = 2;
    v18 = 43;
    v19 = 1;
    LODWORD(v10) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  *((_BYTE *)this + 12) = 0;
}
