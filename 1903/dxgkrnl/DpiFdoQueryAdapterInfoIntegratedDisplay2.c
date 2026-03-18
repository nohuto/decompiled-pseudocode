/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02A1F24
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0153C70 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0153CA4 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C01580F0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rax
  DXGADAPTER *v12; // rbx
  const GUID *v13; // r8
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  int v19; // eax
  DXGADAPTER *v20; // rbx
  const GUID *v21; // r8
  __int64 v22; // rax
  unsigned int v24; // [rsp+20h] [rbp-39h] BYREF
  int v25; // [rsp+24h] [rbp-35h]
  __int64 v26; // [rsp+28h] [rbp-31h]
  struct _DXGKARG_QUERYADAPTERINFO v27; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v28; // [rsp+60h] [rbp+7h] BYREF
  int v29; // [rsp+C0h] [rbp+67h] BYREF
  int v30; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(&v27, 0, sizeof(v27));
  v29 = *(_DWORD *)(a2 + 24);
  v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
  v9 = v5;
  if ( v5 < 0 )
    goto LABEL_2;
  memset(&v28, 0, sizeof(v28));
  *(_QWORD *)&v27.Type = *(_QWORD *)&v28.Type;
  v27.pInputData = &v29;
  v11 = *(void **)(a2 + 104);
  *(&v27.InputDataSize + 1) = *(&v28.InputDataSize + 1);
  v27.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
  *(_OWORD *)&v27.OutputDataSize = *(_OWORD *)&v28.OutputDataSize;
  v27.OutputDataSize = 128;
  v27.InputDataSize = 4;
  v27.pOutputData = v11;
  v12 = *(DXGADAPTER **)(v2 + 3896);
  DXGADAPTER::IsCoreResourceSharedOwner(v12);
  v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(v12, &v27, v13);
  DpiReleaseCoreSyncAccessSafe(a1, 0);
  if ( (int)v9 < 0 )
    goto LABEL_2;
  v6 = 1LL;
  LOBYTE(v7) = *(_BYTE *)(*(_QWORD *)(a2 + 104) + 123LL);
  if ( (_BYTE)v7 != 1 )
  {
    if ( (_BYTE)v7 != 2 )
    {
      v22 = WdLogNewEntry5_WdError(v7, 1LL, v8);
      *(_QWORD *)(v22 + 24) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 104) + 123LL);
      *(_QWORD *)(v22 + 32) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdError(v22);
      LODWORD(v9) = -1073741811;
      return (unsigned int)v9;
    }
    v18 = *(unsigned __int16 *)(a2 + 92);
    v30 = *(_DWORD *)(a2 + 24);
    v25 = 0;
    v26 = *(_QWORD *)(a2 + 120);
    v28.pInputData = &v30;
    *(_WORD *)(a2 + 96) = v18;
    v24 = v18;
    v28.pOutputData = &v24;
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)&v28.Type = 20LL;
    *(_QWORD *)&v28.InputDataSize = 4LL;
    *(_QWORD *)&v28.Flags.0 = 0LL;
    HIDWORD(v28.hKmdProcessHandle) = 0;
    v28.OutputDataSize = 16;
    v19 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v9 = v19;
    if ( v19 < 0 )
      goto LABEL_2;
    v20 = *(DXGADAPTER **)(v2 + 3896);
    DXGADAPTER::IsCoreResourceSharedOwner(v20);
    v9 = (int)DXGADAPTER::DdiQueryAdapterInfo(v20, &v28, v21);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_8:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_2;
  }
  v14 = *(_WORD *)(a2 + 92);
  *(_WORD *)(a2 + 94) = v14;
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_WORD *)(a2 + 96) = 0;
  if ( v14 >= 0x80u )
  {
    v15 = *(_QWORD *)(v2 + 3896);
    v25 = v14;
    v26 = *(_QWORD *)(a2 + 112);
    v24 = 0;
    DxgkAcquireAdapterDdiSync(v15, 1LL, v8);
    v9 = (int)DpiDxgkDdiQueryDeviceDescriptor(
                *(_QWORD *)(v2 + 40),
                *(_QWORD *)(v2 + 48),
                *(unsigned int *)(a2 + 24),
                &v24);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v2 + 3896), v16, v17);
    goto LABEL_8;
  }
  v9 = -1073741811LL;
LABEL_2:
  v10 = WdLogNewEntry5_WdError(v7, v6, v8);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdError(v10);
  return (unsigned int)v9;
}
