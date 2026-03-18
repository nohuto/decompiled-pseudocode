/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C00297F4
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C00242A0 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0028B78 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C0028CA4 (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  signed __int64 v5; // r13
  char v6; // bl
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 *v11; // rdi
  int v12; // edx
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // r14
  __int64 v15; // r8
  unsigned __int8 *NextStage; // rax
  char result; // al
  int v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+B0h] [rbp+8h]
  int v20; // [rsp+B8h] [rbp+10h]

  v20 = (int)a2;
  v5 = *a2;
  v6 = 0;
  v18 = 0;
  v8 = 0;
  v9 = 0LL;
  v19 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( v5 == v10 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x24u,
        (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v8 = *(_DWORD *)(a1 + 376);
      v6 = 1;
    }
    else
    {
      v11 = *(__int64 **)(a1 + 384);
      if ( (__int64 *)(a1 + 384) != v11 )
      {
        while ( 1 )
        {
          *((_BYTE *)v11 + 133) = *((_BYTE *)v11 + 132);
          *((_BYTE *)v11 + 134) = *((_BYTE *)v11 + 130);
LABEL_13:
          NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v11 + 128);
          v9 = (__int64)NextStage;
          if ( NextStage )
            break;
          v11 = (__int64 *)*v11;
          if ( (__int64 *)(a1 + 384) == v11 )
            goto LABEL_19;
        }
        v12 = *((_DWORD *)NextStage + 22);
        v13 = NextStage + 24;
        v14 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
        while ( v13 != v14 )
        {
          if ( TR_DoesSegmentContainDequeuePointer((__int64)v14, v12, 0xFFFFFFFF, v5) )
            goto LABEL_16;
          v14 = *(unsigned __int8 **)v14;
          v12 = 0;
        }
        if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v9 + 96), v12, *(_DWORD *)(v9 + 104), v5) )
        {
          ++v19;
          goto LABEL_13;
        }
LABEL_16:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            5u,
            v15,
            0x25u,
            (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            v11[3],
            v9);
        v18 = Isoch_CalculateBytesTransferred(a1, v9, v20);
        v6 = 1;
LABEL_19:
        v8 = v19;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0x23u,
      (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *a3 = v9 & -(__int64)(v6 != 0);
  *a4 = v6 != 0 ? v8 : 0;
  result = v6;
  *a5 = v6 != 0 ? v18 : 0;
  return result;
}
