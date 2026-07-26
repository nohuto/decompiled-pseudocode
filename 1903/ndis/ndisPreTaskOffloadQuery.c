/*
 * XREFs of ndisPreTaskOffloadQuery @ 0x1C006EC38
 * Callers:
 *     ndisOidPreTaskOffload @ 0x1C006E760 (ndisOidPreTaskOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0068380 (-ndisGetTaskBytes@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFillOffloadCapsInTasks @ 0x1C006A884 (ndisFillOffloadCapsInTasks.c)
 */

char __fastcall ndisPreTaskOffloadQuery(char a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  struct _NDIS_MINIPORT_BLOCK **v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  _DWORD *v8; // r14
  _DWORD *v9; // rcx
  KIRQL v10; // al
  KIRQL v11; // r15
  unsigned int TaskBytes; // r12d
  __int64 v14; // [rsp+40h] [rbp-38h]

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = (struct _NDIS_MINIPORT_BLOCK **)(v2 + 32);
  if ( !v2 )
    v6 = (struct _NDIS_MINIPORT_BLOCK **)a2;
  v7 = *v6;
  v8 = (_DWORD *)(a2 + 40);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xD0u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v7,
      a1,
      1,
      *v8);
  if ( !v7->Offload )
  {
    *v8 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v4 + 48) < 0x1Cu )
  {
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = ndisGetTaskBytes(v7);
    goto LABEL_17;
  }
  v9 = *(_DWORD **)(v4 + 40);
  if ( *v9 != 1 || v9[1] != 28 || v9[4] != 2 || (v9[5] & 1) == 0 || v9[6] != 14 )
    goto LABEL_16;
  v10 = KeAcquireSpinLockRaiseToDpc(&v7->Lock);
  v7->MiniportThread = KeGetCurrentThread();
  v11 = v10;
  TaskBytes = ndisGetTaskBytes(v7);
  if ( TaskBytes == 28 )
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v11);
LABEL_16:
    *(_DWORD *)(a2 + 40) = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v4 + 48) >= TaskBytes )
  {
    ndisFillOffloadCapsInTasks((__int64)v7, v4);
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v11);
    *(_DWORD *)(a2 + 40) = 0;
  }
  else
  {
    v7->MiniportThread = 0LL;
    KeReleaseSpinLock(&v7->Lock, v11);
    *(_DWORD *)(a2 + 40) = -1073676266;
    *(_DWORD *)(v4 + 56) = TaskBytes;
  }
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = *v8;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xD1u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v7,
      a1,
      1,
      v14);
  }
  return 1;
}
