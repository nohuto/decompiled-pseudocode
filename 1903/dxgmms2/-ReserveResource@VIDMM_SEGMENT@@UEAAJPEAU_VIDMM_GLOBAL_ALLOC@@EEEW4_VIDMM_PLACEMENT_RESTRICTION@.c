/*
 * XREFs of ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007D400
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007D360 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00255A8 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx @ 0x1C002647C (McTemplateK0pqx.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     McTemplateK0qpxxtqqq @ 0x1C0029640 (McTemplateK0qpxxtqqq.c)
 *     ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1C007D810 (-VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C007D888 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00C1A3C (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00C25F4 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned __int8 v8; // r15
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  int v13; // r14d
  unsigned __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  unsigned int v25; // r10d
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned int v28; // r12d
  unsigned int v29; // r8d
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  _QWORD *v39; // rax
  unsigned __int64 v40; // [rsp+20h] [rbp-98h]
  int v41; // [rsp+28h] [rbp-90h]
  int v42; // [rsp+30h] [rbp-88h]
  int v43; // [rsp+40h] [rbp-78h]
  unsigned __int64 v44; // [rsp+68h] [rbp-50h]
  const GUID *v45; // [rsp+70h] [rbp-48h]
  unsigned int v46; // [rsp+C0h] [rbp+8h]
  __int64 v47; // [rsp+C8h] [rbp+10h]

  v8 = a3;
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
    v11 = *(_QWORD *)(a2 + 24);
  else
    v11 = *(_QWORD *)(a2 + 16);
  v47 = *(unsigned int *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 412) == 1 && (a6 == 5 || (*(_DWORD *)(a2 + 76) & 0x800) != 0) )
  {
    v13 = VIDMM_SEGMENT::ReserveVPRResource((VIDMM_SEGMENT *)a1, (struct _VIDMM_GLOBAL_ALLOC *)a2, a4, a5);
LABEL_14:
    if ( v13 >= 0 )
    {
LABEL_15:
      v12 = *(unsigned int *)(a1 + 380);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = *(int *)(a1 + 476);
      v18 = **(_QWORD **)(a2 + 488);
      v19 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 216) += v19;
      v20 = *(_QWORD *)(v16 + 40184);
      if ( (*(_BYTE *)(v20 + 24 * (v17 + 65 * v12) + 512) & 1) != 0 )
        v14 = *(_QWORD *)(368LL * *(unsigned int *)(*(_QWORD *)(v16 + 24) + 208LL) + *(_QWORD *)(v18 + 40) + 24)
            + 328 * v12;
      else
        v14 = v20 + 1560 * v12 + 328 * v17 + 544;
      *(_QWORD *)(v14 + 112) += v19;
      *(_QWORD *)(a1 + 224) += *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)(a1 + 368) != -1 && (*(_DWORD *)(a2 + 76) & 0x200) == 0 )
      {
        v38 = *(_QWORD *)(a1 + 232);
        v14 = v38 + *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a1 + 232) = v14;
        if ( v38 <= qword_1C004E408 && v14 > qword_1C004E408 )
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
          (const GUID *)v12,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          v40,
          *(_QWORD *)(a1 + 224));
      }
      ++*(_DWORD *)(a1 + 320);
      ++*(_DWORD *)(a1 + 324);
      if ( (*(_DWORD *)(a1 + 80) & 0x1001) == 0 )
        goto LABEL_26;
      v21 = *(_QWORD *)(a2 + 496);
      if ( v21 )
      {
        if ( _InterlockedIncrement((volatile signed __int32 *)(v21 + 44)) == 1 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 56LL), *(_QWORD *)(a2 + 16));
        if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 496) + 40LL)) != 1 )
          goto LABEL_25;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 56LL), *(_QWORD *)(a2 + 16));
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**(_QWORD **)(a2 + 488) + 64LL), *(_QWORD *)(a2 + 16));
LABEL_25:
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(v14 + 40168) += *(_QWORD *)(a2 + 16);
LABEL_26:
      *(_QWORD *)(a2 + 224) = a1;
      if ( g_IsInternalReleaseOrDbg )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
        v39[3] = *(_QWORD *)(a2 + 208);
        v39[4] = *(int *)(a2 + 220);
        v14 = *(unsigned int *)(a2 + 216);
        v39[5] = v14;
      }
      goto LABEL_28;
    }
LABEL_66:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
    goto LABEL_28;
  }
  v13 = VIDMM_SEGMENT::VerifyCommitLimit((VIDMM_SEGMENT *)a1, *(struct VIDMM_PARTITION_ADAPTER_INFO **)(a2 + 488), v11);
  if ( v13 < 0 )
  {
    v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 2LL, v11, *(unsigned int *)(a2 + 32));
    if ( v13 < 0 )
    {
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_28:
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v14, &EventEndReserveResource, (const GUID *)v12, v13);
        }
        return (unsigned int)v13;
      }
      WdLogNewEntry5_WdTrace(v14);
      goto LABEL_66;
    }
  }
  v14 = 5LL;
  v15 = *(_DWORD *)(a1 + 80);
  if ( (*(_DWORD *)(a2 + 76) & 0x800) == 0 )
    v14 = a6;
  v46 = v14;
  if ( (v15 & 0x1000) != 0 )
  {
    *(_QWORD *)(a2 + 216) = 0LL;
    *(_QWORD *)(a2 + 208) = 1LL;
    goto LABEL_14;
  }
  v23 = *(_QWORD *)(a1 + 48);
  v24 = 0LL;
  switch ( (_DWORD)v14 )
  {
    case 3:
      v8 = 1;
      goto LABEL_37;
    case 4:
      v29 = dword_1C004E178;
      if ( (v15 & 0x1001) != 0 )
        v29 = dword_1C004E17C;
      if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
      {
        v8 = 0;
        if ( a7 != -1LL )
        {
          v24 = a7;
          v23 = a7 + v11;
        }
        goto LABEL_37;
      }
      v25 = v47;
      v30 = v23 / 0x64;
      if ( *(_BYTE *)(a1 + 449) )
      {
        v8 = 1;
        v23 = (v30 * v29 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_59;
      }
      v24 = (v30 * (100 - v29) + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_58:
      v8 = 0;
LABEL_59:
      v14 = v46;
      goto LABEL_38;
    case 7:
LABEL_49:
      v8 = 0;
      goto LABEL_37;
    case 5:
      v24 = *(_QWORD *)(a1 + 384);
      v23 = v24 + *(_QWORD *)(a1 + 392);
      goto LABEL_49;
  }
  if ( (_DWORD)v14 != 6 )
  {
LABEL_37:
    v25 = v47;
LABEL_38:
    v26 = v23;
    v45 = (const GUID *)v24;
    v44 = v23;
    v27 = v24;
    v12 = v24;
    v13 = -1073741823;
    v28 = 0;
    while ( 1 )
    {
      if ( v13 >= 0 )
        goto LABEL_15;
      if ( (_DWORD)v14 == 7 && *(_DWORD *)(a1 + 412) == 1 )
      {
        v35 = *(_QWORD *)(a1 + 384);
        if ( v28 )
        {
          v23 = *(_QWORD *)(a1 + 384);
          v24 = v12;
          if ( v26 < v35 )
            v23 = v26;
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 392) + v35;
          v24 = v27;
          if ( v12 <= v36 )
            v24 = v36;
        }
        goto LABEL_100;
      }
      if ( (**(_DWORD **)(a2 + 504) & 0x20000) != 0 || *(_DWORD *)(a1 + 412) != 1 || !*(_QWORD *)(a1 + 432) )
      {
        if ( v28 )
          goto LABEL_14;
LABEL_44:
        v13 = VIDMM_LINEAR_POOL::Allocate(
                *(VIDMM_LINEAR_POOL **)(a1 + 152),
                v11,
                v25,
                v8,
                v24,
                v23,
                a4,
                a5,
                (void *)a2,
                (union _LARGE_INTEGER *)(a2 + 216),
                (void **)(a2 + 208));
        if ( v13 < 0 )
        {
          v13 = VIDMM_SEGMENT::TrimOfferLists(a1, 1LL, v11, *(unsigned int *)(a2 + 32));
          if ( v13 >= 0 )
            v13 = VIDMM_LINEAR_POOL::Allocate(
                    *(VIDMM_LINEAR_POOL **)(a1 + 152),
                    v11,
                    v47,
                    v8,
                    v24,
                    v23,
                    a4,
                    a5,
                    (void *)a2,
                    (union _LARGE_INTEGER *)(a2 + 216),
                    (void **)(a2 + 208));
        }
        v12 = (unsigned __int64)v45;
        v26 = v44;
        v27 = (unsigned __int64)v45;
        goto LABEL_46;
      }
      if ( v8 )
        break;
      if ( v28 )
      {
        v24 = v12;
LABEL_95:
        v37 = *(_QWORD *)(a1 + 416);
        if ( v37 >= v23 )
          v37 = v23;
        v23 = v37;
        goto LABEL_100;
      }
      if ( v24 <= *(_QWORD *)(a1 + 424) )
        v24 = *(_QWORD *)(a1 + 424);
LABEL_100:
      if ( v24 < v23 )
        goto LABEL_44;
LABEL_46:
      v14 = v46;
      ++v28;
      v25 = v47;
      if ( v28 >= 2 )
        goto LABEL_14;
    }
    if ( v28 )
    {
      v23 = v26;
      if ( v24 <= *(_QWORD *)(a1 + 424) )
        v24 = *(_QWORD *)(a1 + 424);
      goto LABEL_100;
    }
    goto LABEL_95;
  }
  v33 = *(_QWORD *)(a1 + 384);
  v25 = v47;
  if ( *(_DWORD *)(a1 + 412) != 1 )
  {
    v24 = *(_QWORD *)(a1 + 384);
    v23 = v33 + *(_QWORD *)(a1 + 392);
    goto LABEL_38;
  }
  v24 = (*(_QWORD *)(a1 + 416) - v11) & ~((v47 - 1) | *(_QWORD *)(a1 + 400));
  v34 = *(_QWORD *)(a1 + 416) - v33;
  if ( v34 >= v11 )
  {
    v23 = *(_QWORD *)(a1 + 424);
    goto LABEL_58;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v34);
  return 3221225473LL;
}
