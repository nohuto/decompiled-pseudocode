/*
 * XREFs of Isoch_RetrieveNextStage @ 0x1C002B308
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0029F94 (Isoch_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C00035F0 (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C00255CC (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0028B78 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_Acquire @ 0x1C002B9BC (Isoch_Stage_Acquire.c)
 *     Isoch_TransferData_Initialize @ 0x1C002CF44 (Isoch_TransferData_Initialize.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C002D1F0 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C002D3D8 (Isoch_TransferUrb_MarkLatePackets.c)
 *     Isoch_Transfer_Complete @ 0x1C002D4C0 (Isoch_Transfer_Complete.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 */

bool __fastcall Isoch_RetrieveNextStage(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  __int16 v3; // si
  int v4; // ebp
  KIRQL v5; // al
  bool v6; // zf
  _QWORD *v7; // r13
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  char v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]
  __int64 v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 96);
  v3 = 0;
  v4 = -1073741823;
  *(_QWORD *)(a1 + 368) = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v6 = *(_DWORD *)(a1 + 376) == 5;
  *(_BYTE *)(a1 + 104) = v5;
  if ( v6 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x34u,
        (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        5);
    goto LABEL_4;
  }
  v7 = (_QWORD *)(a1 + 384);
  if ( (_QWORD *)*v7 != v7 )
  {
    v6 = *(_DWORD *)(a1 + 336) == 3;
    v8 = *(_QWORD *)(a1 + 392);
    v39 = v8;
    if ( v6 )
    {
      if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
      {
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          0xEu,
          0x35u,
          (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
        Isoch_Transfer_CompleteCancelable(a1, v8, -1, -1073737728, 0, 0);
        goto LABEL_16;
      }
      *(_DWORD *)(v8 + 108) = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 104);
LABEL_4:
      KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
      return v4 >= 0;
    }
    if ( (unsigned int)(*(_DWORD *)(v8 + 104) + *(_DWORD *)(v8 + 108)) < *(_DWORD *)(v8 + 96) )
    {
      Isoch_TransferUrb_MarkLatePackets(a1, v8);
      v9 = *(_DWORD *)(v8 + 96);
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 48) + 12LL * (unsigned int)(v9 - 1) + 148) != -1073414144 )
      {
        v15 = Isoch_Stage_Acquire(v8);
        *(_QWORD *)(a1 + 368) = v15;
        if ( v15 )
        {
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            4u,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            0x37u,
            (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v8 + 24),
            v15);
          v4 = 0;
        }
        else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_DDi(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            5u,
            v16,
            0x38u,
            (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v8 + 24));
        }
        goto LABEL_4;
      }
      if ( *(_DWORD *)(v8 + 112) != *(_DWORD *)(v8 + 116) )
      {
        *(_DWORD *)(v8 + 108) = v9 - *(_DWORD *)(v8 + 104);
        goto LABEL_4;
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x36u,
          (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      Isoch_Transfer_CompleteCancelable(a1, v8, 0, 0, 1, 1);
    }
  }
