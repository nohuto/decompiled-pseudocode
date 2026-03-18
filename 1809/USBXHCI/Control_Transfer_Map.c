/*
 * XREFs of Control_Transfer_Map @ 0x1C0027110
 * Callers:
 *     Control_MapTransfer @ 0x1C0025CF8 (Control_MapTransfer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C0024580 (TR_EnsureInputBufferForTrbs.c)
 *     Control_Transfer_MapIntoRing @ 0x1C00273D4 (Control_Transfer_MapIntoRing.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C00411B8 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1, char a2)
{
  __int64 v2; // r14
  int v3; // ebx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // zf
  int v11; // r8d
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbx
  KIRQL v16; // di
  __int64 v17; // rcx
  void *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  bool v22; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 344);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 48);
  if ( *(_WORD *)(v6 + 2) == 50 && *(_DWORD *)(v6 + 56) )
  {
    *(_DWORD *)(v2 + 116) = 1;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(a1 + 336),
      -10000LL * *(unsigned int *)(v6 + 56));
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v7 + 24) <= 1u || (v8 = *(unsigned int *)(v6 + 64), (unsigned int)v8 >= *(_DWORD *)(v7 + 48)) )
    v9 = 0LL;
  else
    v9 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 56) + 2 * v8);
  *(_WORD *)(a1 + 112) = v9;
  if ( *(_BYTE *)(a1 + 280) && (v3 = TR_EnsureInputBufferForTrbs(a1, *(_DWORD *)(a1 + 196) + 1), v3 < 0) )
  {
    return (unsigned int)-1073741670;
  }
  else if ( *(_DWORD *)(v2 + 64) == 3 )
  {
    if ( *(_BYTE *)(a1 + 280) )
    {
      v10 = (*(_DWORD *)(a1 + 296))++ == -1;
      v11 = *(_DWORD *)(a1 + 296);
      if ( v10 )
      {
        *(_DWORD *)(a1 + 296) = 1;
        v11 = 1;
      }
      *(_DWORD *)(v2 + 200) = v11;
      if ( a2 )
      {
        KeLowerIrql(0);
        v11 = *(_DWORD *)(v2 + 200);
      }
      v3 = SecureDmaEnabler_PrepareMemoryForDma(
             *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
             *(_QWORD *)(v2 + 72),
             v11,
             *(_DWORD *)(v2 + 104),
             v11,
             (void *)(v2 + 168),
             *(_QWORD *)(v2 + 96));
      if ( a2 )
        KfRaiseIrql(2u);
      if ( v3 < 0 )
      {
        *(_DWORD *)(v2 + 200) = 0;
        Debug_FreAssertMsg(
          (__int64)"SecureDmaEnabler_PrepareMemoryForDma has failed",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
          2638);
        return (unsigned int)v3;
      }
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        **(_DWORD **)(v2 + 96) == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
        2631);
      LOBYTE(v12) = a2;
      Control_Transfer_MapIntoRing(a1, v12);
    }
    else
    {
      v13 = *(_QWORD **)(a1 + 40);
      v14 = *(_QWORD *)(v13[12] + 24LL);
      v15 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *v13);
      v16 = KfRaiseIrql(2u);
      v22 = (*(_BYTE *)(v6 + 32) & 1) == 0;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool))(*(_QWORD *)(v14 + 8) + 88LL))(
             v14,
             v15,
             *(_QWORD *)(v2 + 72),
             *(_QWORD *)(*(_QWORD *)(v2 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v2 + 72) + 44LL),
             *(_DWORD *)(v2 + 104),
             Control_EvtDmaCallback,
             a1,
             v22);
      KeLowerIrql(v16);
    }
    if ( v3 < 0 )
    {
      v17 = *(_QWORD *)(a1 + 56);
      LODWORD(v21) = v3;
      LODWORD(v20) = *(_DWORD *)(v17 + 144);
      LODWORD(v19) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v17 + 80),
        2u,
        0xEu,
        0x24u,
        (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
        v19,
        v20,
        v21);
    }
  }
  else
  {
    LOBYTE(v9) = a2;
    Control_Transfer_MapIntoRing(a1, v9);
  }
  return (unsigned int)v3;
}
