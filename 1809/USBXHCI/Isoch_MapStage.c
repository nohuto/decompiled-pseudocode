/*
 * XREFs of Isoch_MapStage @ 0x1C0029B84
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0029F94 (Isoch_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002C518 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C00412D0 (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1, char a2)
{
  __int64 *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // r13
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  int v12; // eax
  int v13; // edi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  KIRQL v19; // si
  __int64 v20; // rdi
  bool v22; // [rsp+38h] [rbp-30h]

  v2 = *(__int64 **)(a1 + 368);
  v5 = 1;
  v6 = *v2;
  *(_DWORD *)(a1 + 352) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    v7 = (*(_DWORD *)(a1 + 296))++ == -1;
    v8 = *(_DWORD *)(a1 + 296);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 296) = 1;
      v8 = 1;
    }
    *((_DWORD *)v2 + 40) = v8;
    if ( a2 )
      KeLowerIrql(0);
    v9 = *(_QWORD *)(v6 + 48);
    v10 = *(_WORD *)(v9 + 2);
    if ( v10 > 0x38u && v10 <= 0x3Au )
      v12 = SecureDmaEnabler_PrepareSecureSectionForDma(
              (int)v9 + 36,
              *(_DWORD *)(v6 + 88) + *(_DWORD *)(v6 + 92),
              *((_DWORD *)v2 + 13),
              *((_DWORD *)v2 + 40),
              v2 + 16,
              v2[9]);
    else
      v12 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              v2[8],
              (int)v2 + 128,
              *((_DWORD *)v2 + 13),
              *((_DWORD *)v2 + 40),
              v2 + 16,
              v2[9]);
    v13 = v12;
    if ( a2 )
      KfRaiseIrql(2u);
    if ( v13 < 0 )
    {
      *((_DWORD *)v2 + 40) = 0;
      goto LABEL_22;
    }
    Debug_FreAssertMsg(
      (__int64)"ScatterGatherList->NumberOfElements must be 1",
      *(_DWORD *)v2[9] == 1,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      3795);
    LOBYTE(v14) = a2;
    Isoch_Stage_MapIntoRing(v2, v14);
    goto LABEL_20;
  }
  v15 = *(_QWORD **)(a1 + 40);
  v16 = *(_QWORD *)(v6 + 48);
  v17 = *(_QWORD *)(v15[12] + 24LL);
  v18 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          *v15);
  v19 = KfRaiseIrql(2u);
  v22 = (*(_BYTE *)(v16 + 32) & 1) == 0;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64 *, bool))(*(_QWORD *)(v17 + 8) + 88LL))(
          v17,
          v18,
          v2[8],
          *(_QWORD *)(v2[8] + 32) + *(unsigned int *)(v2[8] + 44),
          *((_DWORD *)v2 + 13),
          Isoch_EvtDmaCallback,
          v2,
          v22);
  KeLowerIrql(v19);
  if ( v13 >= 0 )
  {
    if ( _InterlockedXor((volatile signed __int32 *)(a1 + 340), 1u) )
    {
      v5 = 2;
LABEL_22:
      if ( v13 >= 0 )
        return v5;
      goto LABEL_23;
    }
LABEL_20:
    v5 = *(_DWORD *)(a1 + 352) != 0 ? 4 : 0;
    goto LABEL_22;
  }
LABEL_23:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v20 = *v2;
  if ( *((_BYTE *)v2 + 56) )
  {
    IoFreeMdl((PMDL)v2[8]);
    v2[8] = 0LL;
    *((_BYTE *)v2 + 56) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v2 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v2 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v20 + 128), (unsigned __int8 *)v2);
  if ( *(_DWORD *)(v6 + 112) == *(_DWORD *)(v6 + 116) )
    Isoch_Transfer_CompleteCancelable(a1, v6, -1, -1073737728, 0, 0);
  else
    *(_DWORD *)(v6 + 108) = *(_DWORD *)(v6 + 96) - *(_DWORD *)(v6 + 104);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1;
}