LABEL_16:
  KeReleaseSpinLock(v1, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a1 + 72),
           &v38);
    if ( v4 < 0 )
      break;
    v10 = Isoch_TransferData_Initialize(a1, v38, &v39);
    if ( v10 >= 0 )
    {
      v17 = v39;
      v18 = Isoch_TransferUrb_Initialize(a1, v39);
      if ( v18 >= 0 )
      {
        Isoch_TransferUrb_MarkLatePackets(a1, v17);
        if ( *(_DWORD *)(*(_QWORD *)(v17 + 48) + 12LL * (unsigned int)(*(_DWORD *)(v17 + 96) - 1) + 148) == -1073414144 )
        {
          v21 = *(_QWORD *)(a1 + 56);
          LODWORD(v35) = *(_DWORD *)(v21 + 144);
          LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(v21 + 80),
            4u,
            0xEu,
            0x3Du,
            (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
            v34,
            v35);
          v13 = 0;
          v33 = 1;
          v14 = 0;
        }
        else
        {
          if ( *(_DWORD *)(v17 + 80) )
          {
            *(_DWORD *)(v17 + 64) = 1;
            v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)()))(WdfFunctions_01023
                                                                                               + 3144))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(v17 + 24),
                   Isoch_WdfEvtRequestCancel);
            if ( v4 >= 0 )
            {
              v25 = Isoch_Stage_Acquire(v17);
              *(_QWORD *)(a1 + 368) = v25;
              if ( !*(_DWORD *)(a1 + 376) )
              {
                v26 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
                if ( *(_DWORD *)(v26 + 24) > 1u )
                {
                  v27 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 64LL);
                  if ( (unsigned int)v27 < *(_DWORD *)(v26 + 48) )
                    v3 = *(_WORD *)(*(_QWORD *)(v26 + 56) + 2 * v27);
                }
                *(_WORD *)(a1 + 112) = v3;
              }
              v28 = *(_QWORD *)(a1 + 56);
              LODWORD(v35) = *(_DWORD *)(v28 + 144);
              LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              WPP_RECORDER_SF_DDqq(
                *(_QWORD *)(v28 + 80),
                4u,
                v25,
                0x40u,
                (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
                v34,
                v35,
                *(_QWORD *)(v17 + 24),
                v25);
              *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v1);
              v29 = *(_QWORD **)(a1 + 392);
              if ( (_QWORD *)*v29 != v7 )
                __fastfail(3u);
              *(_QWORD *)v17 = v7;
              *(_QWORD *)(v17 + 8) = v29;
              *v29 = v17;
              *(_QWORD *)(a1 + 392) = v17;
              goto LABEL_4;
            }
            v24 = *(_QWORD *)(a1 + 56);
            LODWORD(v37) = v4;
            LODWORD(v35) = *(_DWORD *)(v24 + 144);
            LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v24 + 80),
              4u,
              v23,
              0x3Fu,
              (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
              v34,
              v35,
              *(_QWORD *)(v17 + 24),
              v37);
            v13 = -1073676288;
            *(_DWORD *)(v17 + 64) = 3;
            v33 = 0;
          }
          else
          {
            v22 = *(_QWORD *)(a1 + 56);
            LODWORD(v35) = *(_DWORD *)(v22 + 144);
            LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            WPP_RECORDER_SF_DDi(
              *(_QWORD *)(v22 + 80),
              4u,
              v20,
              0x3Eu,
              (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
              v34,
              v35,
              v38);
            v13 = -1;
            v33 = 1;
          }
          v14 = -1;
        }
      }
      else
      {
        v19 = *(_QWORD *)(a1 + 56);
        LODWORD(v37) = v18;
        LODWORD(v35) = *(_DWORD *)(v19 + 144);
        LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(v19 + 80),
          2u,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          0x3Cu,
          (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
          v34,
          v35,
          v38,
          v37);
        v13 = -1073739264;
        v33 = 0;
        v14 = -1073414144;
      }
      v12 = v17;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 56);
      LODWORD(v37) = v10;
      LODWORD(v35) = *(_DWORD *)(v11 + 144);
      LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(v11 + 80),
        2u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        0x3Bu,
        (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
        v34,
        v35,
        v38,
        v37);
      v12 = v39;
      v13 = -1073737728;
      v14 = -1;
      v33 = 0;
    }
    Isoch_Transfer_Complete(a1, v12, v14, v13, v33);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = *(_QWORD *)(a1 + 56);
    LODWORD(v36) = v4;
    LODWORD(v35) = *(_DWORD *)(v30 + 144);
    LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v30 + 80),
      5u,
      0xEu,
      0x39u,
      (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
      v34,
      v35,
      v36);
  }
  if ( !*(_DWORD *)(a1 + 376) )
  {
    v31 = *(_QWORD *)(a1 + 56);
    LODWORD(v35) = *(_DWORD *)(v31 + 144);
    LODWORD(v34) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v31 + 80),
      3u,
      0xEu,
      0x3Au,
      (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
      v34,
      v35);
  }
  return v4 >= 0;
}
