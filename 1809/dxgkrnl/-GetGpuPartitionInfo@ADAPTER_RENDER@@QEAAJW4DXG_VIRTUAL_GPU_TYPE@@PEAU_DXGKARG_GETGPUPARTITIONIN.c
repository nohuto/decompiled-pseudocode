/*
 * XREFs of ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C01DF630
 * Callers:
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C01E09A8 (DxgkDdiGetGpuPartitionInfo.c)
 * Callees:
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C01E0344 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 *     ?DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C01E219C (-DdiGetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetGpuPartitionInfo(
        ADAPTER_RENDER *a1,
        int a2,
        struct _DXGKARG_GETGPUPARTITIONINFO *a3,
        __int64 a4)
{
  __int64 v6; // rbx
  USHORT *pGpuPartitionOptions; // rcx
  __int64 v9; // r9
  USHORT CurrentGpuPartitionCount; // cx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  if ( a2 == 1 )
  {
    if ( !a3->NumGpuPartitionOptions )
      return 3221225507LL;
    if ( *((_QWORD *)a1 + 188)
      || (LOBYTE(a4) = 1, v15 = 32, LODWORD(v6) = ADAPTER_RENDER::SetGpuPartitionCount(a1, 1LL, &v15, a4), (int)v6 >= 0) )
    {
      pGpuPartitionOptions = a3->pGpuPartitionOptions;
      a3->CurrentGpuPartitionCount = *(_WORD *)(*((_QWORD *)a1 + 188) + 12LL);
      a3->NumGpuPartitionOptions = 1;
      *pGpuPartitionOptions = 32;
    }
  }
  else
  {
    LODWORD(v6) = ADAPTER_RENDER::DdiGetGpuPartitionInfo(a1, a3);
    if ( (int)v6 >= 0 )
    {
      CurrentGpuPartitionCount = a3->CurrentGpuPartitionCount;
      if ( CurrentGpuPartitionCount )
      {
        v11 = *((_QWORD *)a1 + 187);
        if ( !v11 || *(_DWORD *)(v11 + 12) != CurrentGpuPartitionCount )
        {
          v15 = CurrentGpuPartitionCount;
          LOBYTE(v9) = 1;
          v12 = ADAPTER_RENDER::SetGpuPartitionCount(a1, 0LL, &v15, v9);
          v6 = v12;
          if ( v12 < 0 )
          {
            v14 = WdLogNewEntry5_WdError(v13);
            *(_QWORD *)(v14 + 24) = v6;
            WdLogEvent5_WdError(v14);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
