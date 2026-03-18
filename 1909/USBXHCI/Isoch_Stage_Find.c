/*
 * XREFs of Isoch_Stage_Find @ 0x1C0030D7C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0027C18 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C002D124 (WPP_RECORDER_SF_DDqDD.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  unsigned __int8 *v9; // rbx
  __int64 v10; // r8
  unsigned __int8 *v12; // r10
  unsigned __int8 *NextStage; // rax
  void *v14; // r11
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 384);
  v5 = *(__int64 **)(a1 + 384);
  v9 = 0LL;
  if ( (__int64 *)(a1 + 384) == v5 )
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v17) = HIDWORD(*(_QWORD *)a3);
      LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
      LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x13u,
        (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
        v15,
        v16,
        v17,
        v3);
    }
  }
  else
  {
    while ( 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          (unsigned int)v16,
          0x12u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          v15,
          v16,
          v5[3]);
      }
      v10 = HIDWORD(*(_QWORD *)a3);
      if ( *(_DWORD *)(v5[6] + 128) == v10 )
        break;
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        goto LABEL_7;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v17) = *(_DWORD *)(v5[6] + 128);
      LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
      LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        v10,
        0x14u,
        (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
        v15,
        v16,
        v17,
        v10,
        v3);
    }
    v12 = (unsigned __int8 *)(v5 + 16);
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    do
    {
      NextStage = StageQueue_ForwardScanGetNextStage(v12);
      v9 = NextStage;
      if ( !NextStage )
      {
        if ( WPP_RECORDER_INITIALIZED != v14 )
        {
          LODWORD(v19) = v3;
          LODWORD(v18) = HIDWORD(*(_QWORD *)a3);
          LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
          LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
          WPP_RECORDER_SF_DDqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            *(unsigned __int8 *)(a2 + 15),
            (unsigned int)v16,
            0x16u,
            (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
            v15,
            v16,
            v5[3],
            v18,
            v19);
        }
        return 0LL;
      }
    }
    while ( v3 > *((_DWORD *)NextStage + 11) );
    if ( !v3 || v3 > *((_DWORD *)NextStage + 12) - 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != v14 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v18) = v3 + 1;
        LODWORD(v17) = *((_DWORD *)NextStage + 12);
        LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x15u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          v15,
          v16,
          v17,
          v18);
      }
      *((_DWORD *)v5 + 25) = v3 + 1;
      *((_DWORD *)v9 + 12) = v3 + 1;
    }
  }
  return v9;
}
