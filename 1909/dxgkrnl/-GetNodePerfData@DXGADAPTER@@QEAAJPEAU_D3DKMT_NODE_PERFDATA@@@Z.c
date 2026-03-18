/*
 * XREFs of ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01ED530
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetNodePerfData(DXGADAPTER *this, struct _D3DKMT_NODE_PERFDATA *a2, __int64 a3)
{
  __int64 PhysicalAdapterIndex; // r15
  __int64 NodeOrdinal; // r12
  unsigned __int16 *v7; // r13
  _QWORD *v8; // rsi
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // r8
  LARGE_INTEGER v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v19; // rax
  struct _DXGKARG_QUERYADAPTERINFO v20; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+50h] BYREF

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 64))
    && (NodeOrdinal = a2->NodeOrdinal,
        v7 = (unsigned __int16 *)(*((_QWORD *)this + 305) + 352 * PhysicalAdapterIndex),
        (unsigned int)NodeOrdinal < *v7) )
  {
    v8 = (_QWORD *)(*((_QWORD *)v7 + 14) + 44 * NodeOrdinal);
    PerformanceFrequency.QuadPart = 0LL;
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v11 = v9;
    if ( *((_DWORD *)this + 34) == 1
      || 1000 * (v9.QuadPart - *(_QWORD *)(*((_QWORD *)v7 + 15) + 8 * NodeOrdinal)) / PerformanceFrequency.QuadPart < 450 )
    {
      LODWORD(v16) = 0;
    }
    else
    {
      *(_QWORD *)&v20.Flags.0 = 0LL;
      HIDWORD(v20.hKmdProcessHandle) = 0;
      v21 = NodeOrdinal | ((_DWORD)PhysicalAdapterIndex << 16);
      v20.pInputData = &v21;
      *(_QWORD *)&v20.Type = 24LL;
      *(_QWORD *)&v20.InputDataSize = 4LL;
      v20.pOutputData = v8;
      v20.OutputDataSize = 44;
      v12 = DXGADAPTER::DdiQueryAdapterInfo(this, &v20, (const GUID *)v10.QuadPart);
      v16 = v12;
      if ( v12 < 0 )
      {
        v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = this;
        *(_QWORD *)(v17 + 32) = v16;
        WdLogEvent5_WdWarning(v17);
      }
      else
      {
        *(LARGE_INTEGER *)(*((_QWORD *)v7 + 15) + 8 * NodeOrdinal) = v11;
      }
    }
    if ( (int)v16 >= 0 )
    {
      a2->Frequency = *v8;
      a2->MaxFrequency = v8[1];
      a2->MaxFrequencyOC = v8[2];
      a2->Voltage = *((_DWORD *)v8 + 6);
      a2->VoltageMax = *((_DWORD *)v8 + 7);
      a2->VoltageMaxOC = *((_DWORD *)v8 + 8);
      a2->MaxTransitionLatency = *(_QWORD *)((char *)v8 + 36);
    }
    return (unsigned int)v16;
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdWarning(v19);
    return 3221225485LL;
  }
}
