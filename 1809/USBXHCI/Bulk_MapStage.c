/*
 * XREFs of Bulk_MapStage @ 0x1C002FC50
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0030010 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0031FC4 (Bulk_Stage_MapIntoRing.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C (Bulk_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C00412D0 (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // r14
  char v4; // di
  unsigned int v6; // ebx
  __int64 v7; // r12
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  int v13; // eax
  int v14; // ebp
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rdi
  KIRQL v20; // si
  __int64 v21; // rbx
  __int64 v22; // r9
  bool v24; // [rsp+38h] [rbp-30h]

  v3 = *(unsigned __int8 **)(a1 + 360);
  v4 = a2;
  v6 = 1;
  v7 = *(_QWORD *)v3;
  if ( *(_DWORD *)(*(_QWORD *)v3 + 76LL) != 3 )
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 360), a2);
    return 0;
  }
  if ( *(_BYTE *)(a1 + 280) )
  {
    v8 = (*(_DWORD *)(a1 + 296))++ == -1;
    v9 = *(_DWORD *)(a1 + 296);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v9 = 1;
    }
    *((_DWORD *)v3 + 40) = v9;
    if ( (_BYTE)a2 )
      KeLowerIrql(0);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(_WORD *)(v10 + 2);
    if ( v11 > 0x38u && v11 <= 0x3Au )
      v13 = SecureDmaEnabler_PrepareSecureSectionForDma(
              (int)v10 + 36,
              *(_DWORD *)(v7 + 112),
              *((_DWORD *)v3 + 10),
              *((_DWORD *)v3 + 40),
              v3 + 128,
              *((_QWORD *)v3 + 7));
    else
      v13 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *((_QWORD *)v3 + 6),
              a3,
              *((_DWORD *)v3 + 10),
              *((_DWORD *)v3 + 40),
              v3 + 128,
              *((_QWORD *)v3 + 7));
    v14 = v13;
    if ( v4 )
      KfRaiseIrql(2u);
    if ( v14 >= 0 )
    {
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        **((_DWORD **)v3 + 7) == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
        2947);
      LOBYTE(v15) = v4;
      Bulk_Stage_MapIntoRing(v3, v15);
      v6 = 0;
    }
    else
    {
      *((_DWORD *)v3 + 40) = 0;
    }
LABEL_22:
    if ( v14 >= 0 )
      return v6;
    goto LABEL_23;
  }
  v16 = *(_QWORD **)(a1 + 40);
  v17 = *(_QWORD *)(v7 + 48);
  v18 = *(_QWORD *)(v16[12] + 24LL);
  v19 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *v16);
  v20 = KfRaiseIrql(2u);
  v24 = (*(_BYTE *)(v17 + 32) & 1) == 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), unsigned __int8 *, bool))(*(_QWORD *)(v18 + 8) + 88LL))(
          v18,
          v19,
          *((_QWORD *)v3 + 6),
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 32LL) + *(unsigned int *)(*((_QWORD *)v3 + 6) + 44LL),
          *((_DWORD *)v3 + 10),
          Bulk_EvtDmaCallback,
          v3,
          v24);
  KeLowerIrql(v20);
  if ( v14 >= 0 )
  {
    v6 = _InterlockedXor((volatile signed __int32 *)(a1 + 336), 1u) != 0 ? 2 : 0;
    goto LABEL_22;
  }
LABEL_23:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v21 = *(_QWORD *)v3;
  if ( v3[44] )
  {
    IoFreeMdl(*((PMDL *)v3 + 6));
    *((_QWORD *)v3 + 6) = 0LL;
    v3[44] = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v21 + 128), v3);
  if ( *(_DWORD *)(v7 + 120) == *(_DWORD *)(v7 + 116) )
  {
    LOBYTE(v22) = 1;
    Bulk_Transfer_CompleteCancelable(a1, v7, 3221229568LL, v22);
    v6 = 3;
  }
  else
  {
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v6;
}
