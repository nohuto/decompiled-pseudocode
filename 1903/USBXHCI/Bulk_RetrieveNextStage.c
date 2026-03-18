/*
 * XREFs of Bulk_RetrieveNextStage @ 0x1C0036038
 * Callers:
 *     Bulk_MappingLoop @ 0x1C0034D68 (Bulk_MappingLoop.c)
 * Callees:
 *     TR_ValidateSecureTransferType @ 0x1C0003E60 (TR_ValidateSecureTransferType.c)
 *     WPP_RECORDER_SF_DDDi @ 0x1C0004794 (WPP_RECORDER_SF_DDDi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDDd @ 0x1C0029C00 (WPP_RECORDER_SF_DDDd.c)
 *     Bulk_Stage_Acquire @ 0x1C00365AC (Bulk_Stage_Acquire.c)
 *     Bulk_TransferData_ConfigureBuffer @ 0x1C00376F4 (Bulk_TransferData_ConfigureBuffer.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C003797C (Bulk_TransferData_DetermineTransferMechanism.c)
 *     Bulk_TransferData_Initialize @ 0x1C0037AAC (Bulk_TransferData_Initialize.c)
 *     Bulk_Transfer_Complete @ 0x1C0037C80 (Bulk_Transfer_Complete.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0037CE4 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0038D40 (WPP_RECORDER_SF_DDDqd.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0038FDC (WPP_RECORDER_SF_DDDqq.c)
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
  _DWORD *v9; // r14
  unsigned int v10; // ecx
  int i; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r14
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // edx
  __int64 v29; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  __int64 *v35; // rax
  int v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+38h] [rbp-40h]
  __int64 v40; // [rsp+40h] [rbp-38h]
  __int64 v41; // [rsp+80h] [rbp+8h] BYREF

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
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x14u,
        (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64),
        v7);
    goto LABEL_5;
  }
  v8 = (_QWORD *)(a1 + 368);
  if ( (_QWORD *)*v8 == v8 || (v9 = *(_DWORD **)(a1 + 376), v10 = v9[26], v9[28] >= v10) )
  {
LABEL_11:
    KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
    for ( i = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(a1 + 72),
                &v41);
          ;
          i = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1264))(
                WPP_MAIN_CB.Dpc.ProcessorHistory,
                *(_QWORD *)(a1 + 72),
                &v41) )
    {
      v4 = i;
      if ( i < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v29 = *(_QWORD *)(a1 + 56);
          LODWORD(v40) = i;
          LODWORD(v39) = *(_DWORD *)(a1 + 64);
          LODWORD(v38) = *(_DWORD *)(v29 + 144);
          LODWORD(v37) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          WPP_RECORDER_SF_DDDd(
            *(_QWORD *)(v29 + 80),
            5u,
            v12,
            0x17u,
            (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
            v37,
            v38,
            v39,
            v40);
        }
        return v4 >= 0;
      }
      v17 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v41,
              off_1C0056090);
      Bulk_TransferData_Initialize(a1, v17, v41);
      v19 = TR_ValidateSecureTransferType(a1, *(_QWORD *)(v17 + 48), v18);
      if ( v19 >= 0 )
      {
        Bulk_TransferData_DetermineTransferMechanism(v17);
        v23 = Bulk_TransferData_ConfigureBuffer(v17);
        if ( v23 >= 0 )
        {
          v26 = *(_QWORD *)(v17 + 24);
          *(_DWORD *)(v17 + 64) = 1;
          v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64 (__fastcall *)()))(WdfFunctions_01023 + 3144))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v26,
                 Bulk_WdfEvtRequestCancel);
          if ( v4 >= 0 )
          {
            v31 = Bulk_Stage_Acquire(v17);
            *(_QWORD *)(a1 + 360) = v31;
            if ( !*(_DWORD *)(a1 + 348) )
            {
              v32 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
              if ( *(_DWORD *)(v32 + 24) > 1u )
              {
                v33 = *(unsigned int *)(*(_QWORD *)(v17 + 48) + 64LL);
                if ( (unsigned int)v33 < *(_DWORD *)(v32 + 48) )
                  v1 = *(_WORD *)(*(_QWORD *)(v32 + 56) + 2 * v33);
              }
              *(_WORD *)(a1 + 112) = v1;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
              LOBYTE(v34) = 4;
              WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v34, v31, 27);
            }
            *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v2);
            v35 = *(__int64 **)(a1 + 376);
            if ( (_QWORD *)*v35 != v8 )
              __fastfail(3u);
            *(_QWORD *)v17 = v8;
            *(_QWORD *)(v17 + 8) = v35;
            *v35 = v17;
            *(_QWORD *)(a1 + 376) = v17;
            goto LABEL_5;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v28 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v28) = 3;
            WPP_RECORDER_SF_DDDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v28,
              v27,
              26,
              v36,
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_DWORD *)(a1 + 64),
              *(_QWORD *)(v17 + 24),
              v4);
          }
          *(_DWORD *)(v17 + 64) = 3;
          v22 = 3221291008LL;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = *(_QWORD *)(a1 + 48);
            v25 = *(unsigned __int8 *)(v24 + 135);
            LOBYTE(v24) = 3;
            WPP_RECORDER_SF_DDDqd(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              v24,
              v25,
              25,
              v36,
              v25,
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_DWORD *)(a1 + 64),
              v41,
              v23);
          }
          v22 = 3221229568LL;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = *(_QWORD *)(a1 + 48);
          v21 = *(unsigned __int8 *)(v20 + 135);
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_DDDqd(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            v20,
            v21,
            24,
            v36,
            v21,
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_DWORD *)(a1 + 64),
            v41,
            v19);
        }
        v22 = 2147484416LL;
      }
      Bulk_Transfer_Complete(a1, v17, v22);
    }
  }
  if ( *(_DWORD *)(a1 + 332) != 3 )
  {
    v13 = Bulk_Stage_Acquire(*(_QWORD *)(a1 + 376));
    *(_QWORD *)(a1 + 360) = v13;
    if ( v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)(a1 + 48);
        v16 = *(unsigned __int8 *)(v15 + 135);
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v15, v16, 21);
      }
    }
    else
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDi(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 5u, v14, 0x16u, v36);
    }
    goto LABEL_5;
  }
  if ( v9[30] == v9[29] )
  {
    LOBYTE(v6) = 1;
    Bulk_Transfer_CompleteCancelable(a1, *(_QWORD *)(a1 + 376), 3221229568LL, v6);
    goto LABEL_11;
  }
  v9[28] = v10;
LABEL_5:
  KeReleaseSpinLock(v2, *(_BYTE *)(a1 + 104));
  return v4 >= 0;
}
