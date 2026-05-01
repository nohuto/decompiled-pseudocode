/*
 * XREFs of ?RmSrvCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAX_KPEA_K@Z @ 0x18006638C
 * Callers:
 *     ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x180061910 (-RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z.c)
 * Callees:
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800153DC (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z @ 0x180069548 (-RmpCpuSetManagerFindAllocation@@YAPEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_MANAGER@@_K@Z.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18006A51C (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18006A870 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 */

__int64 __fastcall RmSrvCpuSetManagerRegisterProcessWithAllocation(
        struct _RM_CPU_SET_MANAGER **a1,
        void *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4)
{
  PVOID v7; // rdi
  DWORD ProcessId; // ebx
  struct _RM_CPU_SET_ALLOCATION *Allocation; // rax
  char *v10; // rbx
  unsigned __int64 v11; // rcx
  DWORD v12; // eax
  DWORD v13; // ebx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
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
  PVOID *p_P; // [rsp+140h] [rbp+40h]
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
  P = 0LL;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800931F3, 0LL, 0LL, 2u, &pData);
  ProcessId = GetProcessId(a2);
  if ( ProcessId == GetCurrentProcessId() )
  {
    v15 = -1073741584;
    goto LABEL_17;
  }
  RmpAcquireGlobalLock();
  Allocation = RmpCpuSetManagerFindAllocation(*a1, v20);
  v10 = (char *)Allocation;
  if ( !Allocation || *((struct _RM_CPU_SET_MANAGER ***)Allocation + 7) != a1 || !*((_DWORD *)Allocation + 66) )
  {
    v15 = -1073741583;
LABEL_13:
    if ( v7 )
      RmpCpuSetManagerReleaseProcessRegistrationEx(*a1, v7, 1u);
    goto LABEL_15;
  }
  v15 = RmpCpuSetManagerRegisterProcessWithAllocation(
          (struct _RM_CPU_SET_CLIENT_CONTEXT *)a1,
          a2,
          Allocation,
          (struct _RM_CPU_SET_PROCESS_REGISTRATION **)&P);
  if ( v15 < 0 )
  {
    v7 = P;
    goto LABEL_13;
  }
  v11 = *((_QWORD *)P + 4);
  v15 = 0;
  v19 = v11;
  *a4 = v11;
LABEL_15:
  if ( v10 )
    RmpObjectRelease(v10);
LABEL_17:
  RmpReleaseGlobalLock();
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
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
    LODWORD(P) = v12;
    p_P = &P;
    v35 = &v20;
    v33 = 4;
    v36 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009317D, 0LL, 0LL, 7u, &v22);
  }
  if ( v18 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        NT_ASSERT("CurrentTracker->Bitmap == 0");
      TlsSetValue(v13, 0LL);
    }
  }
  return (unsigned int)v15;
}
