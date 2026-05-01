/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18004206C
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180041FAC (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001A1D8 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001A340 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18003C130 (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x18004256C (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 *     ?HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042A3C (-HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180042AA4 (-HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  int v2; // r9d
  __int64 result; // rax
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v8; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[384]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 (__fastcall *v12)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+1F8h] [rbp+F8h]
  int *v13; // [rsp+200h] [rbp+100h]
  int v14; // [rsp+208h] [rbp+108h]
  int v15; // [rsp+20Ch] [rbp+10Ch]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v10);
  v6 = CreateResourcePolicyStoreClient(&v8);
  v2 = v6;
  if ( v6 < 0 )
  {
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    {
      v15 = 0;
      v13 = &v6;
      v14 = 4;
      TlgWrite(v5, &unk_18008C1D8, 0LL, 0LL, 3u, &pData);
      v2 = v6;
    }
    if ( v2 < 0 )
      return 3221225473LL;
  }
  else
  {
    *((_QWORD *)a1 + 36) = v8;
  }
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 296,
             SystemStateChangedWnfName,
             0LL,
             HampManagerSystemStateChangedCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result < 0 )
    return result;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
    (char *)a1 + 304,
    DplKeyStateChangedWnfName,
    0LL,
    HampManagerDplKeyStateChangedCallback,
    a1,
    0LL,
    0,
    0);
  memset_0(&pData, 0, 0x20uLL);
  LODWORD(pData.Ptr) = 1;
  *(_QWORD *)&pData.Size = HampPdcEnterExitPlmPhase;
  v12 = HampPdcControlCallback;
  result = HampSystemNotificationClientRegister(v4, &pData, (char *)a1 + 352, (char *)a1 + 360);
  if ( (int)result < 0 )
    return result;
  result = HampSlsStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 520));
  if ( (int)result < 0 )
    return result;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"O:SYD:(A;;GA;;;SY)",
          1u,
          (PSECURITY_DESCRIPTOR *)a1 + 101,
          &SecurityDescriptorSize) )
    return 3221225473LL;
  result = NtCreateWnfStateName(&v9, 2LL, 0LL);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 100) = v9;
    result = HampOplockWatchStart(a1);
    if ( (int)result >= 0 )
    {
      result = HampRpGetActivityResourceSetInfo(
                 *((void **)a1 + 36),
                 L"UiPausing",
                 (struct ExecutionModel::_ResourceSetInfo *)v10);
      if ( (int)result >= 0 )
      {
        HampRmPopulateExternalResourceAccessData((struct ExecutionModel::_ResourceSetInfo *)v10, (ULONG *)a1 + 192);
        return 0LL;
      }
    }
  }
  return result;
}
