/*
 * XREFs of ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00183C0
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00626E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0081928 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     VidSchInitializeAdapter @ 0x1C0081ED0 (VidSchInitializeAdapter.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C0082FD0 (VidSchiReadGlobalConfiguration.c)
 *     VidSchCreateSchedulingLogs @ 0x1C008CAD4 (VidSchCreateSchedulingLogs.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A6B44 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetDriverVersion(DXGADAPTER *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 540);
  switch ( v1 )
  {
    case 9472:
      return 2500LL;
    case 9216:
      return 2400LL;
    case 8960:
      return 2300LL;
    case 8704:
      return 2200LL;
    case 8448:
      return 2100LL;
    case 8192:
      return 2000LL;
  }
  if ( v1 == 4864 || *((_QWORD *)this + 89) )
    return 1300LL;
  if ( v1 == 4608 )
    return 1200LL;
  if ( *((_QWORD *)this + 85) && *((_QWORD *)this + 84) && (*((_DWORD *)this + 469) & 4) != 0 )
    return 1105LL;
  return 1000LL;
}
