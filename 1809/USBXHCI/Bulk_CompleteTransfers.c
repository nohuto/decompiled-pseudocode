/*
 * XREFs of Bulk_CompleteTransfers @ 0x1C002ECCC
 * Callers:
 *     Bulk_ProcessTransferCompletion @ 0x1C0030618 (Bulk_ProcessTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0023608 (StageQueue_ForwardScanGetNextStage.c)
 *     StageQueue_Release @ 0x1C0023648 (StageQueue_Release.c)
 *     TR_ReleaseDoubleBuffer @ 0x1C0024F50 (TR_ReleaseDoubleBuffer.c)
 *     TR_ReleaseSegments @ 0x1C0024FC8 (TR_ReleaseSegments.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0031E20 (Bulk_Stage_FreeScatterGatherList.c)
 *     Bulk_Transfer_Complete @ 0x1C0032D08 (Bulk_Transfer_Complete.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C0033D50 (WPP_RECORDER_SF_DDDqd.c)
 */

_QWORD **__fastcall Bulk_CompleteTransfers(__int64 a1, __int64 ****a2, char a3)
{
  KSPIN_LOCK *v4; // r12
  __int64 ****v5; // r14
  __int64 ***v6; // rbx
  __int64 **v7; // rax
  unsigned __int8 *NextStage; // rsi
  __int64 v9; // r8
  __int64 v10; // r13
  _QWORD *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  __int64 **v15; // rcx
  int v16; // eax
  __int64 ****v17; // rax
  _QWORD *v18; // rax
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rax
  _QWORD **result; // rax
  __int64 ***v24; // rbx
  __int64 ****v25; // rax
  __int64 **v26; // rdx
  struct _MDL *v27; // rcx
  __int64 **v28; // rdx
  unsigned __int16 v29; // ax
  bool v30; // cc
  struct _MDL *v31; // rax
  char v32; // al
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // [rsp+20h] [rbp-60h]
  _QWORD *v36; // [rsp+50h] [rbp-30h] BYREF
  __int64 ***v37; // [rsp+58h] [rbp-28h]
  __int64 *v38; // [rsp+60h] [rbp-20h] BYREF
  __int64 **v39; // [rsp+68h] [rbp-18h]
  __int64 *v40; // [rsp+70h] [rbp-10h] BYREF
  __int64 **v41; // [rsp+78h] [rbp-8h]

  v39 = &v38;
  v4 = (KSPIN_LOCK *)(a1 + 96);
  v38 = (__int64 *)&v38;
  v5 = a2;
  v41 = &v40;
  v40 = (__int64 *)&v40;
  v37 = (__int64 ***)&v36;
  v36 = &v36;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 ***)v5 )
      break;
    if ( v6[1] != (__int64 **)v5 || (v7 = *v6, (*v6)[1] != (__int64 *)v6) )
