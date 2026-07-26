/*
 * XREFs of ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C0100110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qLLd @ 0x1C007C3B8 (WPP_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIQueueControl(
        struct _NDIS_PD_QUEUE *a1,
        __int64 a2,
        enum NDIS_PD_QUEUE_CONTROL_CODE a3,
        int *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v8; // rsi
  int v11; // r15d
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v17; // r9d
  unsigned __int16 v18; // cx
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+90h] [rbp+18h] BYREF

  v8 = a1->PDPlatformReserved[1];
  v11 = a2;
  v13 = v8[4];
  v21 = 0;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_qdD(0x34u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1, a2, a3);
  if ( a3 != NdisPDQCTLQueueDepthThreshold )
  {
    if ( a3 <= NdisPDQCTLQueueDepthThreshold )
      goto LABEL_36;
    if ( a3 <= NdisPDQCTLModerationCount )
    {
      if ( *((_BYTE *)v8 + 60) )
        goto LABEL_8;
    }
    else
    {
      if ( a3 != NdisPDQCTLNotificationGroupId )
      {
        if ( a3 == NdisPDQCTLSchedulerQueueId )
          goto LABEL_8;
LABEL_36:
        v15 = -1073741637;
        goto LABEL_12;
      }
      if ( *((_BYTE *)v8 + 60) )
      {
        if ( *((_BYTE *)v8 + 61) )
        {
          v15 = -1073741436;
          goto LABEL_12;
        }
        if ( v11 || !a4 || a5 < 4 )
          goto LABEL_11;
        a2 = (unsigned int)*a4;
        v21 = a2;
        if ( (unsigned int)a2 > 0xFFFF )
        {
          v15 = -1073741585;
          goto LABEL_12;
        }
        if ( (_DWORD)a2 )
          v21 = a2 | (*(unsigned __int16 *)(*(_QWORD *)(v13 + 56) + 104LL) << 16);
        a4 = &v21;
        v14 = 4;
        goto LABEL_27;
      }
    }
    v15 = -1073741808;
    goto LABEL_12;
  }
LABEL_8:
  if ( v11 || !a4 || (v14 = a5, a5 < 4) )
  {
LABEL_11:
    v15 = -1073741811;
    goto LABEL_12;
  }
LABEL_27:
  v15 = (*(__int64 (__fastcall **)(struct _NDIS_PD_QUEUE *, _QWORD, _QWORD, int *, unsigned int, void *, unsigned int, unsigned int *))(*(_QWORD *)(v13 + 80) + 88LL))(
          a1,
          0LL,
          (unsigned int)a3,
          a4,
          v14,
          a6,
          a7,
          a8);
  if ( (v15 & 0x80000000) == 0 )
  {
    switch ( a3 )
    {
      case NdisPDQCTLQueueDepthThreshold:
        v17 = *a4;
        *((_DWORD *)v8 + 48) = *a4;
        if ( (unsigned __int8)byte_1C00A026C < 4u )
          return v15;
        v18 = 53;
        break;
      case NdisPDQCTLModerationInterval:
        v17 = *a4;
        *((_DWORD *)v8 + 18) = *a4;
        if ( (unsigned __int8)byte_1C00A026C < 4u )
          return v15;
        v18 = 55;
        break;
      case NdisPDQCTLModerationCount:
        v17 = *a4;
        *((_DWORD *)v8 + 19) = *a4;
        if ( (unsigned __int8)byte_1C00A026C < 4u )
          return v15;
        v18 = 56;
        break;
      case NdisPDQCTLNotificationGroupId:
        v17 = *a4;
        *((_DWORD *)v8 + 20) = *a4;
        if ( (unsigned __int8)byte_1C00A026C < 4u )
          return v15;
        v18 = 54;
        break;
      default:
        v17 = *a4;
        *((_DWORD *)v8 + 49) = *a4;
        if ( (unsigned __int8)byte_1C00A026C < 4u )
          return v15;
        v18 = 57;
        break;
    }
    WPP_SF_qD(v18, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)a1, v17);
  }
LABEL_12:
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    LODWORD(v20) = v15;
    LODWORD(v19) = a3;
    WPP_SF_qLLd(0x3Au, a2, (__int64)a1, v11, v19, v20);
  }
  return v15;
}
