/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180018A10
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180018D90 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, UCHAR a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r9
  _QWORD *i; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct _RM_OBJECT_HEADER *v18; // rcx
  DWORD v19; // edi
  _QWORD *v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  char *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  char *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]

  if ( (*((_BYTE *)this + 1404) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, a2, 0LL) )
    {
      v19 = GetTickCount() - *((_DWORD *)this + 473);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 179) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v24);
      if ( dword_18009B0B0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000001uLL) )
        {
          v21 = *((_QWORD *)this + 234);
          v34 = &v21;
          v36 = &v26;
          v38 = &v25;
          v22 = v19;
          v40 = &v22;
          v35 = 8LL;
          v37 = 8LL;
          v39 = 8LL;
          v41 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180087426, 0LL, 0LL, 6u, &pData);
        }
      }
    }
  }
  v3 = *((_QWORD *)this + 179);
  v4 = *(_QWORD *)(v3 + 80);
  v5 = (_QWORD *)(v3 + 80);
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v5 )
      goto LABEL_25;
    v20 = *(_QWORD **)(v3 + 88);
    if ( (_QWORD *)*v20 != v5 )
      goto LABEL_25;
    *v20 = v4;
    *(_QWORD *)(v4 + 8) = v20;
    *v5 = 0LL;
    *(_QWORD *)(v3 + 88) = 0LL;
  }
  v6 = *(__int64 **)(v3 + 48);
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)v3);
  v7 = *v6;
  v6[179] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v7 + 16))(v6);
  v8 = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 48) = 0LL;
  v9 = *(_QWORD *)(v8 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v8 + 24) + 552LL);
  v10 = *(_QWORD *)(v3 + 8) & (-1LL << (*(_DWORD *)(v9 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v9 + 8)
                     + 8
                     * ((HIBYTE(v10)
                       + 37
                       * (BYTE6(v10)
                        + 37
                        * (BYTE5(v10)
                         + 37
                         * (BYTE4(v10)
                          + 37
                          * (((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v9 + 4) & 0x1F))) >> 24)
                           + 37
                           * ((unsigned __int8)((*(_DWORD *)(v3 + 8) & (unsigned int)(-1 << (*(_DWORD *)(v9 + 4) & 0x1F))) >> 16)
                            + 37
                            * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v3 + 8) & (-1 << (*(_DWORD *)(v9 + 4) & 0x1F))) >> 8)
                             + 37 * ((unsigned __int8)v10 + 11623883)))))))) & ((*(_DWORD *)(v9 + 4) >> 5) - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( *i == v3 )
    {
      *i = *(_QWORD *)v3;
      --*(_DWORD *)v9;
      *(_QWORD *)v3 |= 0x8000000000000002uLL;
      break;
    }
  }
  *(_DWORD *)(v3 + 24) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v9 + 16);
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)v3);
  *((_QWORD *)this + 179) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v12 = *((_QWORD *)this + 180) + 24 * (*((int *)this + 362) + 44LL);
  v13 = (_QWORD *)((char *)this + 1416);
  v14 = *((_QWORD *)this + 177);
  if ( *(ExecutionModel::ResourceSet **)(v14 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1416)
    || (v15 = (_QWORD *)*((_QWORD *)this + 178), (_QWORD *)*v15 != v13) )
  {
LABEL_25:
    __fastfail(3u);
  }
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  --*(_DWORD *)(v12 + 16);
  v16 = *(_QWORD *)this;
  *((_DWORD *)this + 362) = 2;
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(v16 + 16))(this);
  (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL))(this);
  v17 = *((_QWORD *)this + 229);
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    *((_QWORD *)this + 229) = 0LL;
  }
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 9) != 0 && (qword_18009B0C8 & 9) == qword_18009B0C8 )
  {
    v32 = 8LL;
    v31 = (char *)this + 1872;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180087516 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v28 = &unk_180087521;
    UserData.Reserved = 2;
    v29 = 43;
    v30 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v18 = (struct _RM_OBJECT_HEADER *)*((_QWORD *)this + 180);
  *((_BYTE *)this + 12) = 0;
  RmpObjectRelease(v18);
  *((_QWORD *)this + 180) = 0LL;
}
