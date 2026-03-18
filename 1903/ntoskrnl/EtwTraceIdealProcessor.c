/*
 * XREFs of EtwTraceIdealProcessor @ 0x14032DACC
 * Callers:
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400F9424 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeSetIdealProcessorThreadEx @ 0x140126AD0 (KeSetIdealProcessorThreadEx.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1401966B4 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x1402AD280 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceIdealProcessor(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v4[0] = *(_DWORD *)(a1 + 1616);
    v5 = v4;
    v7 = 0;
    v4[2] = a4;
    v4[1] = a3;
    v6 = 12;
    EtwTraceKernelEvent((__int64)&v5, 1u, 0x88000000, a2, 0x1501903u);
  }
}
