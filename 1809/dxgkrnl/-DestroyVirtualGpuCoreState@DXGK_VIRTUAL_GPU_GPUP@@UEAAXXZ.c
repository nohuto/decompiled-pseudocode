/*
 * XREFs of ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C01E73D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C01E19B8 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpuCoreState(
        DXGK_VIRTUAL_GPU_GPUP *this,
        __int64 a2,
        const GUID *a3)
{
  ULONG v4; // eax
  ADAPTER_RENDER *v5; // rcx
  __int64 i; // rdi
  struct DXGALLOCATION **v7; // r8
  _DXGKARG_DESTROYVIRTUALGPU v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 176) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
    v8.PartitionId = v4;
    ADAPTER_RENDER::DdiDestroyVirtualGpu(v5, &v8, a3);
    *((_BYTE *)this + 176) = 0;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
  {
    v7 = (struct DXGALLOCATION **)(*((_QWORD *)this + 21) + 8 * i);
    if ( *v7 )
    {
      DXGDEVICE::DestroyAllocationInternal(
        *((DXGDEVICE **)this + 20),
        1u,
        v7,
        0LL,
        0LL,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
      *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i) = 0LL;
    }
  }
  operator delete[](*((void **)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 38) = 0;
}
