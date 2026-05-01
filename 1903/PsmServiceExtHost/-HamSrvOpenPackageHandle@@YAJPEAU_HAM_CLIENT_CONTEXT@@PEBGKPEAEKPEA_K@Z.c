/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800747F0
 * Callers:
 *     HamRpcSrvServicingOpenPackageHandle @ 0x180079D30 (HamRpcSrvServicingOpenPackageHandle.c)
 *     HamRpcSrvDebugOpenPackageHandle @ 0x180079EF0 (HamRpcSrvDebugOpenPackageHandle.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180079FBC (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x18007EA44 (CempUtilValidateAndCapturePackageInfo.c)
 */

__int64 __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        LPCWSTR pwsz,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rdi
  const SID *v11; // rdi
  __int64 result; // rax
  DWORD v13; // ebx
  int v14; // r9d
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[132]; // [rsp+40h] [rbp-C0h] BYREF
  char v19; // [rsp+C4h] [rbp-3Ch] BYREF
  _BYTE v20[144]; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int *v22; // [rsp+1C0h] [rbp+C0h]
  int v23; // [rsp+1C8h] [rbp+C8h]
  int v24; // [rsp+1CCh] [rbp+CCh]
  unsigned __int64 *v25; // [rsp+1D0h] [rbp+D0h]
  int v26; // [rsp+1D8h] [rbp+D8h]
  int v27; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v29; // [rsp+1F0h] [rbp+F0h]
  int v30; // [rsp+1F8h] [rbp+F8h]
  int v31; // [rsp+1FCh] [rbp+FCh]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+200h] [rbp+100h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097B93, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  v10 = *(_QWORD *)a1;
  v17 = 0LL;
  v11 = (const SID *)(v10 + 940);
  result = CempUtilValidateAndCapturePackageInfo(pwsz, a4, a5, a3, v18);
  v15 = result;
  if ( (int)result >= 0 )
  {
    v11 = (const SID *)&v19;
    result = HampClientPkgCreate((struct _HAM_PACKAGE_INFO *)v18, a1, &v17);
    v15 = result;
    if ( (int)result >= 0 )
    {
      *a6 = v17;
      result = 0LL;
      v15 = 0;
    }
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
    result = v15;
  }
  if ( dword_1800AB2C0 > 4u )
  {
    v24 = 0;
    v27 = 0;
    v22 = &v15;
    v23 = 4;
    v25 = &v17;
    v26 = 8;
    TlgCreateWsz(&pDesc, pwsz);
    v31 = 0;
    v29 = (int *)&v16;
    v16 = a3;
    v30 = v14;
    TlgCreateSid(&v32, v11);
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009828C, 0LL, 0LL, 7u, &v21);
    return v15;
  }
  return result;
}
