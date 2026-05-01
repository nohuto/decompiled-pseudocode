/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x180059644
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180054EE0 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x18005C568 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18005D574 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18005D8C4 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v7; // rdi
  DWORD ProcessId; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  struct _RM_OBJECT_HEADER *v10; // rbx
  unsigned __int64 v11; // rcx
  DWORD v12; // eax
  DWORD v13; // ebx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v21[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  int *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  struct _RM_CPU_SET_PROCESS_REGISTRATION **v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  unsigned __int64 *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF

  v20 = a3;
  RmpUtilCheckStartLockTracking(&v18, (struct _CEM_LOCK_TRACKER *)v21);
  v19 = -1LL;
  v7 = 0LL;
  v16 = 0LL;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085373, 0LL, 0LL, 2u, &pData);
  ProcessId = GetProcessId(a2);
  if ( ProcessId == GetCurrentProcessId() )
  {
    v15 = -1073741584;
    goto LABEL_17;
  }
  RmpAcquireGlobalLock();
  Allocation = RmpCpuSetManagerFindAllocation(*a1, v20);
  v10 = Allocation;
  if ( !Allocation || *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) != a1 || !*((_DWORD *)Allocation + 66) )
  {
    v15 = -1073741583;
LABEL_13:
    if ( v7 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v7, 1u);
    goto LABEL_15;
  }
  v15 = RmpCpuSetManagerRegisterProcessWithAllocation((struct _RM_CPU_SET_CLIENT_CONTEXT *)a1, a2, Allocation, &v16);
  if ( v15 < 0 )
  {
    v7 = v16;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)v16 + 4);
  v15 = 0;
  v19 = v11;
  *a4 = v11;
LABEL_15:
  if ( v10 )
    RmpObjectRelease(v10);
LABEL_17:
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v23 = &v15;
    v26 = &v19;
    v17 = *((_DWORD *)a1 + 14);
    v29 = &v17;
    v24 = 4;
    v27 = 8;
    v30 = 4;
    v12 = GetProcessId(a2);
    v34 = 0;
    v37 = 0;
    LODWORD(v16) = v12;
    v32 = &v16;
    v35 = &v20;
    v33 = 4;
    v36 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800852FD, 0LL, 0LL, 7u, &v22);
  }
  if ( v18 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v15;
}
