/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  unsigned int v2; // r14d
  _QWORD *v3; // rbx
  const char *v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 *v7; // rbp
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  _QWORD v13[6]; // [rsp+50h] [rbp-48h] BYREF

  v2 = 0;
  memset(v13, 0, 0x28uLL);
  v3 = *(_QWORD **)(a1 + 40);
  v4 = (const char *)&unk_1C006FE7D;
  v5 = *(unsigned int *)(a1 + 104);
  LOBYTE(v6) = 0;
  v7 = 0LL;
  v8 = (const char *)&unk_1C006FE7D;
  if ( v3 )
  {
    v9 = v3[1];
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v3[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v3[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x53u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v6,
      v4,
      v8);
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v5 == 1 )
    goto LABEL_13;
  WORD1(v13[0]) = 1;
  v10 = (__int64 *)AMLIGetParent(v3[89]);
  v7 = AMLIGetNamedChild(v10, 1398034527);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
  if ( !v7 )
    goto LABEL_13;
  v11 = (unsigned int)v5 < 7 ? (unsigned int)AcpiSystemStateTranslation[v5] : 0xFFFFFFFFLL;
  v13[2] = v11;
  v2 = AMLIAsyncEvalObject(v7, 0LL, 1u, v13, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
  result = 259LL;
  v7 = 0LL;
  if ( v2 != 259 )
  {
LABEL_13:
    ACPIDeviceCompleteGenericPhase((__int64)v7, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
