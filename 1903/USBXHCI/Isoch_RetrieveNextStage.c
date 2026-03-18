/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C002FE68
 * Callers:
 *     Isoch_MappingLoop @ 0x1C002E9F0 (Isoch_MappingLoop.c)
 * Callees:
 *     TR_ValidateSecureTransferType @ 0x1C0003E60 (TR_ValidateSecureTransferType.c)
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029D1C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C002D4F8 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Acquire @ 0x1C003060C (Isoch_Stage_Acquire.c)
 *     Isoch_TransferData_Initialize @ 0x1C0031C08 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C0031E98 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0032070 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C0032158 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 */

bool __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  KSPIN_LOCK *v1; // r12
  __int16 v3; // si
  int v4; // r14d
  KIRQL v5; // al
  bool v6; // zf
  _QWORD *v7; // r13
  __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edx
  int v15; // r9d
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // r9d
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+40h] [rbp-48h]
  __int64 v42; // [rsp+90h] [rbp+8h] BYREF
  __int64 v43; // [rsp+98h] [rbp+10h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = 0;
  v4 = -1073741823;
  *(_QWORD *)(a1 + 368) = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x34u,
        (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_5;
  }
  v7 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v7 == v7 )
    goto LABEL_20;
  v6 = *(_DWORD *)(a1 + 336) == 3;
  v8 = *(_QWORD *)(a1 + 392);
  v43 = v8;
  if ( v6 )
  {
    if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          0xEu,
          0x35u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, -1, -1073737728, 0, 0);
      goto LABEL_20;
    }
    *(_DWORD *)(v8 + 108) = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 104);
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)(v8 + 108) + *(_DWORD *)(v8 + 104)) >= *(_DWORD *)(v8 + 96) )
    {
LABEL_20:
      KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
      while ( 1 )
      {
        v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(a1 + 72),
               &v42);
        if ( v4 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v30 = *(_QWORD *)(a1 + 56);
            LODWORD(v40) = v4;
            LODWORD(v39) = *(_DWORD *)(v30 + 144);
            LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_ddL(
              *(_QWORD *)(v30 + 80),
              5u,
              0xEu,
              0x39u,
              (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
              v38,
              v39,
              v40);
          }
          if ( !*(_DWORD *)(a1 + 376) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v31 = *(_QWORD *)(a1 + 56);
            LODWORD(v39) = *(_DWORD *)(v31 + 144);
            LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_dd(
              *(_QWORD *)(v31 + 80),
              3u,
              0xEu,
              0x3Au,
              (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
              v38,
              v39);
          }
          return v4 >= 0;
        }
        v12 = Isoch_TransferData_Initialize(a1, v42, &v43);
        if ( v12 < 0 )
          break;
        v16 = v43;
        v17 = Isoch_TransferUrb_Initialize(a1, v43);
        if ( v17 >= 0 )
        {
          v21 = TR_ValidateSecureTransferType(a1, *(_QWORD *)(v16 + 48), v18);
          if ( v21 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = *(_QWORD *)(a1 + 56);
              LODWORD(v41) = v21;
              LODWORD(v39) = *(_DWORD *)(v22 + 144);
              LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_DDqd(
                *(_QWORD *)(v22 + 80),
                2u,
                *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
                0x3Du,
                (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                v38,
                v39,
                v42,
                v41);
            }
            v15 = -2147482880;
            goto LABEL_54;
          }
          Isoch_TransferUrb_MarkLatePackets(a1, v16);
          if ( *(_DWORD *)(*(_QWORD *)(v16 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v16 + 96) - 1) + 148) == -1073414144 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = *(_QWORD *)(a1 + 56);
              LODWORD(v39) = *(_DWORD *)(v24 + 144);
              LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_dd(
                *(_QWORD *)(v24 + 80),
                4u,
                0xEu,
                0x3Eu,
                (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                v38,
                v39);
            }
            v25 = 0;
            v26 = 0;
          }
          else
          {
            if ( *(_DWORD *)(v16 + 80) )
            {
              *(_DWORD *)(v16 + 64) = 1;
              v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01023
                                                                                                 + 3144))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     *(_QWORD *)(v16 + 24),
                     Isoch_WdfEvtRequestCancel);
              if ( v4 >= 0 )
              {
                v33 = Isoch_Stage_Acquire(v16);
                *(_QWORD *)(a1 + 368) = v33;
                if ( !*(_DWORD *)(a1 + 376) )
                {
                  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                  if ( *(_DWORD *)(v34 + 24) > 1u )
                  {
                    v35 = *(unsigned int *)(*(_QWORD *)(v16 + 48) + 64LL);
                    if ( (unsigned int)v35 < *(_DWORD *)(v34 + 48) )
                      v3 = *(_WORD *)(*(_QWORD *)(v34 + 56) + 2 * v35);
                  }
                  *(_WORD *)(a1 + 112) = v3;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v36 = *(_QWORD *)(a1 + 56);
                  LODWORD(v39) = *(_DWORD *)(v36 + 144);
                  LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                  WPP_RECORDER_SF_DDqq(
                    *(_QWORD *)(v36 + 80),
                    4u,
                    v33,
                    0x41u,
                    (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                    v38,
                    v39,
                    *(_QWORD *)(v16 + 24),
                    v33);
                }
                *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v1);
                v37 = *(_QWORD **)(a1 + 392);
                if ( (_QWORD *)*v37 != v7 )
                  __fastfail(3u);
                *(_QWORD *)v16 = v7;
                *(_QWORD *)(v16 + 8) = v37;
                *v37 = v16;
                *(_QWORD *)(a1 + 392) = v16;
                goto LABEL_5;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v29 = *(_QWORD *)(a1 + 56);
                LODWORD(v41) = v4;
                LODWORD(v39) = *(_DWORD *)(v29 + 144);
                LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
                WPP_RECORDER_SF_DDqd(
                  *(_QWORD *)(v29 + 80),
                  4u,
                  v28,
                  0x40u,
                  (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                  v38,
                  v39,
                  *(_QWORD *)(v16 + 24),
                  v41);
              }
              *(_DWORD *)(v16 + 64) = 3;
              v15 = -1073676288;
LABEL_54:
              v14 = v16;
LABEL_55:
              v20 = -1;
              goto LABEL_56;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v27 = *(_QWORD *)(a1 + 56);
              LODWORD(v39) = *(_DWORD *)(v27 + 144);
              LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_DDi(
                *(_QWORD *)(v27 + 80),
                4u,
                v23,
                0x3Fu,
                (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                v38,
                v39,
                v42);
            }
            v25 = -1;
            v26 = -1;
          }
          Isoch_Transfer_Complete(a1, v16, v26, v25, 1);
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = *(_QWORD *)(a1 + 56);
            LODWORD(v41) = v17;
            LODWORD(v39) = *(_DWORD *)(v19 + 144);
            LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v19 + 80),
              2u,
              *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
              0x3Cu,
              (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
              v38,
              v39,
              v42,
              v41);
          }
          v15 = -1073739264;
          v20 = -1073414144;
          v14 = v16;
LABEL_56:
          Isoch_Transfer_Complete(a1, v14, v20, v15, 0);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *(_QWORD *)(a1 + 56);
        LODWORD(v41) = v12;
        LODWORD(v39) = *(_DWORD *)(v13 + 144);
        LODWORD(v38) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(v13 + 80),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x3Bu,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          v38,
          v39,
          v42,
          v41);
      }
      v14 = v43;
      v15 = -1073737728;
      goto LABEL_55;
    }
    Isoch_TransferUrb_MarkLatePackets(a1, v8);
    v9 = *(_DWORD *)(v8 + 96);
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 48) + 12LL * (unsigned int)(v9 - 1) + 148) != -1073414144 )
    {
      v10 = Isoch_Stage_Acquire(v8);
      *(_QWORD *)(a1 + 368) = v10;
      if ( v10 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            4u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x37u,
            (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v8 + 24),
            v10);
        v4 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
             && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          v11,
          0x38u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v8 + 24));
      }
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x36u,
          (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, 0, 0, 1, 1);
      goto LABEL_20;
    }
    *(_DWORD *)(v8 + 108) = v9 - *(_DWORD *)(v8 + 104);
  }
LABEL_5:
  KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
