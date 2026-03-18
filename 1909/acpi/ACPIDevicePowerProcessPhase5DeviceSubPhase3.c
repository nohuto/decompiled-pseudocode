/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0029070
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  const char *v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // r15
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // ebp
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  _QWORD v17[6]; // [rsp+50h] [rbp-58h] BYREF

  v2 = 0;
  memset(v17, 0, 0x28uLL);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (const char *)&unk_1C006FE7D;
  LOBYTE(v5) = 0;
  v6 = 0LL;
  v7 = (const char *)&unk_1C006FE7D;
  v8 = (const char *)&unk_1C006FE7D;
  if ( v3 )
  {
    v9 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD *)(a1 + 40);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v3 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v3 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Cu,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v5,
      v7,
      v8);
  v10 = *(_DWORD *)(a1 + 56);
  v11 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v11 = 6;
  *(_DWORD *)(a1 + 212) = v11;
  if ( (*(_QWORD *)(v3 + 8) & 0x8000000000000LL) != 0 )
    goto LABEL_12;
  v6 = AMLIGetNamedChild(*(__int64 **)(v3 + 712), 1262701663);
  if ( !v6 )
  {
    if ( (v10 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
    }
    else if ( (v10 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_12;
  }
  WORD1(v17[0]) = 1;
  if ( (v10 & 4) != 0 )
  {
    v13 = 1LL;
  }
  else
  {
    if ( (v10 & 8) == 0 )
    {
LABEL_12:
      ACPIDeviceCompleteGenericPhase((__int64)v6, v2, 0LL, a1);
      return 0LL;
    }
    v13 = 0LL;
  }
  v14 = *(_QWORD *)(a1 + 40);
  v17[2] = v13;
  if ( v13 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v14 + 952), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 952), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v2 = AMLIAsyncEvalObject(v6, 0LL, 1u, v17, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v6);
  v15 = *(_QWORD *)(v3 + 8);
  v6 = 0LL;
  v16 = (const char *)&unk_1C006FE7D;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v4 = *(const char **)(v3 + 560);
    if ( (v15 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(v3 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Du,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v2,
      v3,
      v4,
      v16);
  if ( v2 != 259 )
    goto LABEL_12;
  return 0LL;
}
