/*
 * XREFs of McTemplateK0ppp @ 0x1C0026C5C
 * Callers:
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z @ 0x1C003494C (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@H@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0036AB0 (VidSchCreateHwQueue.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0059484 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C006A814 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006BF94 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C007DE50 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00B7110 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     VidSchReportAdapter @ 0x1C00C8AC0 (VidSchReportAdapter.c)
 *     VidSchReportHwQueue @ 0x1C00CA250 (VidSchReportHwQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     McGenEventWrite @ 0x1C00262A8 (McGenEventWrite.c)
 */

ULONG McTemplateK0ppp(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  v10 = 8LL;
  va_copy(v9, va2);
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 4u, &EventData);
}
