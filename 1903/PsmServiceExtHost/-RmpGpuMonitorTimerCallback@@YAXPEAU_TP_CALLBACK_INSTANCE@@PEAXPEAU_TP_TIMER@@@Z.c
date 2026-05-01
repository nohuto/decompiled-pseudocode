/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180070D30
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000C2B4 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000C328 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044B68 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044BD0 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800705E8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180070BEC (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  char *v5; // rbx
  int v6; // eax
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v8; // rax
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_ACTIVITY_HOST *v10; // rdi
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  DWORD v13; // ebx
  __int64 First; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+38h] [rbp-91h]
  int v16; // [rsp+3Ch] [rbp-8Dh]
  _BYTE v17[144]; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+7h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v4, &unk_180095B41, 0LL, 0LL, 2u, &pData);
  v5 = a2 + 48;
  RmpAcquireGlobalLock();
  v6 = *((_DWORD *)a2 + 23);
  if ( (v6 & 1) == 0 )
    goto LABEL_15;
  IsGpuBusy = RmpGpuMonitorIsGpuBusy((struct _RM_GPU_MONITOR *)(a2 + 48));
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(a2 + 16),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&pData);
    v10 = Next;
    if ( !Next )
      break;
    v16 = 0;
    v15 = 2;
    First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
    while ( 1 )
    {
      v8 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
      if ( !v8 )
        break;
      if ( (*((_BYTE *)v8 + 1380) & 8) != 0 )
      {
        RmpActivityHostCheckAndUpdateGpuInterference(v10, IsGpuBusy);
        break;
      }
    }
    RmpObjectRelease((char *)v10);
  }
  RtlReleaseSRWLockShared(pData.Ptr + 16);
  v6 = *((_DWORD *)v5 + 11);
  if ( (v6 & 1) != 0 )
  {
    TpSetTimer(*(_QWORD *)v5, v5 + 8, 0LL, *((unsigned int *)v5 + 10));
  }
  else
  {
LABEL_15:
    *((_DWORD *)v5 + 11) = v6 & 0xFFFFFFFD;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite(v11, &unk_180095B6F, 0LL, 0LL, 2u, &pData);
  }
  RmpReleaseGlobalLock();
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite(v12, &unk_180095B94, 0LL, 0LL, 2u, &pData);
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
  }
}
