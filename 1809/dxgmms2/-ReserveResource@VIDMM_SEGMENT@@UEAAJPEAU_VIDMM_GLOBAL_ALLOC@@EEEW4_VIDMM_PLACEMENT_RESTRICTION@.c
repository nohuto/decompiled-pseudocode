/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0076FD0
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C0076F40 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C0025CFC (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C00269DC (McTemplateK0pqx.c)
 *     McTemplateK0qpxxtqqq @ 0x1C0028B00 (McTemplateK0qpxxtqqq.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0077360 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C00773C8 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0077444 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00BEADC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00BF670 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6)
{
  unsigned __int8 v7; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  const GUID *v12; // r8
  int v13; // r14d
  unsigned __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  int v20; // r12d
  __int64 v21; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v22; // r8d
  unsigned int v23; // edx
  struct VIDMM_PARTITION *v24; // r9
  VIDMM_GLOBAL *v25; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v28; // rcx
  unsigned int v29; // r8d
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  _QWORD *v39; // rax
  unsigned __int64 v40; // [rsp+20h] [rbp-98h]
  int v41; // [rsp+28h] [rbp-90h]
  int v42; // [rsp+30h] [rbp-88h]
  int v43; // [rsp+40h] [rbp-78h]
  unsigned __int64 v44; // [rsp+60h] [rbp-58h]
  const GUID *v45; // [rsp+68h] [rbp-50h]
  unsigned int v46; // [rsp+78h] [rbp-40h]
  unsigned int v47; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v48; // [rsp+C8h] [rbp+10h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(a1);
    v32 = WdLogNewEntry5_WdTrace(v31);
    *(_QWORD *)(v32 + 24) = a1;
    *(_QWORD *)(v32 + 32) = a2;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpxxtqqq(a1, a2, a3, *(_DWORD *)(a1 + 16) + 1, a2, v41, v42, a4, v43, a6);
  if ( (*(_DWORD *)(a1 + 80) & 0x20) != 0 )
    v10 = *(_QWORD *)(a2 + 24);
  else
    v10 = *(_QWORD *)(a2 + 16);
  v11 = *(unsigned int *)(a2 + 32);
  v46 = *(_DWORD *)(a2 + 32);
  v48 = v10;
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, a4, a5);
LABEL_29:
    if ( v13 >= 0 )
    {
LABEL_30:
      v21 = *(_QWORD *)(a2 + 16);
      v22 = *(_DWORD *)(a1 + 476);
      v23 = *(_DWORD *)(a1 + 380);
      v24 = **(struct VIDMM_PARTITION ***)(a2 + 488);
      v25 = *(VIDMM_GLOBAL **)(a1 + 8);
      *(_QWORD *)(a1 + 216) += v21;
      SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v25, v23, v22, v24);
      *((_QWORD *)SegmentGroupState + 14) += v21;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 368) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v38 = *(_QWORD *)(a1 + 232);
        v14 = v38 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v14;
        if ( v38 <= qword_1C004D400 && v14 > qword_1C004D400 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 8) + 40048LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 40112LL));
        if ( !v38 )
          VIDMM_GLOBAL::NotifyMemorySegmentActive(*(VIDMM_GLOBAL **)(a1 + 8), (struct VIDMM_SEGMENT *)a1);
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v40) = *(_DWORD *)(a1 + 16) + 1;
        McTemplateK0pqx(
          (unsigned int)v40,
          &TotalBytesResidentInSegment,
          v12,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v40,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_35;
      v28 = *(_QWORD *)(a2 + 496);
      if ( v28 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v28 + 44)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 496) + 40LL)) != 1 )
          goto LABEL_44;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 48LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 56LL), *(_QWORD *)(a2 + 16));
LABEL_44:
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v14 + 40168) += *(_QWORD *)(a2 + 16);
LABEL_35:
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
        v39[3] = *(_QWORD *)(a2 + 208);
        v39[4] = *(int *)(a2 + 220);
        v14 = *(unsigned int *)(a2 + 216);
        v39[5] = v14;
      }
      goto LABEL_37;
    }
