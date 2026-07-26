/*
 * XREFs of ?ndisCoIndicateStatusInternal@@YAXPEAX0PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0081F5C
 * Callers:
 *     NdisMCoIndicateStatus @ 0x1C0086560 (NdisMCoIndicateStatus.c)
 *     NdisMCoIndicateStatusEx @ 0x1C0086660 (NdisMCoIndicateStatusEx.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0016CD8 (ndisWriteWmiStatusIndication.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCoIndicateStatusInternal(_QWORD *a1, _QWORD *a2, struct _NDIS_STATUS_INDICATION *a3)
{
  unsigned int StatusCode; // ebp
  int *StatusBuffer; // r14
  _QWORD *v6; // rdi
  unsigned int StatusBufferSize; // r15d
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  struct _NDIS_RW_LOCK_EX *v20; // rcx
  __int64 i; // rdi
  __int64 v22; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  StatusCode = a3->StatusCode;
  StatusBuffer = (int *)a3->StatusBuffer;
  v6 = a2;
  StatusBufferSize = a3->StatusBufferSize;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      19,
      55,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
  v9 = (char *)(v6 + 37);
  if ( !v6 )
    v9 = (char *)a1[482];
  if ( v9 )
    ndisWriteWmiStatusIndication((__int64)a1, (int)v9, (__int64)a3, StatusCode, StatusBuffer, StatusBufferSize);
  if ( StatusCode == 1073807371 )
  {
    v11 = a1[505];
    *((_DWORD *)a1 + 30) |= 0x20000000u;
    *(_DWORD *)(v11 + 1220) = 1;
  }
  else
  {
    if ( StatusCode != 1073807372 )
      goto LABEL_12;
    v10 = a1[505];
    *((_DWORD *)a1 + 30) &= ~0x20000000u;
    *(_DWORD *)(v10 + 1220) = 2;
  }
  *((_DWORD *)a1 + 30) |= 0x4000000u;
LABEL_12:
  if ( v6 )
  {
    v12 = (_QWORD *)v6[9];
    v13 = v12[4];
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 80);
      v15 = *(_QWORD *)(v14 + 24);
      if ( *(_BYTE *)(v15 + 56) >= 6u && *(_QWORD *)(v15 + 192) )
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_STATUS_INDICATION *))(v15 + 192))(
          *(_QWORD *)(v14 + 32),
          v6[3],
          a3);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, unsigned int))(v15 + 192))(
          *(_QWORD *)(v14 + 32),
          v6[3],
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
    v16 = v12[5];
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 80);
      v18 = *(_QWORD *)(v17 + 24);
      if ( *(_BYTE *)(v18 + 56) >= 6u && *(_QWORD *)(v18 + 192) )
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_STATUS_INDICATION *))(v18 + 192))(
          *(_QWORD *)(v17 + 32),
          v12[3],
          a3);
      else
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, unsigned int))(v18 + 192))(
          *(_QWORD *)(v17 + 32),
          v12[3],
          StatusCode,
          StatusBuffer,
          StatusBufferSize);
    }
  }
  else
  {
    v19 = a1[50];
    if ( v19 )
    {
      v20 = *(struct _NDIS_RW_LOCK_EX **)(v19 + 288);
      *(_WORD *)&LockState.OldIrql = 0;
      LockState.Flags = 0;
      NdisAcquireRWLockRead(v20, &LockState, 0);
      for ( i = a1[7]; i; i = *(_QWORD *)(i + 392) )
      {
        if ( (*(_DWORD *)(i + 224) & 0x8000) == 0 && *(_QWORD *)(*(_QWORD *)(i + 24) + 192LL) )
        {
          ndisMReferenceOpen(i, 0x11u);
          v22 = *(_QWORD *)(i + 24);
          if ( *(_BYTE *)(v22 + 56) >= 6u && *(_QWORD *)(v22 + 192) )
            (*(void (__fastcall **)(_QWORD, _QWORD, struct _NDIS_STATUS_INDICATION *))(v22 + 192))(
              *(_QWORD *)(i + 32),
              0LL,
              a3);
          else
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, unsigned int))(v22 + 192))(
              *(_QWORD *)(i + 32),
              0LL,
              StatusCode,
              StatusBuffer,
              StatusBufferSize);
          ndisMDereferenceOpenUnlocked(i, 17);
        }
      }
      NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a1[50] + 288LL), &LockState);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      19,
      56,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
}
