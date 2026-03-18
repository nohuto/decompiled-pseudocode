/*
 * XREFs of VidSchiUpdateDdiHwContextPriority @ 0x1C00CA9A0
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C00342C4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x1C00CA2B0 (VidSchSetAbsolutePriorityHwContext.c)
 *     VidSchSetInProcessPriorityHwContext @ 0x1C00CA420 (VidSchSetInProcessPriorityHwContext.c)
 *     VidSchSetPriorityHwContext @ 0x1C00CA4C0 (VidSchSetPriorityHwContext.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x1C0024B54 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 */

__int64 __fastcall VidSchiUpdateDdiHwContextPriority(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES v9; // [rsp+20h] [rbp-30h] BYREF

  memset(&v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(_QWORD *)(v2 + 32);
  if ( !*(_BYTE *)(a1 + 88) )
  {
    v7 = *(_DWORD *)(v3 + 16);
    if ( v7 )
    {
      if ( v7 == 5 )
      {
        if ( *(_BYTE *)(v3 + 2624) )
          goto LABEL_8;
        LODWORD(v5) = *(_DWORD *)(a1 + 68);
LABEL_13:
        v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_REALTIME;
        v9.realtimeBandPriorityLevel = v5;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(a1 + 76) & 1) != 0 )
        goto LABEL_8;
      if ( *(_DWORD *)(a1 + 68) != -7 )
      {
        v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_NORMAL;
        goto LABEL_15;
      }
    }
    v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_IDLE;
    goto LABEL_15;
  }
  v5 = *(unsigned int *)(a1 + 84);
  v6 = gulPublicPriorityToSchedulingPriority[v5];
  if ( v6 > 0x10 )
    goto LABEL_13;
  if ( v6 == 16 )
  {
LABEL_8:
    v9.priorityBand = DXGK_SCHEDULING_PRIORITY_BAND_FOCUS;
    goto LABEL_15;
  }
  v9.priorityBand = v6 != 0;
LABEL_15:
  v9.inProcessPriority = *(_DWORD *)(a1 + 72);
  v9.hContext = *(HANDLE *)(a1 + 48);
  v9.quantum = 20000LL;
  v9.gracePeriodSamePriority = 10000LL;
  v9.gracePeriodLowerPriority = 0LL;
  return ADAPTER_RENDER::DdiSetContextSchedulingProperties(*(ADAPTER_RENDER **)(*(_QWORD *)(v4 + 16) + 2528LL), &v9);
}
