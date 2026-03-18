/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C008F274
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008E81C (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0010924 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C008EEF0 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C008F720 (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00C1DE0 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  const void *v5; // r12
  __int64 v6; // r14
  unsigned int v8; // r11d
  unsigned int v10; // esi
  char v11; // bl
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // r15
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int i; // r15d
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  char v24; // cl
  int v25; // eax
  __int64 v26; // rax
  bool v27; // al
  unsigned __int64 *v28; // rcx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  VIDMM_SEGMENT *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r10
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  char *v40; // rax
  VIDMM_SEGMENT *v41; // rax
  VIDMM_SEGMENT *v42; // rbx
  __int64 v43; // r12
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rax
  char v49; // cl
  VIDMM_SEGMENT *v50; // rax
  VIDMM_SEGMENT *v51; // rbx
  int *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  PPCW_INSTANCE *v59; // rsi
  int v60; // eax
  wchar_t *v61; // rax
  __int64 v62; // r8
  WCHAR *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v68; // [rsp+28h] [rbp-D8h]
  unsigned int v69; // [rsp+30h] [rbp-D0h]
  int v70; // [rsp+34h] [rbp-CCh]
  char v71; // [rsp+38h] [rbp-C8h]
  unsigned int v72; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 v73; // [rsp+40h] [rbp-C0h]
  struct _PCW_DATA v74; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v76[2]; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v77; // [rsp+78h] [rbp-88h]
  _QWORD v78[14]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h]
  __int64 v81; // [rsp+100h] [rbp+0h]

  v5 = 0LL;
  v73 = 0LL;
  v6 = 0LL;
  v8 = *((_DWORD *)a3 + 5);
  v69 = a2;
  v77 = a5;
  v72 = v8;
  v71 = 0;
  v74.Data = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
  {
    v10 = v8;
    v70 = -v8;
    while ( 1 )
    {
      v11 = *((_BYTE *)a3 + 436);
      v12 = a4;
      v13 = a4;
      *(_QWORD *)&DestinationString.Length = (char *)a4 + 104;
      if ( (v11 & 3) != 0 && v10 == *((unsigned __int16 *)a3 + 14) )
      {
        memset(v78, 0, 0x68uLL);
        if ( (v11 & 1) != 0 )
        {
          v46 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
          if ( v46 )
            v47 = (_DWORD *)(v46 + 144LL * v69);
          else
            v47 = 0LL;
          v29 = (*v47 >> 4) & 1;
        }
        else
        {
          v29 = 1;
        }
        v30 = 16 * (v29 | ((v71 & 1) << 6));
        v78[2] = qword_1C004E158;
        if ( v6 )
          v31 = v30 | 0x101184;
        else
          v31 = v30 | 0x81184;
        LODWORD(v78[0]) = v31;
        v32 = (VIDMM_SEGMENT *)operator new[](0x1E8uLL, 0x36306956u, (POOL_TYPE)512);
        if ( v32 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v32,
            this,
            v69,
            v10,
            v10 + v70,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v78);
          *(_QWORD *)v32 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v32 = 0LL;
        }
        v33 = v10;
        *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v32;
        if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
        {
          _InterlockedAdd(&dword_1C004E63C, 1u);
          goto LABEL_91;
        }
      }
      else
      {
        v14 = *(unsigned int *)a4;
        if ( (unsigned int)v14 >= 0x200000
          || (v14 & 2) != 0
          || (v14 & 0x80u) == 0LL && (v14 & 0x300) != 0
          || (*(_DWORD *)a4 & 0x300) == 0x300
          || (v14 & 0x2000) != 0 && (v14 & 5) != 0 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v14, a2);
          *(_QWORD *)(v15 + 24) = v10;
          WdLogEvent5_WdAssertion(v15);
          LODWORD(v16) = -1073741811;
          return (unsigned int)v16;
        }
        v39 = *((_QWORD *)a4 + 2);
        if ( (v39 & 0xFFF) != 0 )
        {
          v48 = WdLogNewEntry5_WdWarning(v14, a2);
          *(_QWORD *)(v48 + 24) = 4096LL;
          WdLogEvent5_WdWarning(v48);
          *((_QWORD *)v12 + 2) &= 0xFFFFFFFFFFFFF000uLL;
          v39 = *((_QWORD *)v12 + 2);
          LODWORD(v14) = *(_DWORD *)v13;
        }
        v40 = (char *)v74.Data + v39;
        if ( (v14 & 0x400) == 0 )
          v40 = (char *)v74.Data;
        v74.Data = v40;
        if ( (v14 & 1) != 0 )
        {
          v41 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
          v42 = v41;
          if ( v41 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v41, this, v69, v10, v10 + v70, v12);
            *((_QWORD *)v42 + 61) = 0LL;
            *((_QWORD *)v42 + 62) = 0LL;
            *((_QWORD *)v42 + 64) = 0LL;
            *((_QWORD *)v42 + 63) = 0LL;
            *(_QWORD *)v42 = &VIDMM_APERTURE_SEGMENT::`vftable';
          }
          else
          {
            v42 = 0LL;
          }
          v43 = 8LL * v10;
          *(_QWORD *)(v43 + *((_QWORD *)this + 464)) = v42;
          v44 = *(_QWORD *)(v43 + *((_QWORD *)this + 464));
          if ( !v44 )
          {
            _InterlockedAdd(&dword_1C004E63C, 1u);
            v54 = WdLogNewEntry5_WdLowResource(1LL);
            *(_QWORD *)(v54 + 24) = v10;
            goto LABEL_93;
          }
          if ( (*(_DWORD *)(v44 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 7073) = 1;
          a2 = *(unsigned int *)v12;
          v45 = v71;
          if ( (a2 & 0x400) != 0 )
            v45 = 1;
          v71 = v45;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v12 & 0x10000) == 0 || *((_DWORD *)v12 + 21) )
            v49 = 0;
          else
            v49 = 4;
          *((_BYTE *)a3 + 437) = v49 | *((_BYTE *)a3 + 437) & 0xFB;
          v50 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
          v51 = v50;
          if ( v50 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v50, this, v69, v10, v10 + v70, v12);
            *((_QWORD *)v51 + 61) = 0LL;
            *((_DWORD *)v51 + 124) = 0;
            *(_QWORD *)v51 = &VIDMM_MEMORY_SEGMENT::`vftable';
          }
          else
          {
            v51 = 0LL;
          }
          v43 = 8LL * v10;
          *(_QWORD *)(v43 + *((_QWORD *)this + 464)) = v51;
          if ( !*(_QWORD *)(v43 + *((_QWORD *)this + 464)) )
          {
            _InterlockedAdd(&dword_1C004E618, 1u);
LABEL_91:
            v54 = WdLogNewEntry5_WdLowResource(v33);
            *(_QWORD *)(v54 + 24) = v10;
LABEL_93:
            WdLogEvent5_WdLowResource(v54);
            LODWORD(v16) = -1073741801;
            return (unsigned int)v16;
          }
          a2 = *(unsigned int *)v12;
          if ( (a2 & 0x800) != 0 )
          {
            *((_BYTE *)a3 + 437) |= 2u;
            a2 = *(unsigned int *)v12;
          }
          if ( (a2 & 0x40) == 0 )
            v73 += *(_QWORD *)(*(_QWORD *)(v43 + *((_QWORD *)this + 464)) + 48LL);
        }
        if ( (a2 & 0x10000) != 0 )
        {
          v52 = *(int **)(v43 + *((_QWORD *)this + 464));
          v53 = v52[119];
          if ( (_DWORD)v53 == 2 || !*((_QWORD *)a3 + v53) )
          {
            LODWORD(v16) = VIDMM_SEGMENT::SetVprRange(
                             (VIDMM_SEGMENT *)v52,
                             *((_QWORD *)v12 + 8),
                             *((_QWORD *)v12 + 9),
                             *((_DWORD *)v12 + 20),
                             *((_DWORD *)v12 + 21),
                             *((unsigned int *)v12 + 22));
            if ( (int)v16 < 0 )
              return (unsigned int)v16;
          }
          else
          {
            *(_DWORD *)v12 &= ~0x10000u;
          }
        }
        *(&v79 + *(int *)(*(_QWORD *)(v43 + *((_QWORD *)this + 464)) + 476LL)) += *(_QWORD *)(*(_QWORD *)(v43 + *((_QWORD *)this + 464))
                                                                                            + 56LL);
        v6 = v80;
      }
      if ( ++v10 + v70 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = *(struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **)&DestinationString.Length;
    }
    v5 = v74.Data;
    v8 = v72;
  }
  v34 = 0LL;
  v35 = 2LL;
  do
  {
    v36 = (unsigned __int64 *)((char *)&v79 + v34 * 8);
    v37 = *(__int64 *)((char *)&v79 + v34 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v79);
    if ( v37 && *v36 <= v37 )
      v38 = v37 - *v36;
    else
      v38 = 0LL;
    v76[v34++] = v38;
    --v35;
  }
  while ( v35 );
  for ( i = 0; i < *((_DWORD *)a3 + 6); ++i )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (i + v8));
    v20 = *(int *)(v19 + 476);
    if ( (_DWORD)v20 != 2 && (v21 = *((_QWORD *)a3 + v20)) != 0 )
    {
      if ( (*(_DWORD *)(v19 + 80) & 0x1000) == 0 )
      {
        v55 = v76[v20];
        v56 = *(_QWORD *)(v19 + 56);
        v57 = *(_QWORD *)(v19 + 64) - v56;
        if ( v57 >= v55 )
          v57 = v76[v20];
        v76[v20] = v55 - v57;
        v21 = v56 + v57;
      }
    }
    else
    {
      v21 = *(_QWORD *)(v19 + 64);
    }
    *(_QWORD *)(v19 + 48) = v21;
    v22 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD))(*(_QWORD *)v19 + 8LL))(
            v19,
            NotifyAllocationReclaimed,
            0LL);
    v16 = v22;
    if ( v22 < 0 )
    {
      _InterlockedAdd(&dword_1C004E640, 1u);
      v58 = WdLogNewEntry5_WdLowResource(1LL);
      *(_QWORD *)(v58 + 24) = v16;
      WdLogEvent5_WdLowResource(v58);
      return (unsigned int)v16;
    }
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
        *((_BYTE *)a3 + 437) |= 8u;
      if ( (_DWORD)v20 == 2 )
        goto LABEL_105;
    }
    else
    {
      v23 = *(_DWORD *)(v19 + 80);
      if ( (v23 & 4) == 0 )
      {
        *((_BYTE *)a3 + 437) |= 0x40u;
        v23 = *(_DWORD *)(v19 + 80);
      }
      if ( (v23 & 0x1001) == 0 )
        *((_BYTE *)a3 + 437) |= 0x10u;
    }
    if ( (*(_DWORD *)(v19 + 80) & 0x1001) == 0 )
    {
      *((_QWORD *)a3 + 3 * v20 + 63) += *(_QWORD *)(v19 + 48) - *(_QWORD *)(v19 + 72);
LABEL_105:
      if ( (*(_DWORD *)(v19 + 80) & 0x1001) == 0 )
        goto LABEL_24;
    }
    *((_BYTE *)a3 + 437) |= 0x20u;
    *((_BYTE *)a3 + 24 * v20 + 512) |= 1u;
