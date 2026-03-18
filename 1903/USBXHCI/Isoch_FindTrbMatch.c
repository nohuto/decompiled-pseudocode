/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C002E1B4
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002F5E4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0027C18 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C002894C (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C002D4F8 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C002D624 (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // bl
  int v7; // r13d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 *i; // rdi
  unsigned __int8 *NextStage; // rax
  signed __int64 v12; // r10
  int v13; // edx
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r14
  __int64 v16; // r8
  char result; // al
  signed __int64 v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+B0h] [rbp+8h]
  int v20; // [rsp+B8h] [rbp+10h]

  v20 = (int)a2;
  v6 = 0;
  v7 = 0;
  v19 = 0;
  v8 = 0LL;
  v18 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( *a2 == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x24u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v7 = *(_DWORD *)(a1 + 376);
LABEL_23:
      v6 = 1;
    }
    else
    {
      for ( i = *(__int64 **)(a1 + 384); (__int64 *)(a1 + 384) != i; i = (__int64 *)*i )
      {
        *((_BYTE *)i + 133) = *((_BYTE *)i + 132);
        *((_BYTE *)i + 134) = *((_BYTE *)i + 130);
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
        while ( 2 )
        {
          v8 = (__int64)NextStage;
          if ( NextStage )
          {
            v13 = *((_DWORD *)NextStage + 22);
            v14 = NextStage + 24;
            v15 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
            while ( v14 != v15 )
            {
              if ( TR_DoesSegmentContainDequeuePointer((__int64)v15, v13, 0xFFFFFFFF, v12) )
                goto LABEL_19;
              v15 = *(unsigned __int8 **)v15;
              v13 = 0;
              v12 = v18;
            }
            if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v8 + 96), v13, *(_DWORD *)(v8 + 104), v12) )
            {
              ++v7;
              NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
              v12 = v18;
              continue;
            }
LABEL_19:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                5u,
                v16,
                0x25u,
                (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                i[3],
                v8);
            }
            v19 = Isoch_CalculateBytesTransferred(a1, v8, v20);
            goto LABEL_23;
          }
          break;
        }
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0x23u,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *a3 = v8 & -(__int64)(v6 != 0);
  *a4 = v6 != 0 ? v7 : 0;
  result = v6;
  *a5 = v6 != 0 ? v19 : 0;
  return result;
}
