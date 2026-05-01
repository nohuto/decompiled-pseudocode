/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002ED58
 * Callers:
 *     HamRpcSrvConnect @ 0x180007F40 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000A3B0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800410E0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180041200 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180041320 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180041420 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x180079B70 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003076C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int *a10,
        __int64 *a11)
{
  int *v12; // rbx
  int v16; // eax
  DWORD v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  char v21; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-9Ch] BYREF
  int v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+6Ch] [rbp-94h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+100h] [rbp+0h] BYREF
  int *v27; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  char *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  int *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  unsigned int *v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF

  v12 = a10;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097935, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  if ( a10 && ((unsigned int)*a10 >= 0x10 || a6 != 6) )
    goto LABEL_22;
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( a6 == 6 && !a10 )
      {
        v23 = -1;
        MEMORY[0] = MEMORY[0] & 0xF;
        v12 = &v23;
      }
      goto LABEL_7;
    }
LABEL_22:
    v22 = -1073741583;
    goto LABEL_10;
  }
  if ( (a7 & 1) != a7 )
    goto LABEL_22;
LABEL_7:
  v16 = HampClientCreate(a1, a2, a3, a4, a5, a6, a7, 0LL, 0LL, v12, a11);
  if ( v16 >= 0 )
    v16 = 0;
  v22 = v16;
LABEL_10:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    v23 = a2;
    v27 = &v23;
    v29 = &v21;
    v18 = *a11;
    v28 = 4LL;
    v21 = a6;
    v30 = 1LL;
    if ( v18 )
      v19 = *(_DWORD *)(v18 + 148);
    else
      v19 = 0;
    v24 = v19;
    v31 = &v24;
    v33 = &v22;
    v32 = 4LL;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096F58, 0LL, 0LL, 6u, &v26);
  }
  return v22;
}
