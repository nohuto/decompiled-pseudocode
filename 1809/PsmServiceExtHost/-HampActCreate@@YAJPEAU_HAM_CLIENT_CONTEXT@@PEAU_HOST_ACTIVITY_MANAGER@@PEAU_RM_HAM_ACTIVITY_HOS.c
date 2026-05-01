/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019E60
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18000D168 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18000D62C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18000F190 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000F7F0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180021520 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019A20 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180019BD0 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18001A0BC (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     ?HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18001A1D8 (-HampRpGetActivityResourceSetInfo@@YAJPEAXPEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001A340 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004903C (--2@YAPEAX_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180072D94 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActCreate(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        char a5,
        struct _HAM_ACTIVITY **a6)
{
  DWORD v7; // edi
  __int64 v11; // rsi
  _QWORD *Value; // rbx
  char v13; // bl
  _QWORD *v14; // rax
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v17; // rsi
  __int64 v18; // r9
  int ActivityResourceSetInfo; // ebx
  struct ExecutionModel::_ResourceSetInfo *v20; // r8
  __int64 v21; // rcx
  ULONG v22; // ebx
  int *v23; // rdi
  _QWORD *v24; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-1D8h] BYREF
  _BYTE v27[164]; // [rsp+30h] [rbp-1C8h] BYREF
  char v28; // [rsp+D4h] [rbp-124h] BYREF

  v7 = HampLockTrackerId;
  v11 = *(_QWORD *)(*((_QWORD *)a3 + 94) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared(v11 + 304);
  v13 = *(_BYTE *)(v11 + 340) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v14 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v14 & 0x40) == 0 )
      __int2c();
    if ( v14[7]-- == 1LL )
      *v14 &= ~0x40uLL;
  }
  RtlReleaseSRWLockShared(v11 + 304);
  if ( v13 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  Heap = (struct _HAM_ACTIVITY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
  v17 = Heap;
  if ( Heap )
  {
    HampActInitialize(a2, a4, a3, Heap);
    *((_QWORD *)v17 + 8) = a1;
    ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v27);
    ActivityResourceSetInfo = HampRpGetActivityResourceSetInfo(
                                *(void **)((v18 & 0xFFFFFFFFFFFFFFFCuLL) + 72),
                                (const unsigned __int16 *)v17 + 126,
                                (struct ExecutionModel::_ResourceSetInfo *)v27);
    if ( ActivityResourceSetInfo >= 0 )
    {
      ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
        (struct _HAM_ACTIVITY *)((char *)v17 + 392),
        (struct _RM_RESOURCE_SET_PROPERTIES *)v27,
        v20);
      if ( (*(_BYTE *)(v21 + 40) & 0x10) != 0 && *(_QWORD *)(v21 + 80) < *(_QWORD *)(v21 + 64) )
      {
        ActivityResourceSetInfo = -1073741811;
        goto LABEL_28;
      }
      RtlInitializeBitMap(&BitMapHeader, (PULONG)v17 + 124, 0x2Fu);
      v22 = 0;
      v23 = (int *)&v28;
      do
      {
        if ( *v23 < 101 )
          RtlSetBit(&BitMapHeader, v22);
        ++v22;
        ++v23;
      }
      while ( v22 < 0x2F );
      if ( (v27[42] & 7) == 4 )
        *((_DWORD *)v17 + 28) |= 0x80000u;
      if ( (a5 & 1) == 0 )
        *((_DWORD *)v17 + 28) &= ~0x80000u;
      ActivityResourceSetInfo = 0;
    }
    if ( ActivityResourceSetInfo < 0 )
    {
LABEL_31:
      CemRcObjectDereference(v17);
      return (unsigned int)ActivityResourceSetInfo;
    }
    v24 = operator new(0x20uLL);
    if ( v24 )
    {
      v24[1] = v17;
      *v24 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
      ActivityResourceSetInfo = 0;
      *((_DWORD *)v24 + 6) = 1;
      v24[2] = -1LL;
      *((_QWORD *)v17 + 11) = v24;
    }
    else
    {
      ActivityResourceSetInfo = -1073741801;
    }
LABEL_28:
    if ( ActivityResourceSetInfo >= 0 )
    {
      ActivityResourceSetInfo = HampActInsert(v17);
      if ( ActivityResourceSetInfo >= 0 )
      {
        *a6 = v17;
        return 0LL;
      }
    }
    goto LABEL_31;
  }
  return 3221225495LL;
}
