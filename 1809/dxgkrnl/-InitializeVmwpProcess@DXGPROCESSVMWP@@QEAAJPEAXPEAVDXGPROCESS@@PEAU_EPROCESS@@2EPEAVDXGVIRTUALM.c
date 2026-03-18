/*
 * XREFs of ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0229D80
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0039D70 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C0228368 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 */

__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6,
        struct DXGVIRTUALMACHINE *a7)
{
  DXGVIRTUALMACHINE *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !*((_BYTE *)this + 480) )
  {
    if ( a7 )
    {
      *((_QWORD *)this + 57) = a7;
      *((_QWORD *)a7 + 7) = this;
      v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 57);
    }
    else
    {
      v11 = (DXGVIRTUALMACHINE *)operator new(0x100uLL, 0x4B677844u, 1, PagedPool);
      if ( v11 )
        v11 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v11, this);
      *((_QWORD *)this + 57) = v11;
    }
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdLowResource(this);
      *(_QWORD *)(v12 + 24) = 4983LL;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 480) )
      {
        v14 = WdLogNewEntry5_WdAssertion(this);
        *(_QWORD *)(v14 + 24) = 4989LL;
        WdLogEvent5_WdAssertion(v14);
        v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 57);
      }
      *((_QWORD *)this + 58) = a3;
      *((_QWORD *)v11 + 24) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 57) + 248LL) = 1;
      if ( Object )
      {
        v15 = *((_QWORD *)this + 57);
        *((_BYTE *)this + 323) |= 0x10u;
        *(_QWORD *)(v15 + 184) = Object;
        ObfReferenceObject(Object);
      }
      *((_BYTE *)this + 480) = 1;
    }
  }
  return 0LL;
}