LABEL_47:
      __fastfail(3u);
    *v5 = (__int64 ***)v7;
    v7[1] = (__int64 *)v5;
    v6[1] = (__int64 **)v6;
    *v6 = (__int64 **)v6;
    *((_BYTE *)v6 + 133) = *((_BYTE *)v6 + 132);
    *((_BYTE *)v6 + 134) = *((_BYTE *)v6 + 130);
    NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v6 + 128);
    if ( NextStage )
    {
      do
      {
        KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
        LOBYTE(v9) = a3;
        Bulk_Stage_FreeScatterGatherList(a1, NextStage, v9);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc(v4);
        v10 = *(_QWORD *)NextStage;
        if ( NextStage[44] )
        {
          IoFreeMdl(*((PMDL *)NextStage + 6));
          *((_QWORD *)NextStage + 6) = 0LL;
          NextStage[44] = 0;
        }
        TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 1, 1);
        TR_ReleaseSegments(a1, (unsigned __int64 *)NextStage + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v10 + 128), NextStage);
        ++*((_DWORD *)v6 + 29);
        --*(_DWORD *)(a1 + 348);
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v6 + 128);
      }
      while ( NextStage );
      v5 = a2;
    }
    if ( *((_DWORD *)v6 + 16) == 3 )
    {
      v11 = v39;
      if ( *v39 != (__int64 *)&v38 )
        goto LABEL_47;
      v6[1] = v39;
      *v6 = &v38;
      *v11 = v6;
      v39 = (__int64 **)v6;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 **))(WdfFunctions_01023 + 2048))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              v6[3]);
      if ( v12 >= 0 )
      {
        v16 = *((_DWORD *)v6 + 17);
        *((_DWORD *)v6 + 16) = 0;
        if ( v16 == 1 || v16 == 28 )
        {
          v18 = v41;
          if ( *v41 != (__int64 *)&v40 )
            goto LABEL_47;
          v6[1] = v41;
          *v6 = &v40;
          *v18 = v6;
          v41 = (__int64 **)v6;
        }
        else
        {
          v17 = (__int64 ****)v37;
          if ( *v37 != &v36 )
            goto LABEL_47;
          v6[1] = (__int64 **)v37;
          *v6 = &v36;
          *v17 = v6;
          v37 = v6;
        }
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 48);
        v14 = *(unsigned __int8 *)(v13 + 135);
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_DDDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v13,
          v14,
          14,
          v35,
          v14,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          (char)v6[3],
          v12);
        *((_DWORD *)v6 + 16) = 2;
        v15 = *(__int64 ***)(a1 + 392);
        if ( *v15 != (__int64 *)(a1 + 384) )
          goto LABEL_47;
        *v6 = (__int64 **)(a1 + 384);
        v6[1] = v15;
        *v15 = (__int64 *)v6;
        *(_QWORD *)(a1 + 392) = v6;
      }
    }
  }
  KeReleaseSpinLock(v4, *(_BYTE *)(a1 + 104));
  while ( 1 )
  {
    v19 = v38;
    if ( v38 == (__int64 *)&v38 )
      break;
    if ( (__int64 **)v38[1] != &v38 )
      goto LABEL_47;
    v20 = (__int64 *)*v38;
    if ( *(__int64 **)(*v38 + 8) != v38 )
      goto LABEL_47;
    v38 = (__int64 *)*v38;
    v20[1] = (__int64)&v38;
    v19[1] = (__int64)v19;
    *v19 = (__int64)v19;
    if ( *(_DWORD *)(a1 + 64) && !*((_DWORD *)v19 + 17) )
      *((_DWORD *)v19 + 17) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 24LL);
    Bulk_Transfer_Complete(a1, v19, 3221291008LL);
  }
  while ( 1 )
  {
    v21 = v40;
    if ( v40 == (__int64 *)&v40 )
      break;
    if ( (__int64 **)v40[1] != &v40 )
      goto LABEL_47;
    v22 = (__int64 *)*v40;
    if ( *(__int64 **)(*v40 + 8) != v40 )
      goto LABEL_47;
    v40 = (__int64 *)*v40;
    v22[1] = (__int64)&v40;
    v21[1] = (__int64)v21;
    *v21 = (__int64)v21;
    Bulk_Transfer_Complete(a1, v21, 0xFFFFFFFFLL);
  }
  while ( 1 )
  {
    result = &v36;
    if ( v36 == &v36 )
      return result;
    v24 = v37;
    if ( *v37 != &v36 )
      goto LABEL_47;
    v25 = (__int64 ****)v37[1];
    if ( *v25 != v37 )
      goto LABEL_47;
    v37 = (__int64 ***)v37[1];
    *v25 = (__int64 ***)&v36;
    v24[1] = (__int64 **)v24;
    *v24 = (__int64 **)v24;
    v26 = v24[12];
    *((_DWORD *)v24 + 28) = *((_DWORD *)v24 + 27);
    if ( v26 )
    {
      TR_ReleaseDoubleBuffer(a1, v26);
      v24[12] = 0LL;
    }
    v27 = (struct _MDL *)v24[10];
    if ( v27 )
    {
      v28 = v24[6];
      v29 = *((_WORD *)v28 + 1);
      if ( v29 <= 0x38u || (v30 = v29 <= 0x3Au, v31 = 0LL, !v30) )
        v31 = (struct _MDL *)v28[6];
      if ( v27 != v31 && v27 != (struct _MDL *)v24[7][15] )
      {
        IoFreeMdl(v27);
        v24[10] = 0LL;
      }
    }
    v32 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 **))(WdfFunctions_01023 + 2264))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v24[3]);
    v33 = *(_QWORD *)(a1 + 48);
    v34 = *(unsigned __int8 *)(v33 + 135);
    LOBYTE(v33) = 4;
    WPP_RECORDER_SF_DDDqd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v33,
      v34,
      15,
      v35,
      v34,
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64),
      (char)v24[3],
      v32);
  }
}
