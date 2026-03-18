/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C0030774
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002F5E4 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002F924 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0032470 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C002914C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C002D4F8 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0031034 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C003349C (WPP_RECORDER_SF_DDqqD.c)
 */

__int64 __fastcall Isoch_Stage_CompleteTD(
        __int64 *a1,
        unsigned int a2,
        int a3,
        char a4,
        _BYTE *a5,
        _DWORD *a6,
        char a7)
{
  __int64 v7; // rsi
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // r8
  char v11; // r11
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v21; // r9
  int v22; // edx
  __int64 v23; // r14
  KIRQL v24; // dl
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+98h] [rbp+10h]

  v27 = a2;
  v7 = *a1;
  v8 = a3;
  v9 = *((_DWORD *)a1 + 12);
  v10 = 0LL;
  v11 = a4;
  *a6 = 0;
  result = (__int64)a5;
  v14 = *(_QWORD *)(v7 + 56);
  v15 = *(_QWORD *)(v7 + 48);
  *a5 = 0;
  v16 = v9 - 1;
  if ( v16 )
  {
    result = 3LL * (v16 - 1);
    if ( *(_DWORD *)(v15 + 12LL * (v16 - 1) + 148) == -1 )
    {
      result = v16 - 1;
      v17 = (int)result;
      if ( (int)result >= 0 )
      {
        v18 = 12LL * (int)result;
        do
        {
          if ( *(_DWORD *)(v15 + v18 + 148) != -1 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = *(_QWORD *)(v14 + 56);
            LODWORD(v26) = *(_DWORD *)(v19 + 144);
            LODWORD(v25) = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
            result = WPP_RECORDER_SF_DDqq(
                       *(_QWORD *)(v19 + 80),
                       2u,
                       0LL,
                       0x18u,
                       (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                       v25,
                       v26,
                       *(_QWORD *)(v7 + 24),
                       a1);
            v10 = 0LL;
          }
          *(_DWORD *)(v15 + v18 + 148) = -1073545216;
          v18 -= 12LL;
          --v17;
        }
        while ( v17 >= 0 );
        v8 = a3;
        a2 = v27;
        v11 = a4;
      }
    }
  }
  if ( *(_DWORD *)(v15 + 12LL * v16 + 148) == -1 )
  {
    result = a2 - 26;
    if ( (unsigned int)result > 2 || v8 )
    {
      UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v14, a2, 0xFFFFFFFF);
      *(_DWORD *)(v15 + 4 * v21 + 148) = UsbdStatusFromTrbCompletionCode;
      v10 = 0LL;
      *(_DWORD *)(v7 + 84) += v8;
      result = *(_QWORD *)(v14 + 56);
      if ( *(_DWORD *)(result + 120) == 5 )
        *(_DWORD *)(v15 + 4 * v21 + 144) = v8;
    }
  }
  if ( v16 == *((_DWORD *)a1 + 11) )
  {
    if ( v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL), v22, 0, 25);
      }
      LOBYTE(v10) = a7;
      Isoch_Stage_FreeScatterGatherList(v14, a1, v10);
      *(_BYTE *)(v14 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 96));
      v23 = *a1;
      if ( *((_BYTE *)a1 + 56) )
      {
        IoFreeMdl((PMDL)a1[8]);
        a1[8] = 0LL;
        *((_BYTE *)a1 + 56) = 0;
      }
      TR_ReleaseSegments(v14, (unsigned __int64 *)a1 + 1, 1);
      TR_ReleaseSegments(v14, (unsigned __int64 *)a1 + 3, 0);
      StageQueue_Release((unsigned __int8 *)(v23 + 128), (unsigned __int8 *)a1);
      ++*(_DWORD *)(v7 + 112);
      if ( *(_DWORD *)(v7 + 100) == *(_DWORD *)(v7 + 96) )
        Isoch_Transfer_CompleteCancelable(v14, v7, -1, -1, 0, 0);
      --*(_DWORD *)(v14 + 376);
      v24 = *(_BYTE *)(v14 + 104);
      *a6 = *(_DWORD *)(v14 + 376);
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 96), v24);
      result = (__int64)a5;
      *a5 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      result = (__int64)WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(a2) = 5;
        return WPP_RECORDER_SF_DDqqD(
                 *(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL),
                 a2,
                 *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL),
                 26);
      }
    }
  }
  return result;
}
