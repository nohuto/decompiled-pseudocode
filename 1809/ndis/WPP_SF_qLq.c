/*
 * XREFs of WPP_SF_qLq @ 0x1C0043DA4
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C005B7C8 (ndisFInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C005B8E4 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisFInvokeSynchronousOidRequest @ 0x1C005B994 (ndisFInvokeSynchronousOidRequest.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C006321C (ndisMInvokeSynchronousOidRequest.c)
 *     ndisMQueueNewWorkItem @ 0x1C0063778 (ndisMQueueNewWorkItem.c)
 *     NdisMFreeSharedMemory @ 0x1C0064FB0 (NdisMFreeSharedMemory.c)
 *     NdisMAllocateSharedMemory @ 0x1C00D0310 (NdisMAllocateSharedMemory.c)
 *     ndisNotifyMiniports @ 0x1C010C298 (ndisNotifyMiniports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLq(unsigned __int16 a1, const struct _GUID *a2, __int64 a3, int a4)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(a2, a1, &v4);
}
