/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006D980
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned int *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  DWORD v6; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v9[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v11; // [rsp+F0h] [rbp-10h]
  int v12; // [rsp+F8h] [rbp-8h]
  int v13; // [rsp+FCh] [rbp-4h]
  __int64 *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v9);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v4 = *((_QWORD *)a2 + 4);
    v13 = 0;
    v16 = 0;
    v8 = v4;
    v11 = &v8;
    v7 = a2[330];
    v14 = &v7;
    v12 = 8;
    v15 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094DB8, 0LL, 0LL, 4u, &pData);
  }
  RmHamHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    12288,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (void *)a2[330]);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v5 = *((_QWORD *)a2 + 4);
    v13 = 0;
    v7 = v5;
    v11 = &v7;
    v12 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180094D61, 0LL, 0LL, 3u, &pData);
  }
  NtSetEvent(*((HANDLE *)a2 + 164), 0LL);
  RmpObjectRelease((char *)a2);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v6, 0LL);
  }
}
