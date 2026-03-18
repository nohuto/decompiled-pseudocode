/*
 * XREFs of Isoch_ProcessTransferCompletion @ 0x1C002A914
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C002DAA0 (Isoch_WdfEvtDpcForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x1C002DFD0 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     TR_TransfersReclaimed @ 0x1C00251D0 (TR_TransfersReclaimed.c)
 *     Isoch_CompleteTransfers @ 0x1C00290FC (Isoch_CompleteTransfers.c)
 *     Isoch_DoesDriverOwnRequests @ 0x1C00292F0 (Isoch_DoesDriverOwnRequests.c)
 */

void __fastcall Isoch_ProcessTransferCompletion(__int64 a1, char a2)
{
  char v3; // bp
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 v6; // rdi
  KIRQL v7; // al
  KIRQL v8; // r8
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v14; // [rsp+48h] [rbp-10h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F360);
  v14 = &v13;
  v13 = (__int64)&v13;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v5;
  if ( *(_BYTE *)(v4 + 332) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v5);
  }
  else
  {
    *(_BYTE *)(v4 + 332) = 1;
    v6 = v4 + 416;
    do
    {
      if ( *(_QWORD *)v6 != v6 )
      {
        *v14 = *(_QWORD *)v6;
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = v14;
        **(_QWORD **)(v4 + 424) = &v13;
        v14 = *(__int64 **)(v4 + 424);
        *(_QWORD *)(v4 + 424) = v4 + 416;
        *(_QWORD *)v6 = v6;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
      Isoch_CompleteTransfers(v4, &v13, a2);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      *(_BYTE *)(v4 + 104) = v7;
      v8 = v7;
    }
    while ( *(_QWORD *)v6 != v6 );
    if ( (*(_DWORD *)(v4 + 328) & 8) != 0 && !Isoch_DoesDriverOwnRequests((_QWORD *)v4) )
    {
      v3 = 1;
      *(_DWORD *)(v4 + 328) = v9 & 0xFFFFFFF7;
    }
    *(_BYTE *)(v4 + 332) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v8);
    if ( v3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = *(_QWORD *)(v4 + 56);
        v12 = *(_DWORD *)(v10 + 144);
        v11 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v10 + 80),
          5u,
          0xEu,
          0x2Bu,
          (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
          v11,
          v12);
      }
      TR_TransfersReclaimed(v4);
    }
  }
}
