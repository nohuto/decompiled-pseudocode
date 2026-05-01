/*
 * XREFs of ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042F60
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042EAC (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001CB78 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001CC90 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTERNAL_RESOURCE_MASK@@@Z @ 0x18003C3DC (-HampRmPopulateExternalResourceAccessData@@YAXPEAU_ResourceSetInfo@ExecutionModel@@PEAU_HAM_EXTE.c)
 *     ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x180043128 (-HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATIO.c)
 *     ?HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800431EC (-HampOplockWatchStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x180043254 (-HampSlsStart@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampManagerStart(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  ULONG SecurityDescriptorSize; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v5[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall *v6)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v8)(struct _HAM_PDC_CONTEXT *, unsigned int); // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v10[384]; // [rsp+70h] [rbp-90h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v10);
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             (char *)a1 + 288,
             SystemStateChangedWnfName,
             0LL,
             HampManagerSystemStateChangedCallback,
             a1,
             0LL,
             0,
             0);
  if ( (int)result >= 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
      (char *)a1 + 296,
      DplKeyStateChangedWnfName,
      0LL,
      HampManagerDplKeyStateChangedCallback,
      a1,
      0LL,
      0,
      0);
    v5[1] = 0;
    v7 = 0LL;
    v6 = HampPdcEnterExitPlmPhase;
    v5[0] = 1;
    v8 = HampPdcControlCallback;
    result = HampSystemNotificationClientRegister(v3, v5, (char *)a1 + 336, (char *)a1 + 344);
    if ( (int)result >= 0 )
    {
      result = HampSlsStart((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 504));
      if ( (int)result >= 0 )
      {
        if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
               L"O:SYD:(A;;GA;;;SY)",
               1u,
               (PSECURITY_DESCRIPTOR *)a1 + 100,
               &SecurityDescriptorSize) )
        {
          result = NtCreateWnfStateName(&v9, 2LL, 0LL, 0LL, 0LL, 4, *((_QWORD *)a1 + 100));
          if ( (int)result >= 0 )
          {
            *((_QWORD *)a1 + 99) = v9;
            result = HampOplockWatchStart(a1);
            if ( (int)result >= 0 )
            {
              result = HampSystemQueryPolicyInfo(a1, L"UiPausing", (struct ExecutionModel::_ResourceSetInfo *)v10);
              if ( (int)result >= 0 )
              {
                HampRmPopulateExternalResourceAccessData(
                  (struct ExecutionModel::_ResourceSetInfo *)v10,
                  (ULONG *)a1 + 189);
                return 0LL;
              }
            }
          }
        }
        else
        {
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
