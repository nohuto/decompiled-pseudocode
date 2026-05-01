/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044690
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003E5E0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800445EC (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044904 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044B68 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180044BD0 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044D58 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180044D80 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180044DFC (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x180044E78 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048ABC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180069D0C (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18006AA68 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  unsigned int v2; // r14d
  int CpuSetInformation; // edi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // r8
  unsigned int v7; // r10d
  __int64 i; // r9
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // r12
  __int64 *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  HANDLE CurrentProcess; // rax
  HANDLE v16; // rax
  unsigned int SystemReserveTarget; // esi
  const struct _TlgProvider_t *v18; // rcx
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v25; // rdi
  unsigned int v26; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v29[5]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  char *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  _QWORD v35[20]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0;
  P = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, &v28);
  if ( CpuSetInformation >= 0 )
  {
    memset_0(v35, 0, sizeof(v35));
    v7 = v28;
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(*v6 + i) )
    {
      v6 = (char *)P + (unsigned int)i;
      if ( !v6[1] )
      {
        v9 = v6[2];
        if ( v9 != *((_DWORD *)a1 + 188) )
        {
          v10 = v9 - 256;
          v4 = (unsigned __int64)v10 >> 16;
          v5 = v35[v4] | (1LL << v10);
          v35[v4] = v5;
        }
      }
    }
    LOBYTE(v5) = 0;
    v11 = (char *)a1 + 88;
    v26 = v5;
    v12 = (__int64 *)((char *)a1 + 88);
    do
    {
      v13 = *(__int64 *)((char *)v12 + (char *)v35 - (char *)a1 - 88);
      v14 = *v12;
      if ( v13 != *v12 )
      {
        v20 = v13 & ~v14;
        if ( v20 )
        {
          v21 = RtlNumberOfSetBitsUlongPtr(v13 & ~v14, v4, v6, i);
          *(_QWORD *)&v11[8 * v2] |= v20;
          *((_DWORD *)a1 + 189) += v21;
          *((_QWORD *)a1 + v2 + 31) |= v20;
          *((_DWORD *)a1 + 190) += v21;
          *((_DWORD *)a1 + 193) |= 1u;
          v14 = *v12;
          LOBYTE(v5) = v26;
        }
        v22 = v14 & ~v13;
        if ( v22 )
        {
          LODWORD(v5) = (unsigned __int8)v5;
          if ( (~v12[20] & v22) != 0 )
            LODWORD(v5) = 1;
          v26 = v5;
          *(_QWORD *)&v11[8 * v2] &= ~v22;
          *((_DWORD *)a1 + 189) -= RtlNumberOfSetBitsUlongPtr(v22, v4, v6, i);
          v23 = v22 & *((_QWORD *)a1 + v2 + 31);
          if ( v23 )
          {
            *((_QWORD *)a1 + v2 + 31) &= ~v23;
            *((_DWORD *)a1 + 190) -= RtlNumberOfSetBitsUlongPtr(v23, v4, v6, i);
          }
          *((_DWORD *)a1 + 193) |= 1u;
        }
      }
      LOBYTE(v5) = v26;
      ++v2;
      ++v12;
    }
    while ( v2 < 0x14 );
    if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v26, v4, v6, i) )
    {
      CurrentProcess = GetCurrentProcess();
      RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
      v16 = GetCurrentProcess();
      RmpSystemSetProcessDefaultCpuSets(v16, (char *)a1 + 88);
    }
    if ( (_BYTE)v26 )
      RmpCpuSetManagerSweepInvalidAllocations(a1);
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    if ( SystemReserveTarget > *((_DWORD *)a1 + 190) )
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v29);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v29);
        v25 = (char *)Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v25);
      }
      RtlReleaseSRWLockShared(v29[0] + 16LL);
      RmpCpuSetManagerApplyAllPolicyChanges(a1);
    }
    *((_DWORD *)a1 + 192) = SystemReserveTarget;
    *((_DWORD *)a1 + 191) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    CpuSetInformation = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    LOWORD(v26) = 20;
    v31 = &v26;
    v33 = (char *)a1 + 88;
    v32 = 2LL;
    v34 = 160LL;
    TlgWrite(v18, &unk_1800944F8, 0LL, 0LL, 4u, &pData);
  }
  return (unsigned int)CpuSetInformation;
}
