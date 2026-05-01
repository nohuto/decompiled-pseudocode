/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x18006679C
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180061950 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18003B9FC (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006A870 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_OBJECT_TABLE *v3; // rcx
  char *v4; // rbx
  int v5; // eax
  DWORD v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v15; // [rsp+110h] [rbp+10h]
  int v16; // [rsp+118h] [rbp+18h]
  int v17; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v18; // [rsp+120h] [rbp+20h]
  int v19; // [rsp+128h] [rbp+28h]
  int v20; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v11 = a2;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180093277, 0LL, 0LL, 2u, &pData);
  RmpUtilCheckStartLockTracking(&v10, (struct _CEM_LOCK_TRACKER *)v13);
  RmpAcquireGlobalLock();
  v3 = (struct _RM_CPU_SET_MANAGER *)((char *)*a1 + 48);
  v9 = v11;
  if ( (int)RmpObjectTableFindObjectByHandle(v3, &v9, (struct _RM_OBJECT_HEADER **)&P) < 0 )
  {
    v4 = 0LL;
LABEL_6:
    v5 = -1073741584;
    goto LABEL_7;
  }
  v4 = (char *)P;
  if ( !P || *((struct _RM_CPU_SET_MANAGER ***)P + 6) != a1 )
    goto LABEL_6;
  RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, P, 1u);
  v5 = 0;
LABEL_7:
  v8 = v5;
  if ( v4 )
    RmpObjectRelease(v4);
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v8;
    LODWORD(v9) = *((_DWORD *)a1 + 14);
    v18 = &v9;
    v21 = &v11;
    v16 = 4;
    v19 = 4;
    v22 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800938D0, 0LL, 0LL, 5u, &v14);
  }
  if ( v10 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v6, 0LL);
    }
  }
  return v8;
}
