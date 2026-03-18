/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002EEB0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_s @ 0x1C0001C00 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(__int64 *BugCheckParameter2, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v7; // r14
  SIZE_T v8; // rsi
  __int64 v9; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v11; // rsi
  size_t v12; // r8
  __int64 v13; // r15
  unsigned int *v15; // rdi
  int v16; // ecx
  __int64 v17; // rax
  const void **v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned int v22; // [rsp+78h] [rbp+10h]
  volatile signed __int32 *v23; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v7 = *(unsigned int **)(a2 + 32);
    v8 = *(unsigned int *)(a2 + 24) + 40LL;
    v22 = 0;
    v9 = *v7;
    if ( (_DWORD)v9 )
    {
      v15 = v7 + 8;
      do
      {
        v16 = AMLIGetNameSpaceObject(*((_BYTE **)v15 + 1), BugCheckParameter2, (unsigned __int64 *)&v23, 0);
        if ( v16 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0xBu,
              (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
              v16);
          KeBugCheckEx(0xA5u, 0x18uLL, (ULONG_PTR)BugCheckParameter2, *((_QWORD *)v15 + 1), 0LL);
        }
        if ( !v23 || *(_WORD *)(*(_QWORD *)v23 + 66LL) != 6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0xCu,
              (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
              *((const char **)v15 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, *((_QWORD *)v15 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v23);
        v17 = *v15;
        v15 += 10;
        v8 += v17;
        v23 = 0LL;
        ++v22;
      }
      while ( v22 < (unsigned int)v9 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x4F706341u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v12 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v12);
      v13 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v9 )
      {
        v18 = (const void **)(v7 + 8);
        v19 = *((_QWORD *)v11 + 4) - (_QWORD)v7;
        v20 = v9;
        do
        {
          *(const void **)((char *)v18 + v19 + 8) = (char *)v11 + v13;
          memmove((char *)v11 + v13, v18[1], *(unsigned int *)v18);
          v21 = *(unsigned int *)((char *)v18 + v19);
          v18 += 5;
          v13 += v21;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v11;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
