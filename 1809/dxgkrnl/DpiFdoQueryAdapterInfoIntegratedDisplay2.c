/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C0266664
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0145088 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C014517C (DxgkAcquireAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0273C40 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rax
  DXGADAPTER *v10; // rbx
  const GUID *v11; // r8
  unsigned __int16 v12; // ax
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  DXGADAPTER *v17; // rbx
  const GUID *v18; // r8
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-39h] BYREF
  __int64 v22; // [rsp+28h] [rbp-31h]
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v24; // [rsp+60h] [rbp+7h] BYREF
  int v25; // [rsp+C0h] [rbp+67h] BYREF
  int v26; // [rsp+C8h] [rbp+6Fh] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v25 = *(_DWORD *)(a2 + 24);
  v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
  v7 = v5;
  if ( v5 < 0 )
    goto LABEL_2;
  memset(&v24, 0, sizeof(v24));
  *(_QWORD *)&v23.Type = *(_QWORD *)&v24.Type;
  v23.pInputData = &v25;
  v9 = *(void **)(a2 + 104);
  *(&v23.InputDataSize + 1) = *(&v24.InputDataSize + 1);
  v23.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
  *(_OWORD *)&v23.OutputDataSize = *(_OWORD *)&v24.OutputDataSize;
  v23.OutputDataSize = 128;
  v23.InputDataSize = 4;
  v23.pOutputData = v9;
  v10 = *(DXGADAPTER **)(v3 + 3792);
  DXGADAPTER::IsCoreResourceSharedOwner(v10);
  v7 = (int)DXGADAPTER::DdiQueryAdapterInfo(v10, &v23, v11);
  DpiReleaseCoreSyncAccessSafe(a1, 0);
  if ( (int)v7 < 0 )
    goto LABEL_2;
  LOBYTE(v6) = *(_BYTE *)(*(_QWORD *)(a2 + 104) + 123LL);
  if ( (_BYTE)v6 != 1 )
  {
    if ( (_BYTE)v6 != 2 )
    {
      v19 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v19 + 24) = *(unsigned __int8 *)(*(_QWORD *)(a2 + 104) + 123LL);
      *(_QWORD *)(v19 + 32) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdError(v19);
      LODWORD(v7) = -1073741811;
      return (unsigned int)v7;
    }
    v14 = *(unsigned __int16 *)(a2 + 92);
    v26 = *(_DWORD *)(a2 + 24);
    v15 = *(_QWORD *)(a2 + 120);
    *(_WORD *)(a2 + 96) = v14;
    LODWORD(v21) = v14;
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    v22 = v15;
    memset(&v24, 0, sizeof(v24));
    v24.Type = DXGKQAITYPE_DISPLAYID_DESCRIPTOR;
    v24.pInputData = &v26;
    v24.InputDataSize = 4;
    v24.pOutputData = &v21;
    v24.OutputDataSize = 16;
    v16 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v7 = v16;
    if ( v16 < 0 )
      goto LABEL_2;
    v17 = *(DXGADAPTER **)(v3 + 3792);
    DXGADAPTER::IsCoreResourceSharedOwner(v17);
    v7 = (int)DXGADAPTER::DdiQueryAdapterInfo(v17, &v24, v18);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
LABEL_8:
    if ( (int)v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_2;
  }
  v12 = *(_WORD *)(a2 + 92);
  *(_WORD *)(a2 + 94) = v12;
  *(_QWORD *)(a2 + 120) = 0LL;
  *(_WORD *)(a2 + 96) = 0;
  if ( v12 >= 0x80u )
  {
    v21 = 0LL;
    v13 = *(_QWORD *)(v3 + 3792);
    HIDWORD(v21) = v12;
    v22 = *(_QWORD *)(a2 + 112);
    DxgkAcquireAdapterDdiSync(v13, 1);
    v7 = (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))DpiDxgkDdiQueryDeviceDescriptor)(
                *(_QWORD *)(v3 + 40),
                *(_QWORD *)(v3 + 48),
                *(unsigned int *)(a2 + 24),
                &v21);
    DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v3 + 3792));
    goto LABEL_8;
  }
  v7 = -1073741811LL;
LABEL_2:
  v8 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v8 + 24) = v7;
  WdLogEvent5_WdError(v8);
  return (unsigned int)v7;
}
