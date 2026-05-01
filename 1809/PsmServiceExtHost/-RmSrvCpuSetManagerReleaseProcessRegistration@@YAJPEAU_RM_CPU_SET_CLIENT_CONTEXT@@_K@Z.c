/*
 * XREFs of ?RmSrvCpuSetManagerReleaseProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@_K@Z @ 0x180059A54
 * Callers:
 *     ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180054F20 (-RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000AE44 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerReleaseProcessRegistration(struct _RM_CPU_SET_MANAGER **a1, unsigned __int64 a2)
{
  struct _RM_OBJECT_TABLE *v3; // rcx
  struct _RM_OBJECT_HEADER *v4; // rbx
  int v5; // eax
  DWORD v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_OBJECT_HEADER *v12; // [rsp+50h] [rbp-B0h] BYREF
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
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800853A7, 0LL, 0LL, 2u, &pData);
  RmpUtilCheckStartLockTracking(&v10, (struct _CEM_LOCK_TRACKER *)v13);
  RmpAcquireGlobalLock();
  v3 = (struct _RM_CPU_SET_MANAGER *)((char *)*a1 + 48);
  v9 = v11;
  if ( (int)RmpObjectTableFindObjectByHandle(v3, &v9, &v12) < 0 )
  {
    v4 = 0LL;
LABEL_6:
    v5 = -1073741584;
    goto LABEL_7;
  }
  v4 = v12;
  if ( !v12 || *((struct _RM_CPU_SET_MANAGER ***)v12 + 6) != a1 )
    goto LABEL_6;
  RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v12, 1u);
  v5 = 0;
LABEL_7:
  v8 = v5;
  if ( v4 )
    RmpObjectRelease(v4);
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
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
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085B13, 0LL, 0LL, 5u, &v14);
  }
  if ( v10 )
  {
    v6 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v6, 0LL);
    }
  }
  return v8;
}
