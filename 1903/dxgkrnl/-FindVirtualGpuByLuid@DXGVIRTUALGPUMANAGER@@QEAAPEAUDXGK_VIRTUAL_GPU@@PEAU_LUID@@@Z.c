/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C020E774
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C020E738 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        struct _KTHREAD **this,
        struct _LUID *a2)
{
  __int64 LowPart; // r8
  DXGVIRTUALGPUMANAGER *v5; // rdx
  DXGVIRTUALGPUMANAGER *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, this + 5);
  v5 = (DXGVIRTUALGPUMANAGER *)(this + 8);
  v6 = this[8];
  if ( v6 == (DXGVIRTUALGPUMANAGER *)(this + 8) )
  {
LABEL_5:
    v8 = WdLogNewEntry5_WdError(v6, v5, LowPart);
    *(_QWORD *)(v8 + 24) = a2->HighPart;
    *(_QWORD *)(v8 + 32) = a2->LowPart;
    WdLogEvent5_WdError(v8);
    v7 = 0LL;
  }
  else
  {
    LowPart = a2->LowPart;
    while ( 1 )
    {
      v7 = (char *)v6 - 112;
      if ( *a2 == *(_QWORD *)((char *)v6 - 84) )
        break;
      v6 = *(DXGVIRTUALGPUMANAGER **)v6;
      if ( v6 == v5 )
        goto LABEL_5;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return (struct DXGK_VIRTUAL_GPU *)v7;
}
