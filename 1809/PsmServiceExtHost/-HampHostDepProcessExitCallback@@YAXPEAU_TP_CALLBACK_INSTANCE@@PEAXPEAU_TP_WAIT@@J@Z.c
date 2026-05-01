/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18002F9C0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002F914 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostDepProcessExitCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_WAIT *a3)
{
  __int64 v4; // rdx
  UCHAR v5; // dl
  DWORD ProcessId; // eax
  void *v7; // rcx
  DWORD v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  DWORD v13; // ebx
  DWORD v14; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-20h] BYREF
  DWORD *v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  int v22; // [rsp+10Ch] [rbp+Ch]
  DWORD *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BE74, 0LL, 0LL, 2u, &pData);
  HampDepGroupInvalidateDependency((struct _HAM_HOST_DEPENDENCY *)a2, v4);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v5, 0LL)
    && hProvider > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    ProcessId = GetProcessId(*((HANDLE *)a2 + 8));
    v7 = (void *)*((_QWORD *)a2 + 9);
    v22 = 0;
    v14 = ProcessId;
    v20 = &v14;
    v21 = 4;
    v8 = GetProcessId(v7);
    v25 = 0;
    v15 = v8;
    v23 = &v15;
    v9 = *((_QWORD *)a2 + 6);
    v24 = 4;
    v10 = *(_QWORD *)(v9 - 32);
    v28 = 0;
    v26 = &v16;
    v11 = *((_QWORD *)a2 + 7);
    v16 = v10;
    v27 = 8;
    v12 = *(_QWORD *)(v11 - 32);
    v31 = 0;
    v29 = &v17;
    v17 = v12;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BE9A, 0LL, 0LL, 6u, &v19);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
}
