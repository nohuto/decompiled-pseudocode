/*
 * XREFs of ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180033DD8
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011F4C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180033DB0 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800687FC (-RmpActivityHostQueryByTokenPsmInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180075D10 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x180018BF8 (CempHostInfoInitialize.c)
 *     CempGetProcessHostInfo @ 0x180033EDC (CempGetProcessHostInfo.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemGetProcessPsmInfo(unsigned int a1, wchar_t *a2)
{
  NTSTATUS ProcessHostInfo; // ebx
  void *ProcessHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszSrc[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE SourceSid[68]; // [rsp+250h] [rbp+150h] BYREF
  int v10; // [rsp+294h] [rbp+194h]
  int v11; // [rsp+298h] [rbp+198h]
  __int64 v12; // [rsp+2A0h] [rbp+1A0h]

  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueThread = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)a1;
  ObjectAttributes.Length = 48;
  ProcessHostInfo = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( ProcessHostInfo >= 0 )
  {
    ProcessHostInfo = CempGetProcessHostInfo(ProcessHandle, pszSrc);
    if ( ProcessHostInfo >= 0 )
    {
      CempHostInfoInitialize(pszSrc, SourceSid, v10, v11, v12, a2);
      ProcessHostInfo = 0;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)ProcessHostInfo;
}
