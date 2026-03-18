/*
 * XREFs of Bulk_ProcessTransferCompletion @ 0x1C0030618
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C0033300 (Bulk_WdfEvtDpcForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x1C0033700 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     TR_TransfersReclaimed @ 0x1C00251D0 (TR_TransfersReclaimed.c)
 *     Bulk_CompleteTransfers @ 0x1C002ECCC (Bulk_CompleteTransfers.c)
 *     Bulk_DoesDriverOwnRequests @ 0x1C002F178 (Bulk_DoesDriverOwnRequests.c)
 */

void __fastcall Bulk_ProcessTransferCompletion(__int64 a1, char a2)
{
  char v3; // bp
  __int64 v4; // rbx
  KIRQL v5; // al
  __int64 ****v6; // rdi
  KIRQL v7; // al
  KIRQL v8; // r8
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]
  __int64 ***v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 ****v15; // [rsp+48h] [rbp-10h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F360);
  v15 = &v14;
  v14 = (__int64 ***)&v14;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  *(_BYTE *)(v4 + 104) = v5;
  if ( *(_BYTE *)(v4 + 328) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v5);
  }
  else
  {
    *(_BYTE *)(v4 + 328) = 1;
    v6 = (__int64 ****)(v4 + 400);
    do
    {
      if ( *v6 != (__int64 ***)v6 )
      {
        *v15 = *v6;
        (*v6)[1] = (__int64 **)v15;
        **(_QWORD **)(v4 + 408) = &v14;
        v15 = *(__int64 *****)(v4 + 408);
        *(_QWORD *)(v4 + 408) = v4 + 400;
        *v6 = (__int64 ***)v6;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), *(_BYTE *)(v4 + 104));
      Bulk_CompleteTransfers(v4, &v14, a2);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
      *(_BYTE *)(v4 + 104) = v7;
      v8 = v7;
    }
    while ( *v6 != (__int64 ***)v6 );
    if ( (*(_DWORD *)(v4 + 324) & 0x40) != 0 && !Bulk_DoesDriverOwnRequests((_QWORD *)v4) )
    {
      v3 = 1;
      *(_DWORD *)(v4 + 324) = v9 & 0xFFFFFFBF;
    }
    *(_BYTE *)(v4 + 328) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v8);
    if ( v3 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v10 = *(_QWORD *)(v4 + 56);
        v13 = *(_DWORD *)(v4 + 64);
        v12 = *(_DWORD *)(v10 + 144);
        v11 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v10 + 80),
          5u,
          0xEu,
          0x10u,
          (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
          v11,
          v12,
          v13);
      }
      TR_TransfersReclaimed(v4);
    }
  }
}
