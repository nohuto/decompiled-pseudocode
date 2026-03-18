/*
 * XREFs of ?FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@PEAU_LUID@@@Z @ 0x1C01DF41C
 * Callers:
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C01DF3E0 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGK_VIRTUAL_GPU *__fastcall DXGVIRTUALGPUMANAGER::FindVirtualGpuByLuid(
        DXGVIRTUALGPUMANAGER *this,
        struct _LUID *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rdx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  char *v6; // rbx
  __int64 v7; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (DXGVIRTUALGPUMANAGER *)((char *)this + 40));
  v4 = (DXGVIRTUALGPUMANAGER *)((char *)this + 64);
  v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 8);
  if ( v5 == (DXGVIRTUALGPUMANAGER *)((char *)this + 64) )
  {
LABEL_5:
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = a2->HighPart;
    *(_QWORD *)(v7 + 32) = a2->LowPart;
    WdLogEvent5_WdError(v7);
    v6 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = (char *)v5 - 112;
      if ( a2->LowPart == *((_DWORD *)v5 - 21) && a2->HighPart == *((_DWORD *)v6 + 8) )
        break;
      v5 = *(DXGVIRTUALGPUMANAGER **)v5;
      if ( v5 == v4 )
        goto LABEL_5;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return (struct DXGK_VIRTUAL_GPU *)v6;
}
