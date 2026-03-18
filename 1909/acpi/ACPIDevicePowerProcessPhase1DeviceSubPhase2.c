/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0028140
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0028640 (WPP_RECORDER_SF_qLdqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v4; // ebp
  __int64 *v5; // r14
  int v6; // r8d
  void *v7; // rdx
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rdx
  void *v11; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(int *)(a1 + 104);
  v4 = 0;
  *(_DWORD *)(a1 + 212) = 5;
  v5 = *(__int64 **)(v1 + 8 * v2 + 408);
  if ( !v5 )
  {
    v6 = 0;
    v7 = &unk_1C006FE7D;
    if ( v1 )
    {
      v8 = *(_QWORD *)(v1 + 8);
      v6 = v1;
      if ( (v8 & 0x200000000000LL) != 0 && (v8 & 0x400000000000LL) != 0 )
        v7 = *(void **)(v1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v7, v6, 58);
LABEL_8:
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    return 0LL;
  }
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  v11 = &unk_1C006FE7D;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    if ( (v10 & 0x200000000000LL) != 0 && (v10 & 0x400000000000LL) != 0 )
      v11 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, v10, (_DWORD)v11, 57);
  result = 259LL;
  if ( v4 != 259 )
    goto LABEL_8;
  return result;
}