LABEL_24:
    v8 = v72;
  }
  if ( (*((_BYTE *)a3 + 437) & 0x30) == 0x30 )
    *((_BYTE *)a3 + 437) |= 0x80u;
  v24 = *((_BYTE *)a3 + 512) | 2;
  *((_BYTE *)a3 + 512) = v24;
  if ( (*((_BYTE *)a3 + 437) & 8) != 0 )
  {
    v59 = (PPCW_INSTANCE *)((char *)a3 + 544);
    *((_DWORD *)a3 + 124) = dword_1C004E39C;
    VIDMM_GLOBAL::InitializeSegmentGroupState(this, v69, (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 544), 0LL);
    v60 = dword_1C004E3A0;
    *((_BYTE *)a3 + 536) |= 3u;
    *((_DWORD *)a3 + 130) = v60;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v61 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
    v62 = *((_QWORD *)this + 3);
    LODWORD(v68) = v69;
    v63 = v61;
    LODWORD(Data) = *(_DWORD *)(v62 + 276);
    LODWORD(v16) = RtlStringCbPrintfW(
                     v61,
                     0x208uLL,
                     L"luid_0x%08X_0x%08X_phys_%u",
                     *(unsigned int *)(v62 + 280),
                     Data,
                     v68);
    if ( (int)v16 < 0
      || (RtlInitUnicodeString(&DestinationString, v63),
          v74.Data = v59,
          v74.Size = 328,
          LODWORD(v16) = PcwCreateInstance(
                           v59 + 40,
                           GpuPerformanceCounterSetLocalAdapterMemory,
                           &DestinationString,
                           1u,
                           &v74),
          (int)v16 < 0) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v65, v64);
      WdLogEvent5_WdAssertion(v66);
    }
    operator delete(v63);
    if ( (int)v16 < 0 )
      return (unsigned int)v16;
  }
  else
  {
    v25 = dword_1C004E3A0;
    *((_BYTE *)a3 + 536) &= ~2u;
    *((_BYTE *)a3 + 512) = v24 | 1;
    *((_DWORD *)a3 + 124) = v25;
  }
  v26 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 891) = v5;
  if ( (*(_DWORD *)(v26 + 308) & 8) != 0 )
    v27 = v5 != 0LL;
  else
    v27 = (unsigned __int64)v5 >= qword_1C004E150;
  v28 = v77;
  *((_BYTE *)this + 7137) = v27;
  *v28 = v73;
  return 0LL;
}
