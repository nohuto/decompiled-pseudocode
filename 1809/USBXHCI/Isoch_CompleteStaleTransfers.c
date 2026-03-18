/*
 * XREFs of Isoch_CompleteStaleTransfers @ 0x1C0028E64
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C002AADC (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C002ADFC (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C00255CC (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002C350 (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002D590 (Isoch_Transfer_CompleteCancelable.c)
 */

__int64 **__fastcall Isoch_CompleteStaleTransfers(__int64 a1, __int64 ***a2, char a3)
{
  KSPIN_LOCK *v4; // r14
  __int64 ****v6; // rsi
  __int64 ***v7; // rbx
  __int64 **v8; // r15
  __int64 v9; // rcx
  __int64 **v10; // rcx
  __int64 ****v11; // rax
  _QWORD *v12; // rax
  __int64 *v13; // rbx
  __int64 **result; // rax
  int v15; // r15d
  __int64 *v16; // rax
  unsigned __int8 *NextStage; // rsi
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 *v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 **v24; // [rsp+58h] [rbp-8h]
  int v25; // [rsp+A0h] [rbp+40h]

  v24 = &v23;
  v4 = (KSPIN_LOCK *)(a1 + 96);
  v23 = (__int64 *)&v23;
  v6 = (__int64 ****)(a1 + 384);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *v6;
  if ( *v6 != (__int64 ***)v6 )
  {
    while ( 1 )
    {
      if ( v7 == a2 )
        goto LABEL_7;
      v8 = *v7;
      v9 = *(_QWORD *)(a1 + 56);
      LODWORD(v22) = *((_DWORD *)v7[6] + 32);
      LODWORD(v21) = *(_DWORD *)(v9 + 144);
      LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDqd(
        *(_QWORD *)(v9 + 80),
        4u,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        0x17u,
        (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
        v20,
        v21,
        v7[3],
        v22);
      v10 = *v7;
      if ( (*v7)[1] != (__int64 *)v7 )
        break;
      v11 = (__int64 ****)v7[1];
      if ( *v11 != v7 )
        break;
      *v11 = (__int64 ***)v10;
      v10[1] = (__int64 *)v11;
      v12 = v24;
      if ( *v24 != (__int64 *)&v23 )
        break;
      v7[1] = v24;
      *v7 = &v23;
      *v12 = v7;
      v24 = (__int64 **)v7;
      v7 = (__int64 ***)v8;
      if ( v8 == (__int64 **)v6 )
        goto LABEL_7;
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_7:
  while ( 1 )
  {
    KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
    v13 = v23;
    result = &v23;
    v25 = (int)v23;
    if ( v23 == (__int64 *)&v23 )
      return result;
    v15 = 0;
    if ( (__int64 **)v23[1] != &v23 )
      goto LABEL_16;
    v16 = (__int64 *)*v23;
    if ( *(__int64 **)(*v23 + 8) != v23 )
      goto LABEL_16;
    v23 = (__int64 *)*v23;
    v16[1] = (__int64)&v23;
    v13[1] = (__int64)v13;
    *v13 = (__int64)v13;
    *((_BYTE *)v13 + 133) = *((_BYTE *)v13 + 132);
    *((_BYTE *)v13 + 134) = *((_BYTE *)v13 + 130);
    NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v13 + 128);
    if ( NextStage )
    {
      do
      {
        LOBYTE(v18) = a3;
        Isoch_Stage_FreeScatterGatherList(a1, NextStage, v18);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
        v19 = *(_QWORD *)NextStage;
        if ( NextStage[56] )
        {
          IoFreeMdl(*((PMDL *)NextStage + 8));
          *((_QWORD *)NextStage + 8) = 0LL;
          NextStage[56] = 0;
        }
        TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 1, 1);
        TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v19 + 128), NextStage);
        KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
        ++v15;
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v13 + 128);
      }
      while ( NextStage );
      LODWORD(v13) = v25;
    }
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
    Isoch_Transfer_CompleteCancelable(a1, (_DWORD)v13, -1, -1, 1, 0);
    *(_DWORD *)(a1 + 376) -= v15;
  }
}
