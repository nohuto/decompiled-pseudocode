/*
 * XREFs of NdisMIndicateStatus @ 0x1C0098170
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0029408 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __stdcall NdisMIndicateStatus(
        NDIS_HANDLE MiniportHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        UINT StatusBufferSize)
{
  char v6; // si
  NDIS_STATUS v7; // edi
  int v9; // eax
  KIRQL v10; // al
  int v11; // edx
  KIRQL v12; // al
  __int64 *v13; // rcx
  char v14; // [rsp+30h] [rbp-99h]
  unsigned __int8 v15[4]; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+44h] [rbp-85h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-79h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-9h] BYREF
  int v19; // [rsp+C8h] [rbp-1h]
  int v20; // [rsp+CCh] [rbp+3h]
  __int64 v21; // [rsp+D0h] [rbp+7h]
  __int64 v22; // [rsp+D8h] [rbp+Fh]
  int v23; // [rsp+E0h] [rbp+17h]
  int v24; // [rsp+E4h] [rbp+1Bh]

  HIDWORD(v18) = 0;
  v20 = 0;
  v6 = 0;
  v7 = GeneralStatus;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = GeneralStatus;
    LOBYTE(GeneralStatus) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      GeneralStatus,
      13,
      185,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportHandle,
      v14);
  }
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v19 = *((_DWORD *)MiniportHandle + 87);
  v21 = *((_QWORD *)MiniportHandle + 345);
  v22 = *((_QWORD *)MiniportHandle + 346);
  v9 = *((_DWORD *)MiniportHandle + 203);
  StatusIndication.StatusBufferSize = StatusBufferSize;
  v23 = v9;
  v24 = *((_DWORD *)MiniportHandle + 204);
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportHandle;
  StatusIndication.StatusCode = v7;
  StatusIndication.StatusBuffer = StatusBuffer;
  v18 = 2621824LL;
  v20 = 0;
  if ( !*((_QWORD *)MiniportHandle + 3) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
    v15[0] = v10;
    if ( v7 == 1073807372 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v6 = 1;
      *((_DWORD *)MiniportHandle + 86) = 2;
      HIDWORD(v18) = 2;
    }
    if ( v7 == 1073807371 )
    {
      *((_BYTE *)MiniportHandle + 88) |= 8u;
      v6 = 1;
      *((_DWORD *)MiniportHandle + 86) = 1;
      HIDWORD(v18) = 1;
    }
    if ( v6 )
    {
      StatusIndication.StatusCode = 1073807383;
      StatusIndication.StatusBuffer = &v18;
      StatusIndication.StatusBufferSize = 40;
    }
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v10);
    goto LABEL_11;
  }
  if ( v7 == 1073807379 )
  {
LABEL_11:
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v15);
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, (__int128 *)&StatusIndication);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, v15[0]);
    goto LABEL_25;
  }
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportHandle + 12);
  if ( v7 == 1073807371 )
  {
    if ( *((_DWORD *)MiniportHandle + 86) == 1
      && !*((_DWORD *)MiniportHandle + 459)
      && *((_DWORD *)MiniportHandle + 458) == 1 )
    {
      StatusIndication.Flags |= 4u;
      v13 = (__int64 *)&v16;
      StatusIndication.StatusCode = 1073807384;
      v16 = 1;
      StatusIndication.StatusBufferSize = 4;
      goto LABEL_23;
    }
    HIDWORD(v18) = 1;
    v6 = 1;
  }
  if ( v7 == 1073807372 )
  {
    HIDWORD(v18) = 2;
    v6 = 1;
  }
  if ( !v6 )
    goto LABEL_24;
  StatusIndication.StatusCode = 1073807383;
  v13 = &v18;
  StatusIndication.StatusBufferSize = 40;
LABEL_23:
  StatusIndication.StatusBuffer = v13;
LABEL_24:
  *((_QWORD *)MiniportHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v12);
  NdisMIndicateStatusEx(MiniportHandle, &StatusIndication);
LABEL_25:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      13,
      186,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportHandle,
      v7);
  }
}
