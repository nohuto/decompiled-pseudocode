/*
 * XREFs of TR_AddTRBRangeToSecureTransferRing @ 0x1C0023B94
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C00273D4 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002C518 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0031FC4 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     WPP_RECORDER_SF_qiD @ 0x1C00033E0 (WPP_RECORDER_SF_qiD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_AddTRBRangeToSecureTransferRing(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _OWORD *a6,
        char a7)
{
  __int64 v11; // rbp
  unsigned int v12; // r15d
  _QWORD *v13; // r14
  _OWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r9d
  const char *v24; // rcx
  char v25; // bl
  __int64 v26; // rsi
  unsigned int v27; // r15d
  unsigned int v28; // r8d
  int v29; // esi
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h]
  int v34; // [rsp+38h] [rbp-30h]
  int v35; // [rsp+70h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 280) )
  {
    v11 = *(_QWORD *)(a1 + 304);
    v12 = 0;
    if ( !a2 || (v13 = (_QWORD *)*a2, (_QWORD *)*a2 == a2) )
      v13 = (_QWORD *)a3;
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a1 + 288);
    *(_DWORD *)(v11 + 32) = 44;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 24LL))(a1, v11);
    *(_QWORD *)(v11 + 72) = v13[3];
    v14 = a6;
    *(_DWORD *)(v11 + 80) = a4;
    *(_OWORD *)(v11 + 40) = *v14;
    *(_OWORD *)(v11 + 56) = v14[1];
    if ( a2 )
    {
      v15 = (_QWORD *)*a2;
      while ( a2 != v15 )
      {
        do
        {
          if ( a4 > *(_DWORD *)(a1 + 196) )
            break;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v33 = v15[3];
            v32 = v15[2];
            WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), (__int64)a2, a3, 0x19u, v31);
          }
          v16 = a4++;
          v17 = v15[2] + 16 * v16;
          v18 = v12++;
          *(_OWORD *)(v11 + 16 * v18 + 88) = *(_OWORD *)v17;
          if ( v12 == *(_DWORD *)(a1 + 312) )
            break;
        }
        while ( (*(_DWORD *)(v17 + 12) & 0xFC00) != 0x1800 );
        v15 = (_QWORD *)*v15;
        a4 = 0;
      }
    }
    v19 = a5;
    if ( a4 == a5 )
    {
LABEL_28:
      v25 = a7;
      *(_DWORD *)(v11 + 84) = v12;
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      if ( v25 )
        KeLowerIrql(0);
      v27 = 16 * v12;
      v28 = 0;
      if ( v27 + 88 >= v27 )
        v28 = v27 + 88;
      v29 = SecureChannel_SendRequestSynchronously(v26, v11, v28, (unsigned int)&v35, 4);
      if ( v25 )
        KfRaiseIrql(2u);
      if ( v29 >= 0 && v35 < 0 )
      {
        v30 = *(_QWORD *)(a1 + 56);
        v34 = v35;
        LODWORD(v33) = *(_DWORD *)(v30 + 144);
        LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v30 + 80),
          2u,
          0xEu,
          0x1Bu,
          (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids,
          v32,
          v33,
          v34);
      }
    }
    else
    {
      do
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v33 = *(_QWORD *)(a3 + 24);
          v32 = *(_QWORD *)(a3 + 16);
          WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), (__int64)a2, a3, 0x1Au, v31);
        }
        v20 = a4++;
        v21 = *(_QWORD *)(a3 + 16) + 16 * v20;
        v22 = v12++;
        *(_OWORD *)(v11 + 16 * v22 + 88) = *(_OWORD *)v21;
        if ( v12 == *(_DWORD *)(a1 + 312) )
          break;
        if ( (*(_DWORD *)(v21 + 12) & 0xFC00) == 0x1800 )
        {
          if ( *(_QWORD *)v21 != *(_QWORD *)(a3 + 24) )
          {
            v23 = 2298;
            v24 = "BUGBUG: Link TRB in last segment does not point back to itself";
            goto LABEL_27;
          }
          a4 = 0;
        }
      }
      while ( a4 != v19 );
      if ( a4 == v19 )
        goto LABEL_28;
      v23 = 2317;
      v24 = "BUGBUG: Current TRB Index does not match expected value";
LABEL_27:
      Debug_FreAssertMsg((__int64)v24, 0, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v23);
    }
  }
}
