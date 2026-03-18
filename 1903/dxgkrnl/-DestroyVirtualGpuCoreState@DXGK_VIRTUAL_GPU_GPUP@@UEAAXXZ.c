/*
 * XREFs of ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C02169F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0210D10 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpuCoreState(
        DXGK_VIRTUAL_GPU_GPUP *this,
        __int64 a2,
        const GUID *a3)
{
  ULONG v4; // eax
  ADAPTER_RENDER *v5; // rcx
  unsigned int i; // edi
  __int64 v7; // rsi
  struct DXGALLOCATION **v8; // r8
  _DXGKARG_DESTROYVIRTUALGPU v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 176) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
    v9.PartitionId = v4;
    ADAPTER_RENDER::DdiDestroyVirtualGpu(v5, &v9, a3);
    *((_BYTE *)this + 176) = 0;
  }
  for ( i = 0; i < *((_DWORD *)this + 38); ++i )
  {
    v7 = 32LL * i;
    v8 = (struct DXGALLOCATION **)(v7 + *((_QWORD *)this + 21));
    if ( *v8 )
    {
      DXGDEVICE::DestroyAllocationInternal(
        *((DXGDEVICE **)this + 20),
        1u,
        v8,
        0LL,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
      *(_QWORD *)(v7 + *((_QWORD *)this + 21)) = 0LL;
    }
  }
  operator delete[](*((void **)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 38) = 0;
}
