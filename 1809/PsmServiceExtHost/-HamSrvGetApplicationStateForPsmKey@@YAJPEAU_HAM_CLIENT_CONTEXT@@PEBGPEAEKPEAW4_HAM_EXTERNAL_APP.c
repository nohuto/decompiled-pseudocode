/*
 * XREFs of ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800073AC
 * Callers:
 *     HamRpcSrvGetApplicationStateForPsmKey @ 0x1800073A0 (HamRpcSrvGetApplicationStateForPsmKey.c)
 * Callees:
 *     ?HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180007330 (-HampAppGetActivationState@@YAXPEAU_HAM_APPLICATION@@PEAW4_HAM_EXTERNAL_APPLICATION_STATE@@PEAW4.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007850 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  int v9; // edi
  int v10; // esi
  struct _HAM_APPLICATION *v11; // rax
  struct _HAM_APPLICATION *v12; // rbx
  DWORD v13; // ebx
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // r9
  UINT32 cData; // r10d
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  SID *pSid; // [rsp+40h] [rbp-C0h]
  _BYTE v24[144]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[544]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+300h] [rbp+200h] BYREF
  int *v27; // [rsp+320h] [rbp+220h]
  __int64 v28; // [rsp+328h] [rbp+228h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+340h] [rbp+240h] BYREF
  int *v31; // [rsp+350h] [rbp+250h]
  __int64 v32; // [rsp+358h] [rbp+258h]
  char *v33; // [rsp+360h] [rbp+260h]
  __int64 v34; // [rsp+368h] [rbp+268h]
  int *v35; // [rsp+370h] [rbp+270h]
  __int64 v36; // [rsp+378h] [rbp+278h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+380h] [rbp+280h] BYREF

  pSid = a3;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A367, 0LL, 0LL, 2u, &pData);
  LOBYTE(v9) = 4;
  v10 = 6656;
  v20 = 4;
  v21 = 6656;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v22 = HampAppInfoValidateAndCapture(
          a2,
          &pSid->Revision,
          a4,
          *((_DWORD *)a1 + 35),
          (struct _HAM_APPLICATION_INFO *)v25);
  if ( v22 >= 0 )
  {
    v11 = HampAppFind(*(struct _HOST_ACTIVITY_MANAGER **)a1, (struct _HAM_APPLICATION_INFO *)v25);
    v12 = v11;
    if ( v11 )
    {
      HampAppGetActivationState(v11, (enum _HAM_EXTERNAL_APPLICATION_STATE *)&v20, (enum _HAM_TERMINATE_REASON *)&v21);
      v9 = v20;
      v10 = v21;
    }
    else
    {
      v9 = 3;
      v10 = 0;
    }
    *(_DWORD *)a5 = v9;
    v22 = 0;
    *(_DWORD *)a6 = v10;
    if ( v12 )
      CemRcObjectDereference(v12);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v28 = v14;
    v27 = &v22;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v30, pSid);
    v15 = *((_DWORD *)a1 + 35);
    v31 = &v21;
    v33 = &v19;
    v35 = &v20;
    v21 = v15;
    v32 = v16;
    v19 = v9;
    v34 = 1LL;
    v20 = v10;
    v36 = v16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A4B2, 0LL, 0LL, cData, &v26);
  }
  return (unsigned int)v22;
}
