/*
 * XREFs of ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18006818C
 * Callers:
 *     PsmHamTerminateApplication @ 0x180054850 (PsmHamTerminateApplication.c)
 * Callees:
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007850 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180008078 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006B8C4 (-HampAppTerminate@@YAJPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 */

__int64 __fastcall HamSrvTerminateApplicationForBi(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG v9; // eax
  struct _HAM_APPLICATION *v10; // rax
  __int64 v11; // rdx
  struct _HAM_APPLICATION *v12; // rbx
  int v13; // eax
  DWORD v14; // ebx
  char v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C8h] BYREF
  char v19[144]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[544]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v22; // [rsp+310h] [rbp+210h]
  __int64 v23; // [rsp+318h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  unsigned int *v25; // [rsp+330h] [rbp+230h]
  __int64 v26; // [rsp+338h] [rbp+238h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+340h] [rbp+240h] BYREF
  char *v28; // [rsp+350h] [rbp+250h]
  __int64 v29; // [rsp+358h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A3AF, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v9 = RtlLengthSid(a3);
  v17 = HampAppInfoValidateAndCapture(a2, &a3->Revision, v9, a4, (struct _HAM_APPLICATION_INFO *)v20);
  if ( v17 >= 0 )
  {
    v10 = HampAppFind(a1, (struct _HAM_APPLICATION_INFO *)v20);
    v12 = v10;
    if ( v10 )
    {
      v13 = HampAppTerminate(v10, v11, a5);
      if ( v13 >= 0 )
        v13 = 0;
      v17 = v13;
      CemRcObjectDereference(v12);
    }
    else
    {
      v17 = -1073741275;
    }
  }
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v23 = 4LL;
    v22 = &v17;
    TlgCreateWsz(&pDesc, a2);
    v18 = a4;
    v25 = &v18;
    v26 = 4LL;
    TlgCreateSid(&v27, a3);
    v16 = a5;
    v28 = &v16;
    v29 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008925F, 0LL, 0LL, 7u, &v21);
  }
  return (unsigned int)v17;
}
