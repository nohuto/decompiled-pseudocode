/*
 * XREFs of ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18007A410
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x1800797E0 (-HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     CempPackageFamilyNameFromFullName @ 0x18007E8F0 (CempPackageFamilyNameFromFullName.c)
 */

__int64 __fastcall CBackgroundAccessStateChangedListener::BackgroundAccessStateChanged(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4)
{
  NTSTATUS v8; // eax
  int LastError; // eax
  DWORD v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  char v16[132]; // [rsp+50h] [rbp-B0h] BYREF
  char DestinationSid[68]; // [rsp+D4h] [rbp-2Ch] BYREF
  int v18; // [rsp+118h] [rbp+18h]
  char v19[144]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int *v21; // [rsp+1D0h] [rbp+D0h]
  int v22; // [rsp+1D8h] [rbp+D8h]
  int v23; // [rsp+1DCh] [rbp+DCh]
  int *v24; // [rsp+1E0h] [rbp+E0h]
  int v25; // [rsp+1E8h] [rbp+E8h]
  int v26; // [rsp+1ECh] [rbp+ECh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+200h] [rbp+100h] BYREF
  int *v29; // [rsp+210h] [rbp+110h]
  int v30; // [rsp+218h] [rbp+118h]
  int v31; // [rsp+21Ch] [rbp+11Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+220h] [rbp+120h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  Sid = 0LL;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099911, 0LL, 0LL, 2u, &pData);
  v18 = *(_DWORD *)(a1 + 40);
  v8 = CempPackageFamilyNameFromFullName(a3);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( ConvertStringSidToSidW(a2, &Sid) )
  {
    v8 = RtlCopySid(0x44u, DestinationSid, Sid);
    if ( v8 < 0 )
    {
LABEL_4:
      LastError = v8 | 0x10000000;
      goto LABEL_10;
    }
    HampPkgHandleBackgroundAccessStateChange(
      *(struct _HOST_ACTIVITY_MANAGER **)(a1 + 32),
      (struct _HAM_PACKAGE_INFO *)v16,
      a4);
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
  }
LABEL_10:
  v12 = LastError;
  if ( Sid )
    LocalFree(Sid);
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v10, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v12;
    v13 = *(_DWORD *)(a1 + 40);
    v24 = &v13;
    v22 = 4;
    v25 = 4;
    TlgCreateWsz(&pDesc, a2);
    TlgCreateWsz(&v28, a3);
    v31 = 0;
    v29 = &v14;
    v14 = a4;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099994, 0LL, 0LL, 7u, &v20);
  }
  return v12;
}
