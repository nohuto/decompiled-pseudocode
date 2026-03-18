/*
 * XREFs of McTemplateK0pq @ 0x1C002672C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002548 (VidSchiSetFlipDevice.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013BD8 (-VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C005FC34 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z @ 0x1C006A32C (-IsAllowedToGrow@VIDMM_DMA_POOL@@IEAAHKKK@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0075E94 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007BC10 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1C007CF94 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1C00AC1DC (-SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B0010 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C00B03D8 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00B04BC (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C00B06A0 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ @ 0x1C00B2B20 (-NeedToBeTrimmed@VIDMM_DMA_POOL@@IEAAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00262A8 (McGenEventWrite.c)
 */

ULONG McTemplateK0pq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-48h] BYREF
  va_list v5; // [rsp+40h] [rbp-38h]
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  va_list v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  va_copy(v8, va1);
  v10 = 0;
  v9 = 4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 3u, &v4);
}
