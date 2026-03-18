/*
 * XREFs of ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C020F6B4
 * Callers:
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C020E988 (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0210694 (DxgkDdiSetGpuPartitionCount.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C020E6DC (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetGpuPartitionCount(ADAPTER_RENDER *a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  char *v8; // rcx
  char *v9; // rax
  _QWORD *v10; // rax
  char *v11; // rax
  _QWORD *v12; // rax

  if ( a4 || (result = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1), (int)result >= 0) )
  {
    if ( a2 == 1 )
    {
      v8 = (char *)*((_QWORD *)a1 + 188);
      if ( !v8 )
      {
        v9 = (char *)operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
        v8 = v9;
        if ( v9 )
        {
          v9[8] = 1;
          *((_QWORD *)v9 + 4) = a1;
          *((_QWORD *)v9 + 5) = 0LL;
          *((_QWORD *)v9 + 6) = 0LL;
          *((_DWORD *)v9 + 14) = -1;
          v10 = v9 + 64;
          v10[1] = v10;
          *v10 = v10;
          *(_QWORD *)v8 = &DXGVIRTUALGPUMANAGER_PARAV::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 188) = v8;
        goto LABEL_9;
      }
    }
    else
    {
      v8 = (char *)*((_QWORD *)a1 + 187);
      if ( !v8 )
      {
        v11 = (char *)operator new(0x50uLL, 0x4B677844u, 1, PagedPool);
        v8 = v11;
        if ( v11 )
        {
          v11[8] = 0;
          *((_QWORD *)v11 + 4) = a1;
          *((_QWORD *)v11 + 5) = 0LL;
          *((_QWORD *)v11 + 6) = 0LL;
          *((_DWORD *)v11 + 14) = -1;
          v12 = v11 + 64;
          v12[1] = v12;
          *v12 = v12;
          *(_QWORD *)v8 = &DXGVIRTUALGPUMANAGER_GPUP::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 187) = v8;
LABEL_9:
        if ( !v8 )
          return 3221225495LL;
      }
    }
    return (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 8LL))(v8, a3);
  }
  return result;
}
