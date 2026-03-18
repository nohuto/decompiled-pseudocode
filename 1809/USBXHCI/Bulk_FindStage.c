/*
 * XREFs of Bulk_FindStage @ 0x1C002F800
 * Callers:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C0030478 (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C00307E8 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0030AC8 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C00242A0 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0033FEC (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, signed __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // di
  int v7; // r15d
  unsigned __int8 *v8; // rbp
  __int64 v9; // rcx
  __int64 *v10; // rsi
  int v11; // edx
  unsigned __int8 *v12; // r13
  unsigned __int8 *v13; // r15
  int v14; // r8d
  unsigned __int8 *NextStage; // rax
  int v16; // edx
  int v18; // [rsp+90h] [rbp+8h]

  v5 = 0;
  v7 = 0;
  v18 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    if ( a2 == v9 )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x30u,
        (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64));
      v7 = *(_DWORD *)(a1 + 348);
      v5 = 1;
    }
    else
    {
      v10 = *(__int64 **)(a1 + 368);
      if ( (__int64 *)(a1 + 368) != v10 )
      {
        while ( 1 )
        {
          *((_BYTE *)v10 + 133) = *((_BYTE *)v10 + 132);
          *((_BYTE *)v10 + 134) = *((_BYTE *)v10 + 130);
LABEL_13:
          NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v10 + 128);
          v8 = NextStage;
          if ( NextStage )
            break;
          v10 = (__int64 *)*v10;
          if ( (__int64 *)(a1 + 368) == v10 )
            goto LABEL_19;
        }
        v11 = *((_DWORD *)NextStage + 26);
        v12 = NextStage + 24;
        v13 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
        while ( v12 != v13 )
        {
          if ( TR_DoesSegmentContainDequeuePointer((__int64)v13, v11, 0xFFFFFFFF, a2) )
            goto LABEL_16;
          v13 = *(unsigned __int8 **)v13;
          v11 = 0;
        }
        if ( !TR_DoesSegmentContainDequeuePointer(*((_QWORD *)v8 + 14), v11, *((_DWORD *)v8 + 30), a2) )
        {
          ++v18;
          goto LABEL_13;
        }
LABEL_16:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v16) = 5;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v14, 49);
        }
        v5 = 1;
LABEL_19:
        v7 = v18;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Fu,
      (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  *a3 = (unsigned __int64)v8 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v7 : 0;
  return v5;
}
