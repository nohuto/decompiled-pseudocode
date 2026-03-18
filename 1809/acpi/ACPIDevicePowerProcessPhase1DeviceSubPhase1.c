/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001B830
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001D208 (WPP_RECORDER_SF_qLdqss.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r10
  void *v10; // rax
  void *v11; // rdx
  __int64 v13; // r8
  void *v14; // rax
  void *v15; // rdx
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_QWORD *)(a1 + 232) = 0LL;
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
    v9 = 0;
    v10 = &unk_1C006E28A;
    v11 = &unk_1C006E28A;
    if ( v1 )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v9 = v1;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v10 = *(void **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v11 = *(void **)(v1 + 568);
      }
    }
    WPP_RECORDER_SF_qLdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v11,
      v7,
      56,
      (_DWORD)v16,
      a1,
      v4,
      *(_DWORD *)(a1 + 212),
      v9,
      (__int64)v10,
      (__int64)v11);
    ACPIDeviceCompleteGenericPhase(v6, v4, 0LL, a1);
    if ( v6 )
      AMLIDereferenceHandleEx((__int64)v6);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v3 != 4 )
    goto LABEL_3;
  v6 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397310559LL, v7, v8);
  if ( !v6 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v16 = ACPIDeviceCompleteGenericPhase;
  v4 = AMLIAsyncEvalObject(v6, 0LL, 0, 0LL);
  AMLIDereferenceHandleEx((__int64)v6);
  v6 = 0LL;
  if ( v4 != 259 )
    goto LABEL_3;
  v13 = *(_QWORD *)(v1 + 8);
  v14 = &unk_1C006E28A;
  v15 = &unk_1C006E28A;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v14 = *(void **)(v1 + 560);
    if ( (v13 & 0x400000000000LL) != 0 )
      v15 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v15,
    10,
    55,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    *(_DWORD *)(a1 + 212),
    v1,
    (__int64)v14,
    (__int64)v15);
  return 259LL;
}
