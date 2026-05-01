/*
 * XREFs of RmpTracingControlCallback @ 0x18003DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000B384 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B3F0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180012360 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180037910 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800379A8 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ @ 0x180061D1C (-LogRundownEvent@ResourceSet@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall RmpTracingControlCallback(
        LPCGUID SourceId,
        ULONG IsEnabled,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        char *CallbackContext)
{
  struct _RM_OBJECT_HEADER *i; // rax
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v10; // r9d
  ExecutionModel::ResourceSet *Next; // rax
  __int64 v12; // rbx
  DWORD v13; // ebx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[5]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  int *v22; // [rsp+140h] [rbp+40h]
  __int64 v23; // [rsp+148h] [rbp+48h]
  __int64 *v24; // [rsp+150h] [rbp+50h]
  __int64 v25; // [rsp+158h] [rbp+58h]
  __int64 v26; // [rsp+160h] [rbp+60h]
  __int64 v27; // [rsp+168h] [rbp+68h]
  __int64 v28; // [rsp+170h] [rbp+70h]
  __int64 v29; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v30; // [rsp+180h] [rbp+80h]
  __int64 v31; // [rsp+188h] [rbp+88h]

  if ( IsEnabled == 2 )
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
    RmpAcquireGlobalLock();
    RmpObjectTableEnumerationBegin(
      (struct _RM_OBJECT_TABLE *)(CallbackContext + 16),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v18);
    for ( i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v18);
          ;
          i = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v18) )
    {
      v12 = (__int64)i;
      if ( !i )
        break;
      if ( (*((_BYTE *)i + 812) & 1) == 0 )
      {
        v8 = RmpActivityHostQueryCommit(i, 0LL, 0LL, &v15);
        v9 = v15;
        if ( v8 < 0 )
          v9 = 0LL;
        v15 = v9;
        if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)(v12 + 88));
          v10 = *(_DWORD *)(v12 + 624);
          v22 = &v14;
          v17 = *(_QWORD *)(v12 + 32);
          v24 = &v17;
          v26 = v12 + 1106;
          v28 = v12 + 1104;
          v30 = &v15;
          v14 = v10;
          v23 = 4LL;
          v25 = 8LL;
          v27 = 2LL;
          v29 = 2LL;
          v31 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180084AA0, 0LL, 0LL, 8u, &pData);
        }
        v16[1] = 3LL;
        v16[0] = RmpActivityHostEnumerateResourceSetGetFirst(v12, 3, 0);
        while ( 1 )
        {
          Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v16);
          if ( !Next )
            break;
          ExecutionModel::ResourceSet::LogRundownEvent(Next);
        }
      }
      RmpObjectRelease((struct _RM_OBJECT_HEADER *)v12);
    }
    RtlReleaseSRWLockShared(v18[0] + 16LL);
    RmpReleaseGlobalLock();
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
}
