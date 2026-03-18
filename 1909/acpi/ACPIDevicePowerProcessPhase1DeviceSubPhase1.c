/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00283C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0015594 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0028640 (WPP_RECORDER_SF_qLdqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // r14d
  unsigned int v4; // ebp
  int v5; // r15d
  __int64 *v6; // rsi
  int v7; // r8d
  void *v8; // rdx
  __int64 v9; // r9
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v5 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
    goto LABEL_3;
  }
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_3:
    v7 = 0;
    v8 = &unk_1C006FE7D;
    if ( v1 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v7 = v1;
      if ( (v9 & 0x200000000000LL) != 0 && (v9 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v8, v7, 56);
    ACPIDeviceCompleteGenericPhase((__int64)v6, v4, 0LL, a1);
    if ( v6 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v3 != 4 )
    goto LABEL_3;
  v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1397310559);
  if ( !v6 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v6, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  v6 = 0LL;
  if ( v4 != 259 )
    goto LABEL_3;
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C006FE7D;
  v13 = (const char *)&unk_1C006FE7D;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v1 + 560);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v13,
      0xAu,
      0x37u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      *(_DWORD *)(a1 + 212),
      v1,
      v12,
      v13);
  return 259LL;
}
