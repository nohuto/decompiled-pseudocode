/*
 * XREFs of ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180063C40
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000B384 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B3F0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180037910 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800379A8 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800634F8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z @ 0x180063AFC (-RmpGpuMonitorIsGpuBusy@@YAKPEAU_RM_GPU_MONITOR@@@Z.c)
 */

void __fastcall RmpGpuMonitorTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_TIMER *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  char *v5; // rbx
  int v6; // eax
  BOOL IsGpuBusy; // esi
  struct ExecutionModel::ResourceSet *v8; // rax
  struct _RM_ACTIVITY_HOST *Next; // rdi
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  DWORD v12; // ebx
  _QWORD v13[2]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+7h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite(v4, &unk_180087E39, 0LL, 0LL, 2u, &pData);
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
    if ( !Next )
      break;
    v13[1] = 2LL;
    v13[0] = RmpActivityHostEnumerateResourceSetGetFirst((__int64)Next, 2, 0);
    while ( 1 )
    {
      v8 = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
      if ( !v8 )
        break;
      if ( (*((_BYTE *)v8 + 1500) & 8) != 0 )
      {
        RmpActivityHostCheckAndUpdateGpuInterference(Next, IsGpuBusy);
        break;
      }
    }
    RmpObjectRelease(Next);
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
    if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      TlgWrite(v10, &unk_180087E67, 0LL, 0LL, 2u, &pData);
  }
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite(v11, &unk_180087E8C, 0LL, 0LL, 2u, &pData);
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
}
