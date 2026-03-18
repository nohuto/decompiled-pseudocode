/*
 * XREFs of Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x1C00186E8
 * Callers:
 *     Endpoint_OnResetSetDequeuePointer @ 0x1C0017638 (Endpoint_OnResetSetDequeuePointer.c)
 *     Endpoint_OnResetSetDequeuePointerCompletion @ 0x1C0017750 (Endpoint_OnResetSetDequeuePointerCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

PDEVICE_OBJECT __fastcall Endpoint_StreamsOnResetSetDequeuePointerComplete(__int64 *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  signed __int32 v4; // edi
  PDEVICE_OBJECT result; // rax

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 136);
  v4 = _InterlockedIncrement((volatile signed __int32 *)(v3 + 20));
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (PDEVICE_OBJECT)WPP_RECORDER_SF_dddd(
                               *(_QWORD *)(v2 + 80),
                               5u,
                               0xDu,
                               0x28u,
                               (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
                               *(unsigned __int8 *)(*(_QWORD *)(v2 + 16) + 135LL),
                               *(_DWORD *)(v2 + 144),
                               a2,
                               v4);
  if ( v4 == *(_DWORD *)(v3 + 8) )
  {
    *(_DWORD *)(v2 + 280) = 0;
    return (PDEVICE_OBJECT)ESM_AddEvent((PVOID)(v2 + 288));
  }
  return result;
}
