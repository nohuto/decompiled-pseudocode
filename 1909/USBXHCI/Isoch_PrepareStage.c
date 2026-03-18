/*
 * XREFs of Isoch_PrepareStage @ 0x1C002EB50
 * Callers:
 *     Isoch_MappingLoop @ 0x1C002E9F0 (Isoch_MappingLoop.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_AcquireSegments @ 0x1C002810C (TR_AcquireSegments.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C0028C80 (TR_EnsureInputBufferForTrbs.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     Isoch_Stage_AcquireMdl @ 0x1C0030640 (Isoch_Stage_AcquireMdl.c)
 *     Isoch_Stage_DetermineSize @ 0x1C0030AB0 (Isoch_Stage_DetermineSize.c)
 *     Isoch_Stage_EstimateRequiredSegments @ 0x1C0030BE8 (Isoch_Stage_EstimateRequiredSegments.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C0032228 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C003349C (WPP_RECORDER_SF_DDqqD.c)
 *     WPP_RECORDER_SF_DDqqDD @ 0x1C00335E8 (WPP_RECORDER_SF_DDqqDD.c)
 */

__int64 __fastcall Isoch_PrepareStage(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rbp
  int v4; // r9d
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned __int16 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 v13; // r15
  unsigned __int8 *v14; // rcx
  unsigned int v15; // esi
  int v16; // eax
  int v17; // r8d
  __int64 v18; // r14
  __int64 v19; // r13

  v1 = *(__int64 **)(a1 + 368);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 108) + *(_DWORD *)(*v1 + 104);
  *((_DWORD *)v1 + 10) = v4;
  v5 = *(unsigned int *)(a1 + 356);
  v6 = *(_QWORD *)(v3 + 48);
  v7 = *(_WORD *)(v6 + 2);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  v9 = *(_DWORD *)(v6 + 128) + (v4 + (int)v5 - 1) / (unsigned int)v5;
  if ( (*(_QWORD *)(*(_QWORD *)(v8 + 8) + 336LL) & 0x800000000000000LL) != 0 || (*(_DWORD *)(v8 + 100) & 0x800) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 328);
    if ( (v10 & 0x20) != 0 )
    {
      v5 = *(unsigned int *)(a1 + 364);
      if ( (_DWORD)v9 != (_DWORD)v5 + 1 && ((v10 & 0x10) != 0 || *(_DWORD *)(a1 + 376)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDqqDD(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            v5,
            v9);
        *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
        v11 = *v1;
        if ( *((_BYTE *)v1 + 56) )
        {
          IoFreeMdl((PMDL)v1[8]);
          v1[8] = 0LL;
          *((_BYTE *)v1 + 56) = 0;
        }
        TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
        TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
        StageQueue_Release((unsigned __int8 *)(v11 + 128), (unsigned __int8 *)v1);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
        return 2;
      }
    }
  }
  if ( (v7 < 0x39u || v7 > 0x3Au) && (int)Isoch_Stage_AcquireMdl(v1, 0x800000000000000LL, v5, v9) < 0
    || (Isoch_Stage_DetermineSize(a1, v3, v1, v9),
        v15 = Isoch_Stage_EstimateRequiredSegments(a1, v1),
        *(_BYTE *)(a1 + 280))
    && (int)TR_EnsureInputBufferForTrbs(a1, *(_DWORD *)(a1 + 432) * (*((_DWORD *)v1 + 11) - *((_DWORD *)v1 + 10) + 3)) < 0 )
  {
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v13 = *v1;
    if ( *((_BYTE *)v1 + 56) )
    {
      IoFreeMdl((PMDL)v1[8]);
      v1[8] = 0LL;
      *((_BYTE *)v1 + 56) = 0;
    }
    v12 = 1;
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
    v14 = (unsigned __int8 *)(v13 + 128);
    goto LABEL_18;
  }
  if ( !v15 )
    return 0;
  v16 = TR_AcquireSegments(a1, v15, v1 + 1);
  if ( v16 != 259 )
  {
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 2, v17, 49);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v19 = *v1;
      if ( *((_BYTE *)v1 + 56) )
      {
        IoFreeMdl((PMDL)v1[8]);
        v1[8] = 0LL;
        *((_BYTE *)v1 + 56) = 0;
      }
      v12 = 1;
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
      TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
      v14 = (unsigned __int8 *)(v19 + 128);
LABEL_18:
      StageQueue_Release(v14, (unsigned __int8 *)v1);
      if ( *(_DWORD *)(v3 + 112) == *(_DWORD *)(v3 + 116) )
      {
        Isoch_Transfer_CompleteCancelable(a1, v3, -1, -1073737728, 0, 0);
      }
      else
      {
        v12 = 4;
        *(_DWORD *)(v3 + 108) = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 104);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      return v12;
    }
    *(_DWORD *)(a1 + 336) = 0;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), 4, v17, 48);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v18 = *v1;
  if ( *((_BYTE *)v1 + 56) )
  {
    IoFreeMdl((PMDL)v1[8]);
    v1[8] = 0LL;
    *((_BYTE *)v1 + 56) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v18 + 128), (unsigned __int8 *)v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
