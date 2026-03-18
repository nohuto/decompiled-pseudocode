/*
 * XREFs of Bulk_FindStage @ 0x1C00344E0
 * Callers:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C00351E8 (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C003558C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C0035890 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0027C18 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C002894C (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0038FDC (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, signed __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // di
  int v7; // r13d
  unsigned __int8 *v8; // r14
  __int64 v9; // rcx
  __int64 *i; // rsi
  int v11; // edx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r15
  int v14; // r8d
  unsigned __int8 *NextStage; // rax
  int v16; // edx

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    if ( a2 == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x31u,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64));
      v7 = *(_DWORD *)(a1 + 348);
LABEL_22:
      v5 = 1;
    }
    else
    {
      for ( i = *(__int64 **)(a1 + 368); (__int64 *)(a1 + 368) != i; i = (__int64 *)*i )
      {
        *((_BYTE *)i + 133) = *((_BYTE *)i + 132);
        *((_BYTE *)i + 134) = *((_BYTE *)i + 130);
        while ( 2 )
        {
          NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
          v8 = NextStage;
          if ( NextStage )
          {
            v11 = *((_DWORD *)NextStage + 26);
            v12 = NextStage + 24;
            v13 = (unsigned __int8 *)*((_QWORD *)v8 + 3);
            while ( v12 != v13 )
            {
              if ( TR_DoesSegmentContainDequeuePointer((__int64)v13, v11, 0xFFFFFFFF, a2) )
                goto LABEL_19;
              v13 = *(unsigned __int8 **)v13;
              v12 = v8 + 24;
              v11 = 0;
            }
            if ( !TR_DoesSegmentContainDequeuePointer(*((_QWORD *)v8 + 14), v11, *((_DWORD *)v8 + 30), a2) )
            {
              ++v7;
              continue;
            }
LABEL_19:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v16) = 5;
              WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v14, 50);
            }
            goto LABEL_22;
          }
          break;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x30u,
      (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  *a3 = (unsigned __int64)v8 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v7 : 0;
  return v5;
}
