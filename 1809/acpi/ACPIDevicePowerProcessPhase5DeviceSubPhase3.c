/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rsi
  unsigned int v3; // r14d
  __int64 *v4; // r15
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  void *v19; // rax
  char v20; // [rsp+30h] [rbp-78h]
  _QWORD v21[6]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C006E28A;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = &unk_1C006E28A;
  v8 = &unk_1C006E28A;
  if ( v1 )
  {
    v9 = v1[1];
    v5 = (int)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v1[71];
    }
  }
  v20 = v5;
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    76,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v20,
    (__int64)v7,
    (__int64)v8);
  v12 = *(_DWORD *)(a1 + 56);
  v13 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v13 = 6;
  *(_DWORD *)(a1 + 212) = v13;
  if ( (v1[1] & 0x8000000000000LL) != 0 )
    goto LABEL_10;
  v4 = (__int64 *)AMLIGetNamedChild(v1[89], 1262701663LL, v10, v11);
  if ( !v4 )
  {
    if ( (v12 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x80uLL);
    }
    else if ( (v12 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_10;
  }
  memset(v21, 0, 0x28uLL);
  WORD1(v21[0]) = 1;
  if ( (v12 & 4) != 0 )
  {
    v15 = 1LL;
  }
  else
  {
    if ( (v12 & 8) == 0 )
    {
LABEL_10:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v15 = 0LL;
  }
  v16 = *(_QWORD *)(a1 + 40);
  v21[2] = v15;
  if ( v15 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v16 + 952), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 952), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0LL, 1u, v21, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v4);
  v17 = v1[1];
  v18 = 0;
  v4 = 0LL;
  v19 = &unk_1C006E28A;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v2 = (void *)v1[70];
    v18 = 0;
    if ( (v17 & 0x400000000000LL) != 0 )
      v19 = (void *)v1[71];
  }
  LOBYTE(v18) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v18,
    10,
    77,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    (char)v1,
    (__int64)v2,
    (__int64)v19);
  if ( v3 != 259 )
    goto LABEL_10;
  return 0LL;
}
