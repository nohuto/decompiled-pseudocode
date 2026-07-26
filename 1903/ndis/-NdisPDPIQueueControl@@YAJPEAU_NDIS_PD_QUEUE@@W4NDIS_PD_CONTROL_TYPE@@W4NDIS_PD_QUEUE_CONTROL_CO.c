/*
 * XREFs of ?NdisPDPIQueueControl@@YAJPEAU_NDIS_PD_QUEUE@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_QUEUE_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C0120380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qLLd @ 0x1C00C0758 (WPP_RECORDER_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIQueueControl(
        struct _NDIS_PD_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  _QWORD *v8; // rbp
  int v10; // esi
  int v11; // r15d
  __int64 v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v17; // eax
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+90h] [rbp+18h] BYREF

  v8 = a1->PDPlatformReserved[1];
  v10 = a3;
  v11 = a2;
  v13 = v8[4];
  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Du,
      0x34u,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      a2,
      a3);
  if ( v10 != 1 )
  {
    if ( v10 <= 1 )
      goto LABEL_36;
    if ( v10 <= 3 )
    {
      if ( *((_BYTE *)v8 + 60) )
        goto LABEL_8;
    }
    else
    {
      if ( v10 != 4 )
      {
        if ( v10 == 5 )
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
        a2 = *a4;
        v20 = a2;
        if ( (unsigned int)a2 > 0xFFFF )
        {
          v15 = -1073741585;
          goto LABEL_12;
        }
        if ( (_DWORD)a2 )
          v20 = a2 | (*(unsigned __int16 *)(*(_QWORD *)(v13 + 56) + 104LL) << 16);
        a4 = (unsigned int *)&v20;
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
  v15 = (*(__int64 (__fastcall **)(struct _NDIS_PD_QUEUE *, _QWORD, _QWORD, unsigned int *, unsigned int, void *, unsigned int, unsigned int *))(*(_QWORD *)(v13 + 80) + 88LL))(
          a1,
          0LL,
          (unsigned int)v10,
          a4,
          v14,
          a6,
          a7,
          a8);
  if ( (v15 & 0x80000000) == 0 )
  {
    switch ( v10 )
    {
      case 1:
        v17 = *a4;
        *((_DWORD *)v8 + 48) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 53;
        break;
      case 2:
        v17 = *a4;
        *((_DWORD *)v8 + 18) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 55;
        break;
      case 3:
        v17 = *a4;
        *((_DWORD *)v8 + 19) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 56;
        break;
      case 4:
        v17 = *a4;
        *((_DWORD *)v8 + 20) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 54;
        break;
      default:
        v17 = *a4;
        *((_DWORD *)v8 + 49) = *a4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v15;
        v18 = 57;
        break;
    }
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      29,
      v18,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      v17);
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x3Au, v19);
  return v15;
}
