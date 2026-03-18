/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678
 * Callers:
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011BF0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002740 (WPP_RECORDER_SF_s.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 *v6; // rax
  unsigned int *v7; // r14
  unsigned int v8; // r15d
  SIZE_T v9; // rsi
  __int64 v10; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v12; // rsi
  size_t v13; // r8
  __int64 v14; // r15
  unsigned int *v16; // rdi
  int v17; // eax
  const void **v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v6 = (__int64 *)a1;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v7 = *(unsigned int **)(a2 + 32);
    v8 = 0;
    v9 = *(unsigned int *)(a2 + 24) + 40LL;
    v10 = *v7;
    if ( (_DWORD)v10 )
    {
      v16 = v7 + 8;
      do
      {
        v17 = AMLIGetNameSpaceObject(*((_BYTE **)v16 + 1), v6, (unsigned __int64 *)&v23, 0);
        if ( v17 < 0 )
        {
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xBu,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v17);
          KeBugCheckEx(0xA5u, 0x18uLL, a1, *((_QWORD *)v16 + 1), 0LL);
        }
        if ( !v23 || *(_WORD *)(*(_QWORD *)v23 + 66LL) != 6 )
        {
          WPP_RECORDER_SF_s(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xCu,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            *((const char **)v16 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, a1, *((_QWORD *)v16 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v23);
        ++v8;
        v9 += *v16;
        v23 = 0LL;
        v6 = (__int64 *)a1;
        v16 += 10;
      }
      while ( v8 < (unsigned int)v10 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x4F706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v13 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v13);
      v14 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v10 )
      {
        v18 = (const void **)(v7 + 8);
        v19 = *((_QWORD *)v12 + 4) - (_QWORD)v7;
        v20 = v10;
        do
        {
          *(const void **)((char *)v18 + v19 + 8) = (char *)v12 + v14;
          memmove((char *)v12 + v14, v18[1], *(unsigned int *)v18);
          v21 = *(unsigned int *)((char *)v18 + v19);
          v18 += 5;
          v14 += v21;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v12;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
