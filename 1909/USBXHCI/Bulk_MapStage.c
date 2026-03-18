/*
 * XREFs of Bulk_MapStage @ 0x1C0034954
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0034D68 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0036F00 (Bulk_Stage_MapIntoRing.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0037CE4 (Bulk_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C0046A48 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r15
  char v4; // bl
  unsigned int v6; // ebp
  __int64 v7; // r14
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  unsigned __int16 v11; // ax
  bool v12; // cc
  char v13; // al
  __int64 v14; // r14
  int v15; // esi
  int v16; // edi
  __int64 v17; // rbx
  int v18; // edi
  __int128 v19; // xmm0
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbp
  __int64 v24; // rdi
  KIRQL v25; // si
  __int64 v26; // rdi
  __int64 v27; // r9
  bool v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+98h] [rbp+10h]
  __int64 v32; // [rsp+A0h] [rbp+18h]

  v31 = a2;
  v3 = *(__int64 **)(a1 + 360);
  v4 = a2;
  v6 = 1;
  v7 = *v3;
  v30 = *v3;
  if ( *(_DWORD *)(*v3 + 76) != 3 )
  {
    Bulk_Stage_MapIntoRing(v3, a2);
    return 0;
  }
  if ( *(_BYTE *)(a1 + 280) )
  {
    v8 = *(_DWORD *)(a1 + 296);
    v9 = v8 == -1;
    v10 = v8 + 1;
    *(_DWORD *)(a1 + 296) = v10;
    if ( v9 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v10 = 1;
    }
    *((_DWORD *)v3 + 40) = v10;
    if ( (_BYTE)a2 )
      KeLowerIrql(0);
    v32 = *(_QWORD *)(v7 + 48);
    v11 = *(_WORD *)(v32 + 2);
    if ( v11 <= 0x38u || (v12 = v11 <= 0x3Au, v13 = 1, !v12) )
      v13 = 0;
    if ( v13 )
    {
      v14 = v3[7];
      v15 = *((_DWORD *)v3 + 40);
      v16 = *((_DWORD *)v3 + 10);
      v17 = *(unsigned int *)(v30 + 112);
      memset(v3 + 16, 0, 0x20uLL);
      *((_DWORD *)v3 + 34) = v16;
      *((_DWORD *)v3 + 33) = v17;
      *(_DWORD *)v14 = 1;
      *(_QWORD *)(v14 + 16) = v17;
      v4 = v31;
      *(_DWORD *)(v14 + 24) = v16;
      v18 = 0;
      v7 = v30;
      *((_DWORD *)v3 + 35) = v15;
      v19 = *(_OWORD *)(v32 + 36);
      *((_DWORD *)v3 + 32) = 2;
      *((_OWORD *)v3 + 9) = v19;
    }
    else
    {
      v18 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              v3[6],
              a3,
              *((_DWORD *)v3 + 10),
              *((_DWORD *)v3 + 40),
              v3 + 16,
              v3[7]);
    }
    if ( v4 )
      KfRaiseIrql(2u);
    if ( v18 >= 0 )
    {
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        *(_DWORD *)v3[7] == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
        2960);
      LOBYTE(v20) = v4;
      Bulk_Stage_MapIntoRing(v3, v20);
      v6 = 0;
    }
    else
    {
      *((_DWORD *)v3 + 40) = 0;
    }
LABEL_21:
    if ( v18 >= 0 )
      return v6;
    goto LABEL_22;
  }
  v21 = *(_QWORD **)(a1 + 40);
  v22 = *(_QWORD *)(v7 + 48);
  v23 = *(_QWORD *)(v21[12] + 24LL);
  v24 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *v21);
  v25 = KfRaiseIrql(2u);
  v29 = (*(_BYTE *)(v22 + 32) & 1) == 0;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64 *, bool))(*(_QWORD *)(v23 + 8) + 88LL))(
          v23,
          v24,
          v3[6],
          *(_QWORD *)(v3[6] + 32) + *(unsigned int *)(v3[6] + 44),
          *((_DWORD *)v3 + 10),
          Bulk_EvtDmaCallback,
          v3,
          v29);
  KeLowerIrql(v25);
  if ( v18 >= 0 )
  {
    v6 = _InterlockedXor((volatile signed __int32 *)(a1 + 336), 1u) != 0 ? 2 : 0;
    goto LABEL_21;
  }
LABEL_22:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v26 = *v3;
  if ( *((_BYTE *)v3 + 44) )
  {
    IoFreeMdl((PMDL)v3[6]);
    v3[6] = 0LL;
    *((_BYTE *)v3 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v26 + 128), (unsigned __int8 *)v3);
  if ( *(_DWORD *)(v7 + 120) == *(_DWORD *)(v7 + 116) )
  {
    LOBYTE(v27) = 1;
    Bulk_Transfer_CompleteCancelable(a1, v7, 3221229568LL, v27);
    v6 = 3;
  }
  else
  {
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v6;
}