LABEL_62:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
    goto LABEL_37;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 488), v10);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v10, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_37:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v14, &EventEndReserveResource, v12, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v14);
      goto LABEL_62;
    }
  }
  v14 = 5LL;
  v15 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) == 0 )
    v14 = a6;
  v47 = v14;
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_29;
  }
  v16 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  switch ( (_DWORD)v14 )
  {
    case 3:
      v7 = 1;
      goto LABEL_18;
    case 4:
      v29 = dword_1C004D178;
      if ( (v15 & 0x1001) != 0 )
        v29 = dword_1C004D17C;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) == 0 )
      {
        v30 = v16 / 0x64;
        if ( *(_BYTE *)(a1 + 449) )
        {
          v7 = 1;
          v16 = (v30 * v29 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          goto LABEL_54;
        }
        v17 = (v30 * (100 - v29) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_53:
        v7 = 0;
LABEL_54:
        v14 = v47;
        goto LABEL_18;
      }
LABEL_45:
      v7 = 0;
      goto LABEL_18;
    case 7:
      goto LABEL_45;
    case 5:
      v17 = *(_QWORD *)(a1 + 384);
      v16 = v17 + *(_QWORD *)(a1 + 392);
      goto LABEL_45;
  }
  if ( (_DWORD)v14 != 6 )
  {
LABEL_18:
    v18 = v16;
    v45 = (const GUID *)v17;
    v44 = v16;
    v19 = v17;
    v12 = (const GUID *)v17;
    v13 = -1073741823;
    v20 = 0;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_30;
      if ( (_DWORD)v14 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v35 = *(_QWORD *)(a1 + 384);
        if ( v20 )
        {
          v16 = *(_QWORD *)(a1 + 384);
          v17 = (unsigned __int64)v12;
          if ( v18 < v35 )
            v16 = v18;
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 392) + v35;
          v17 = v19;
          if ( (unsigned __int64)v12 <= v36 )
            v17 = v36;
        }
        goto LABEL_93;
      }
      if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 || *(_DWORD *)(a1 + 412) != 1 || !*(_QWORD *)(a1 + 432) )
      {
        if ( v20 )
          goto LABEL_29;
LABEL_24:
        v13 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v48,
                v46,
                v7,
                v17,
                v16,
                a4,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 216),
                (void **)(a2 + 208));
        if ( v13 < 0 )
        {
          v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v48, *(unsigned int *)(a2 + 32));
          if ( v13 >= 0 )
            v13 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v48,
                    v46,
                    v7,
                    v17,
                    v16,
                    a4,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 216),
                    (void **)(a2 + 208));
        }
        v12 = v45;
        v18 = v44;
        v19 = (unsigned __int64)v45;
        goto LABEL_26;
      }
      if ( v7 )
        break;
      if ( v20 )
      {
        v17 = (unsigned __int64)v12;
LABEL_88:
        v37 = *(_QWORD *)(a1 + 416);
        if ( v37 >= v16 )
          v37 = v16;
        v16 = v37;
        goto LABEL_93;
      }
      if ( v17 <= *(_QWORD *)(a1 + 424) )
        v17 = *(_QWORD *)(a1 + 424);
LABEL_93:
      if ( v17 < v16 )
        goto LABEL_24;
LABEL_26:
      v14 = v47;
      if ( (unsigned int)++v20 >= 2 )
        goto LABEL_29;
    }
    if ( v20 )
    {
      v16 = v18;
      if ( v17 <= *(_QWORD *)(a1 + 424) )
        v17 = *(_QWORD *)(a1 + 424);
      goto LABEL_93;
    }
    goto LABEL_88;
  }
  v33 = *(_QWORD *)(a1 + 384);
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v17 = *(_QWORD *)(a1 + 384);
    v16 = v33 + *(_QWORD *)(a1 + 392);
    goto LABEL_18;
  }
  v17 = (*(_QWORD *)(a1 + 416) - v10) & ~((v11 - 1) | *(_QWORD *)(a1 + 400));
  v34 = *(_QWORD *)(a1 + 416) - v33;
  if ( v34 >= v10 )
  {
    v16 = *(_QWORD *)(a1 + 424);
    goto LABEL_53;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v34);
  return 3221225473LL;
}
