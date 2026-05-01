/*
 * XREFs of ?HampHostDepProcessExitCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180007A50
 * Callers:
 *     <none>
 * Callees:
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180007DB0 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostDepProcessExitCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_WAIT *a3)
{
  UCHAR v4; // dl
  DWORD ProcessId; // eax
  void *v6; // rcx
  DWORD v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  DWORD v12; // ebx
  DWORD v13; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v14; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-20h] BYREF
  DWORD *v19; // [rsp+100h] [rbp+0h]
  int v20; // [rsp+108h] [rbp+8h]
  int v21; // [rsp+10Ch] [rbp+Ch]
  DWORD *v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v25; // [rsp+120h] [rbp+20h]
  int v26; // [rsp+128h] [rbp+28h]
  int v27; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099D6A, 0LL, 0LL, 2u, &pData);
  HampDepGroupInvalidateDependency((struct _HAM_HOST_DEPENDENCY *)a2);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1800AB2C0, v4, 0LL)
    && dword_1800AB2C0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    ProcessId = GetProcessId(*((HANDLE *)a2 + 8));
    v6 = (void *)*((_QWORD *)a2 + 9);
    v21 = 0;
    v13 = ProcessId;
    v19 = &v13;
    v20 = 4;
    v7 = GetProcessId(v6);
    v24 = 0;
    v14 = v7;
    v22 = &v14;
    v8 = *((_QWORD *)a2 + 6);
    v23 = 4;
    v9 = *(_QWORD *)(v8 - 32);
    v27 = 0;
    v25 = &v15;
    v10 = *((_QWORD *)a2 + 7);
    v15 = v9;
    v26 = 8;
    v11 = *(_QWORD *)(v10 - 32);
    v30 = 0;
    v28 = &v16;
    v16 = v11;
    v29 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099D90, 0LL, 0LL, 6u, &v18);
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v12, 0LL);
  }
}
