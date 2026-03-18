/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02A1C88
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int16 v8; // si
  __int64 v9; // rax
  __int64 v10; // rcx
  __int16 v12; // bx
  unsigned __int16 v13; // bx
  __int64 v14; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  _DWORD *v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  UINT v29; // eax
  DXGADAPTER *v30; // rbx
  const GUID *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v34; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v35[3]; // [rsp+50h] [rbp-30h] BYREF
  int v36; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  memset(&v34, 0, sizeof(v34));
  v8 = *(_WORD *)(a2 + 92);
  v36 = *(_DWORD *)(a2 + 24);
  if ( v8 <= 0x7Cu )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    v10 = *(unsigned __int16 *)(a2 + 92);
LABEL_3:
    *(_QWORD *)(v9 + 24) = v10;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *(_WORD *)(a2 + 94) = v8 - 124;
  if ( (unsigned __int16)(v8 - 124) < 0x80u )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    v10 = v8;
    goto LABEL_3;
  }
  v12 = (v8 - 124) & 0xFF80;
  *(_WORD *)(a2 + 94) = v12;
  v13 = v12 + 124;
  if ( v13 != v8 )
  {
    v14 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v14 + 24) = *(unsigned __int16 *)(a2 + 92) - (unsigned __int64)v13;
    WdLogEvent5_WdWarning(v14);
    v8 = *(_WORD *)(a2 + 92);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x74727044u);
  v20 = 0LL;
  v21 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)(a2 + 92));
    v24 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v22 = v24;
    if ( v24 < 0 )
      goto LABEL_11;
    memset(v35, 0, sizeof(v35));
    *(_QWORD *)&v34.Type = *(_QWORD *)&v35[0];
    v34.pInputData = &v36;
    v29 = *(unsigned __int16 *)(a2 + 92);
    *(&v34.InputDataSize + 1) = DWORD1(v35[1]);
    v34.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
    *(_OWORD *)&v34.OutputDataSize = v35[2];
    v34.OutputDataSize = v29;
    v34.InputDataSize = 4;
    v34.pOutputData = v21;
    v30 = *(DXGADAPTER **)(v2 + 3896);
    DXGADAPTER::IsCoreResourceSharedOwner(v30);
    v22 = (int)DXGADAPTER::DdiQueryAdapterInfo(v30, &v34, v31);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v22 < 0 )
    {
LABEL_11:
      v28 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v28 + 24) = v22;
      WdLogEvent5_WdError(v28);
    }
    else
    {
      **(_DWORD **)(a2 + 104) = *v21;
      v32 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v32 + 8) = *(_OWORD *)(v21 + 2);
      *(_OWORD *)(v32 + 24) = *(_OWORD *)(v21 + 6);
      *(_OWORD *)(v32 + 40) = *(_OWORD *)(v21 + 10);
      *(_QWORD *)(v32 + 56) = *((_QWORD *)v21 + 7);
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v21[16];
      v33 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v33 + 68) = *(_OWORD *)(v21 + 17);
      *(_OWORD *)(v33 + 84) = *(_OWORD *)(v21 + 21);
      *(_OWORD *)(v33 + 100) = *(_OWORD *)(v21 + 25);
      *(_DWORD *)(v33 + 116) = v21[29];
      do
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 104) + v20 + 120) = *((_BYTE *)v21 + v20 + 120);
        ++v20;
      }
      while ( v20 < 4 );
      memmove(*(void **)(a2 + 112), v21 + 31, *(unsigned __int16 *)(a2 + 94));
    }
    ExFreePoolWithTag(v21, 0);
  }
  else
  {
    LODWORD(v22) = -1073741670;
    v23 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v23 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v23);
  }
  return (unsigned int)v22;
}
