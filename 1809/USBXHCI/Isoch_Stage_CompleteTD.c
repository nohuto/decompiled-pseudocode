/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C002BB14
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002ADFC (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C002D7C8 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0024A0C (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0028B78 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002C350 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C002E7EC (WPP_RECORDER_SF_DDqqD.c)
 */

__int64 __fastcall Isoch_Stage_CompleteTD(PMDL *a1, unsigned int a2, int a3, char a4, _BYTE *a5, _DWORD *a6, char a7)
{
  PMDL v7; // rsi
  _DWORD *v8; // r12
  __int64 result; // rax
  int v11; // r8d
  int v12; // r14d
  char v13; // r11
  __int64 v14; // rbx
  _MDL *Next; // r15
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // r8
  PMDL v25; // r14
  KIRQL v26; // dl
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned int v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v7 = *a1;
  v8 = a6;
  result = (__int64)a5;
  v11 = -1;
  v12 = *((_DWORD *)a1 + 12);
  v13 = a4;
  v14 = *(_QWORD *)&(*a1)[1].Size;
  Next = (*a1)[1].Next;
  *a6 = 0;
  *a5 = 0;
  v17 = v12 - 1;
  if ( v17 )
  {
    result = 3LL * (v17 - 1);
    if ( *(&Next[2].ByteCount + 3 * v17) == -1 )
    {
      result = v17 - 1;
      v18 = (int)result;
      if ( (int)result >= 0 )
      {
        v19 = 12LL * (int)result;
        do
        {
          if ( *(_DWORD *)((char *)&Next[3].Next + v19 + 4) != -1 )
            break;
          v20 = *(_QWORD *)(v14 + 56);
          LODWORD(v28) = *(_DWORD *)(v20 + 144);
          LODWORD(v27) = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
          result = WPP_RECORDER_SF_DDqq(
                     *(_QWORD *)(v20 + 80),
                     2u,
                     0xFFFFFFFFLL,
                     0x18u,
                     (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
                     v27,
                     v28,
                     v7->MappedSystemVa,
                     a1);
          *(_DWORD *)((char *)&Next[3].Next + v19 + 4) = -1073545216;
          v11 = -1;
          v19 -= 12LL;
          --v18;
        }
        while ( v18 >= 0 );
        a2 = v29;
        v13 = a4;
      }
      v8 = a6;
    }
  }
  if ( *((_DWORD *)&Next[3].Next + 3 * v17 + 1) == -1 )
  {
    result = a2 - 26;
    if ( (unsigned int)result > 2 || a3 )
    {
      UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v14, a2, 0xFFFFFFFF);
      *((_DWORD *)&Next[3].Next + v22 + 1) = UsbdStatusFromTrbCompletionCode;
      HIDWORD(v7[1].StartVa) += a3;
      result = *(_QWORD *)(v14 + 56);
      if ( *(_DWORD *)(result + 120) == 5 )
        *((_DWORD *)&Next[3].Next + v22) = a3;
    }
  }
  if ( v17 == *((_DWORD *)a1 + 11) )
  {
    if ( v13 )
    {
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v14 + 48) + 135LL);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v14 + 56) + 80LL), v23, v11, 25);
      LOBYTE(v24) = a7;
      Isoch_Stage_FreeScatterGatherList(v14, a1, v24);
      *(_BYTE *)(v14 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 96));
      v25 = *a1;
      if ( *((_BYTE *)a1 + 56) )
      {
        IoFreeMdl(a1[8]);
        a1[8] = 0LL;
        *((_BYTE *)a1 + 56) = 0;
      }
      TR_ReleaseSegments(v14, (unsigned __int64 *)a1 + 1, 1);
      TR_ReleaseSegments(v14, (unsigned __int64 *)a1 + 3, 0);
      StageQueue_Release((unsigned __int8 *)&v25[2].StartVa, (unsigned __int8 *)a1);
      ++LODWORD(v7[2].Process);
      if ( HIDWORD(v7[2].Next) == LODWORD(v7[2].Next) )
        Isoch_Transfer_CompleteCancelable(v14, (_DWORD)v7, -1, -1, 0, 0);
      --*(_DWORD *)(v14 + 376);
      v26 = *(_BYTE *)(v14 + 104);
      *v8 = *(_DWORD *)(v14 + 376);
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 96), v26);
      result = (__int64)a5;
      *a5 = 1;
    }
    else
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
