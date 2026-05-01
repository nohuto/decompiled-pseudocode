/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180007658
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x180007610 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007850 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800080DC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  struct _HAM_APPLICATION *v10; // rax
  struct _HAM_APPLICATION *v11; // rbx
  DWORD v12; // ebx
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v17[144]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[544]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v20; // [rsp+310h] [rbp+210h]
  __int64 v21; // [rsp+318h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+330h] [rbp+230h] BYREF
  unsigned int *v24; // [rsp+340h] [rbp+240h]
  __int64 v25; // [rsp+348h] [rbp+248h]
  char *v26; // [rsp+350h] [rbp+250h]
  __int64 v27; // [rsp+358h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A744, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v15 = HampAppInfoValidateAndCapture(a2, &a3->Revision, a4, a5, (struct _HAM_APPLICATION_INFO *)v18);
  if ( v15 >= 0 )
  {
    v10 = HampAppFind(a1, (struct _HAM_APPLICATION_INFO *)v18);
    v11 = v10;
    if ( v10 )
    {
      *a6 = HampAppGetInterruptiveUIState(v10);
      v15 = 0;
      CemRcObjectDereference(v11);
    }
    else
    {
      v15 = -1073741275;
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v21 = 4LL;
    v20 = &v15;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v23, a3);
    v16 = a5;
    v24 = &v16;
    v14 = *(_BYTE *)a6;
    v26 = &v14;
    v25 = 4LL;
    v27 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089ADB, 0LL, 0LL, 7u, &v19);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return (unsigned int)v15;
}
