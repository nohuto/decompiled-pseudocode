/*
 * XREFs of ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18003B478
 * Callers:
 *     HamRpcSrvGetApplicationInterruptiveUIState @ 0x18003B430 (HamRpcSrvGetApplicationInterruptiveUIState.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B680 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18003B714 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x18003B838 (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvGetApplicationInterruptiveUIState(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  char v10; // di
  struct _HAM_APPLICATION *v11; // rax
  struct _HAM_APPLICATION *v12; // rbx
  unsigned int InterruptiveUIState; // eax
  __int64 v14; // r9
  __int64 v15; // r9
  DWORD v16; // ebx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v21[144]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[544]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v24; // [rsp+310h] [rbp+210h]
  __int64 v25; // [rsp+318h] [rbp+218h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+330h] [rbp+230h] BYREF
  unsigned int *v28; // [rsp+340h] [rbp+240h]
  __int64 v29; // [rsp+348h] [rbp+248h]
  char *v30; // [rsp+350h] [rbp+250h]
  __int64 v31; // [rsp+358h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800982E7, 0LL, 0LL, 2u, &pData);
  v10 = 0;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v19 = HampAppInfoValidateAndCapture(a2, &a3->Revision, a4, a5, (struct _HAM_APPLICATION_INFO *)v22);
  if ( v19 >= 0 )
  {
    v11 = HampAppFind(a1, (struct _HAM_APPLICATION_INFO *)v22);
    v12 = v11;
    if ( v11 )
    {
      InterruptiveUIState = HampAppGetInterruptiveUIState(v11);
      v10 = InterruptiveUIState;
      *a6 = InterruptiveUIState;
      v19 = 0;
      CemRcObjectDereference(v12);
    }
    else
    {
      v19 = -1073741275;
    }
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v25 = v14;
    v24 = &v19;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateSid(&v27, a3);
    v20 = a5;
    v28 = &v20;
    v30 = &v18;
    v29 = v15;
    v18 = v10;
    v31 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800977EA, 0LL, 0LL, 7u, &v23);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v16, 0LL);
  }
  return (unsigned int)v19;
}
