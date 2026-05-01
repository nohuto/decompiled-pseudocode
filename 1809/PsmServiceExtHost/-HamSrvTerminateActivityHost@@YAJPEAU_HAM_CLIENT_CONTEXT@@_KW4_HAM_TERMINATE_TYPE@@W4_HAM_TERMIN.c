/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18002D830
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x18002DAB0 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A9D4 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18002D75C (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6)
{
  struct _HAM_ACTIVITY *v9; // rdi
  __int64 v10; // rax
  bool v11; // zf
  struct _HAM_ACTIVITY *v12; // rax
  DWORD v13; // edi
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+F0h] [rbp-10h] BYREF
  int *v27; // [rsp+110h] [rbp+10h]
  int v28; // [rsp+118h] [rbp+18h]
  int v29; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]
  int v32; // [rsp+12Ch] [rbp+2Ch]
  char *v33; // [rsp+130h] [rbp+30h]
  int v34; // [rsp+138h] [rbp+38h]
  int v35; // [rsp+13Ch] [rbp+3Ch]
  unsigned int *v36; // [rsp+140h] [rbp+40h]
  int v37; // [rsp+148h] [rbp+48h]
  int v38; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v39; // [rsp+150h] [rbp+50h]
  int v40; // [rsp+158h] [rbp+58h]
  int v41; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  int v44; // [rsp+16Ch] [rbp+6Ch]
  int *v45; // [rsp+170h] [rbp+70h]
  int v46; // [rsp+178h] [rbp+78h]
  int v47; // [rsp+17Ch] [rbp+7Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF

  v22 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800897D9, 0LL, 0LL, 2u, &pData);
  v9 = 0LL;
  if ( a5 )
    v10 = *a5;
  else
    v10 = 0LL;
  v23 = v10;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( a3 - 1 <= 2 )
  {
    if ( a4 - 1 > 0x19FE )
    {
      v18 = -1073741582;
      goto LABEL_16;
    }
    if ( a3 == 2 )
    {
      if ( (a4 & 0xFFFFFF00) == 0xD00 )
      {
LABEL_10:
        if ( a5 && !*a5 )
        {
          v18 = -1073741581;
          goto LABEL_16;
        }
        v12 = HampActFindForClient(a1, v22);
        v9 = v12;
        if ( !v12 )
        {
          v18 = -1073741275;
          goto LABEL_16;
        }
        v18 = HampActTerminate((__int64)v12, a3, a4, a5, a6);
        if ( v18 >= 0 )
          v18 = 0;
        goto LABEL_14;
      }
      v11 = (a4 & 0xFFFFFF00) == 5120;
    }
    else
    {
      v11 = a6 == 0;
    }
    if ( !v11 )
    {
      v18 = -1073741776;
      goto LABEL_16;
    }
    goto LABEL_10;
  }
  v18 = -1073741583;
LABEL_14:
  if ( v9 )
    CemRcObjectDereference(v9);
LABEL_16:
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v27 = &v18;
    v30 = &v22;
    v33 = &v19;
    v36 = &v20;
    v39 = &v23;
    v28 = v15;
    v31 = v14;
    v19 = a3;
    v34 = 1;
    v20 = a4;
    v37 = v15;
    v40 = v14;
    if ( a5 )
      v16 = *a5;
    else
      v16 = 0LL;
    v44 = 0;
    v47 = 0;
    v24 = v16;
    v42 = &v24;
    v45 = &v21;
    v43 = v14;
    v21 = a6;
    v46 = v15;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008935A, 0LL, 0LL, 9u, &v26);
  }
  return (unsigned int)v18;
}
