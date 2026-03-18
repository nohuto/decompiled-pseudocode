/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02663D8
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00BCC88 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00BCE94 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // si
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  __int16 v10; // bx
  unsigned __int16 v11; // bx
  __int64 v12; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  _DWORD *v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  UINT v22; // eax
  DXGADAPTER *v23; // rbx
  const GUID *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  struct _DXGKARG_QUERYADAPTERINFO v27; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v28[3]; // [rsp+50h] [rbp-30h] BYREF
  int v29; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *(_WORD *)(a2 + 92);
  v6 = *(_QWORD *)(a1 + 64);
  v29 = *(_DWORD *)(a2 + 24);
  if ( v3 <= 0x7Cu )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    v8 = *(unsigned __int16 *)(a2 + 92);
LABEL_3:
    *(_QWORD *)(v7 + 24) = v8;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *(_WORD *)(a2 + 94) = v3 - 124;
  if ( (unsigned __int16)(v3 - 124) < 0x80u )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    v8 = v3;
    goto LABEL_3;
  }
  v10 = (v3 - 124) & 0xFF80;
  *(_WORD *)(a2 + 94) = v10;
  v11 = v10 + 124;
  if ( v11 != v3 )
  {
    v12 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = *(unsigned __int16 *)(a2 + 92) - (unsigned __int64)v11;
    WdLogEvent5_WdWarning(v12);
    v3 = *(_WORD *)(a2 + 92);
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x74727044u);
  v15 = 0LL;
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)(a2 + 92));
    v19 = DpiAcquireCoreSyncAccessSafe(a1, 0);
    v17 = v19;
    if ( v19 < 0 )
      goto LABEL_11;
    memset(v28, 0, sizeof(v28));
    *(_QWORD *)&v27.Type = *(_QWORD *)&v28[0];
    v27.pInputData = &v29;
    v22 = *(unsigned __int16 *)(a2 + 92);
    *(&v27.InputDataSize + 1) = DWORD1(v28[1]);
    v27.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR;
    *(_OWORD *)&v27.OutputDataSize = v28[2];
    v27.OutputDataSize = v22;
    v27.InputDataSize = 4;
    v27.pOutputData = v16;
    v23 = *(DXGADAPTER **)(v6 + 3792);
    DXGADAPTER::IsCoreResourceSharedOwner(v23);
    v17 = (int)DXGADAPTER::DdiQueryAdapterInfo(v23, &v27, v24);
    DpiReleaseCoreSyncAccessSafe(a1, 0);
    if ( (int)v17 < 0 )
    {
LABEL_11:
      v21 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v21 + 24) = v17;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      **(_DWORD **)(a2 + 104) = *v16;
      v25 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v25 + 8) = *(_OWORD *)(v16 + 2);
      *(_OWORD *)(v25 + 24) = *(_OWORD *)(v16 + 6);
      *(_OWORD *)(v25 + 40) = *(_OWORD *)(v16 + 10);
      *(_QWORD *)(v25 + 56) = *((_QWORD *)v16 + 7);
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 64LL) = v16[16];
      v26 = *(_QWORD *)(a2 + 104);
      *(_OWORD *)(v26 + 68) = *(_OWORD *)(v16 + 17);
      *(_OWORD *)(v26 + 84) = *(_OWORD *)(v16 + 21);
      *(_OWORD *)(v26 + 100) = *(_OWORD *)(v16 + 25);
      *(_DWORD *)(v26 + 116) = v16[29];
      do
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 104) + v15 + 120) = *((_BYTE *)v16 + v15 + 120);
        ++v15;
      }
      while ( v15 < 4 );
      memmove(*(void **)(a2 + 112), v16 + 31, *(unsigned __int16 *)(a2 + 94));
    }
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
    LODWORD(v17) = -1073741670;
    v18 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v18 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v18);
  }
  return (unsigned int)v17;
}
