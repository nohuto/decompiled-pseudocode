/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C003122C
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0030010 (Bulk_MappingLoop.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDi @ 0x1C0003C28 (WPP_RECORDER_SF_DDDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C00254B0 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Stage_Acquire @ 0x1C00316A8 (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C003279C (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C0032A04 (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_Initialize @ 0x1C0032B34 (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x1C0032D08 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0032D6C (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0033D50 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0033FEC (WPP_RECORDER_SF_DDDqq.c)
 */

bool __fastcall Bulk_RetrieveNextStage(__int64 a1)
{
  __int16 v1; // si
  KSPIN_LOCK *v2; // r15
  int v4; // edi
  KIRQL v5; // al
  __int64 v6; // r9
  int v7; // r8d
  _QWORD *v8; // r13
  _DWORD *v9; // rbp
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // edx
  __int64 *v28; // rax
  __int64 v29; // rcx
  int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 96);
  *(_QWORD *)(a1 + 360) = 0LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 344);
  *(_BYTE *)(a1 + 104) = v5;
  if ( *(_DWORD *)(a1 + 348) == v7 )
  {
    v4 = -1073741823;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x14u,
        (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v7);
    goto LABEL_4;
  }
  v8 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = *(_DWORD **)(a1 + 376);
    v10 = v9[26];
    if ( v9[28] < v10 )
    {
      if ( *(_DWORD *)(a1 + 332) != 3 )
      {
        v17 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
        *(_QWORD *)(a1 + 360) = v17;
        if ( v17 )
        {
          v19 = *(_QWORD *)(a1 + 48);
          v20 = *(unsigned __int8 *)(v19 + 135);
          LOBYTE(v19) = 4;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v19, v20, 21);
        }
        else
        {
          v4 = -1073741823;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v18, 0x16u, v31);
        }
        goto LABEL_4;
      }
      if ( v9[30] != v9[29] )
      {
        v9[28] = v10;
LABEL_4:
        KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
        return v4 >= 0;
      }
      LOBYTE(v6) = 1;
      Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 376), 3221229568LL, v6);
    }
  }
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           *(_QWORD *)(a1 + 72),
           &v36);
    if ( v4 < 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v36,
            off_1C004F068);
    Bulk_TransferData_Initialize(a1, v12, v36);
    Bulk_TransferData_DetermineTransferMechanism(v12);
    v13 = Bulk_TransferData_ConfigureBuffer(v12);
    if ( v13 >= 0 )
    {
      v21 = *(_QWORD *)(v12 + 24);
      *(_DWORD *)(v12 + 64) = 1;
      v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)()))(WdfFunctions_01023 + 3144))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v21,
             Bulk_WdfEvtRequestCancel);
      if ( v4 >= 0 )
      {
        v24 = Bulk_Stage_Acquire(v12);
        *(_QWORD *)(a1 + 360) = v24;
        if ( !*(_DWORD *)(a1 + 348) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
          if ( *(_DWORD *)(v25 + 24) > 1u )
          {
            v26 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 64LL);
            if ( (unsigned int)v26 < *(_DWORD *)(v25 + 48) )
              v1 = *(_WORD *)(*(_QWORD *)(v25 + 56) + 2 * v26);
          }
          *(_WORD *)(a1 + 112) = v1;
        }
        v27 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v27, v24, 26);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
        v28 = *(__int64 **)(a1 + 376);
        if ( (_QWORD *)*v28 != v8 )
          __fastfail(3u);
        *(_QWORD *)v12 = v8;
        *(_QWORD *)(v12 + 8) = v28;
        *v28 = v12;
        *(_QWORD *)(a1 + 376) = v12;
        goto LABEL_4;
      }
      v23 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v23,
        v22,
        25,
        v31,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        *(_QWORD *)(v12 + 24),
        v4);
      v16 = 3221291008LL;
      *(_DWORD *)(v12 + 64) = 3;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(unsigned __int8 *)(v14 + 135);
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_DDDqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v14,
        v15,
        24,
        v31,
        v15,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v36,
        v13);
      v16 = 3221229568LL;
    }
    Bulk_Transfer_Complete(a1, v12, v16);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v29 = *(_QWORD *)(a1 + 56);
    LODWORD(v35) = v4;
    LODWORD(v34) = *(_DWORD *)(a1 + 64);
    LODWORD(v33) = *(_DWORD *)(v29 + 144);
    LODWORD(v32) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDd(
      *(_QWORD *)(v29 + 80),
      5u,
      v11,
      0x17u,
      (__int64)&WPP_e65a03fee1fe3b77277485fb27797cd8_Traceguids,
      v32,
      v33,
      v34,
      v35);
  }
  return v4 >= 0;
}
