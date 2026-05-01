/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003B17C
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x18003B170 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000EBF4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B680 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B714 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18003B778 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // esi
  int v10; // ebx
  unsigned int v11; // r9d
  struct _HAM_APPLICATION *v12; // rax
  struct _HAM_APPLICATION *v13; // rdi
  DWORD v14; // edi
  int v15; // r10d
  int v16; // ecx
  int v17; // r10d
  UINT32 cData; // r11d
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int RegistryTerminateReason; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  SID *pSid; // [rsp+40h] [rbp-C0h]
  _BYTE v25[144]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v26[232]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v27[80]; // [rsp+2B0h] [rbp+1B0h] BYREF
  EVENT_DATA_DESCRIPTOR v28; // [rsp+300h] [rbp+200h] BYREF
  int *p_RegistryTerminateReason; // [rsp+320h] [rbp+220h]
  int v30; // [rsp+328h] [rbp+228h]
  int v31; // [rsp+32Ch] [rbp+22Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+340h] [rbp+240h] BYREF
  int *v34; // [rsp+350h] [rbp+250h]
  int v35; // [rsp+358h] [rbp+258h]
  int v36; // [rsp+35Ch] [rbp+25Ch]
  char *v37; // [rsp+360h] [rbp+260h]
  int v38; // [rsp+368h] [rbp+268h]
  int v39; // [rsp+36Ch] [rbp+26Ch]
  int *v40; // [rsp+370h] [rbp+270h]
  int v41; // [rsp+378h] [rbp+278h]
  int v42; // [rsp+37Ch] [rbp+27Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF

  pSid = a3;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098085, 0LL, 0LL, 2u, &pData);
  LOBYTE(v9) = 4;
  v10 = 6912;
  v23 = 4;
  v21 = 6912;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  RegistryTerminateReason = HampAppInfoValidateAndCapture(
                              a2,
                              &pSid->Revision,
                              a4,
                              *((_DWORD *)a1 + 36),
                              (struct _HAM_APPLICATION_INFO *)v26);
  v11 = RegistryTerminateReason;
  if ( RegistryTerminateReason >= 0 )
  {
    v12 = HampAppFind(*(struct _HOST_ACTIVITY_MANAGER **)a1, (struct _HAM_APPLICATION_INFO *)v26);
    v13 = v12;
    if ( v12 )
    {
      HampAppGetActivationState(v12, (enum _HAM_APPLICATION_EXECUTION_STATE *)&v23, (enum _HAM_TERMINATE_REASON *)&v21);
      v9 = v23;
    }
    else
    {
      RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(v26, v27, (enum _HAM_TERMINATE_REASON *)&v21);
      v11 = RegistryTerminateReason;
      if ( RegistryTerminateReason < 0 )
      {
        v10 = v21;
        goto LABEL_8;
      }
      v9 = 3;
    }
    v10 = v21;
    *(_DWORD *)a5 = v9;
    *(_DWORD *)a6 = v10;
    v11 = 0;
    RegistryTerminateReason = 0;
    if ( v13 )
    {
      CemRcObjectDereference(v13);
      v11 = RegistryTerminateReason;
    }
  }
LABEL_8:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
    v11 = RegistryTerminateReason;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v31 = 0;
    p_RegistryTerminateReason = &RegistryTerminateReason;
    v30 = v15;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v33, pSid);
    v36 = 0;
    v39 = 0;
    v16 = *((_DWORD *)a1 + 36);
    v42 = 0;
    v34 = &v23;
    v37 = &v20;
    v40 = &v21;
    v23 = v16;
    v35 = v17;
    v20 = v9;
    v38 = 1;
    v21 = v10;
    v41 = v17;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097E11, 0LL, 0LL, cData, &v28);
    return (unsigned int)RegistryTerminateReason;
  }
  return v11;
}
