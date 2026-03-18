/*
 * XREFs of ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C008BA08
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C008AFE0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0012904 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C008B68C (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C008BEAC (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@IKKPEBUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00BEE80 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitSegments(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct VIDMM_PHYSICAL_ADAPTER *a3,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  unsigned int v8; // r11d
  unsigned int v10; // esi
  char v11; // bl
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v12; // r14
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  VIDMM_SEGMENT *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r10
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **v25; // r8
  unsigned __int64 v26; // rcx
  unsigned int i; // r15d
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  char v34; // cl
  int v35; // eax
  __int64 v36; // rax
  bool v37; // al
  unsigned __int64 *v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  VIDMM_SEGMENT *v41; // rax
  VIDMM_SEGMENT *v42; // rbx
  __int64 v43; // r15
  char v44; // al
  __int64 v45; // rax
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
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v75[2]; // [rsp+58h] [rbp-A8h]
  struct _PCW_DATA v76; // [rsp+68h] [rbp-98h] BYREF
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
  *(_QWORD *)&DestinationString.Length = 0LL;
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
      v75[0] = (char *)a4 + 104;
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
          v18 = (*v47 >> 4) & 1;
        }
        else
        {
          v18 = 1;
        }
        v19 = 16 * (v18 | ((v71 & 1) << 6));
        v78[2] = qword_1C004D158;
        if ( v6 )
          v20 = v19 | 0x101184;
        else
          v20 = v19 | 0x81184;
        LODWORD(v78[0]) = v20;
        v21 = (VIDMM_SEGMENT *)operator new[](0x1E8uLL, 0x36306956u, (POOL_TYPE)512);
        if ( v21 )
        {
          VIDMM_SEGMENT::VIDMM_SEGMENT(
            v21,
            this,
            v69,
            v10,
            v10 + v70,
            (const struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v78);
          *(_QWORD *)v21 = &VIDMM_SYSMEM_SEGMENT::`vftable';
        }
        else
        {
          v21 = 0LL;
        }
        v22 = v10;
        *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v21;
        if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
        {
LABEL_88:
          _InterlockedAdd(&dword_1C004D65C, 1u);
LABEL_90:
          v54 = WdLogNewEntry5_WdLowResource(v22);
          *(_QWORD *)(v54 + 24) = v10;
          WdLogEvent5_WdLowResource(v54);
          LODWORD(v16) = -1073741801;
          return (unsigned int)v16;
        }
        v5 = *(_QWORD *)&DestinationString.Length;
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
        v40 = v39 + *(_QWORD *)&DestinationString.Length;
        if ( (v14 & 0x400) == 0 )
          v40 = *(_QWORD *)&DestinationString.Length;
        v5 = v40;
        *(_QWORD *)&DestinationString.Length = v40;
        if ( (v14 & 1) != 0 )
        {
          v41 = (VIDMM_SEGMENT *)operator new[](0x208uLL, 0x36306956u, (POOL_TYPE)512);
          v42 = v41;
          if ( v41 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v41, this, v69, v10, v10 + v70, v12);
            *((_QWORD *)v42 + 61) = 0LL;
            *(_QWORD *)v42 = &VIDMM_APERTURE_SEGMENT::`vftable';
            *((_QWORD *)v42 + 62) = 0LL;
            *((_QWORD *)v42 + 64) = 0LL;
            *((_QWORD *)v42 + 63) = 0LL;
          }
          else
          {
            v42 = 0LL;
          }
          v43 = v10;
          *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v42;
          v22 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10);
          if ( !v22 )
            goto LABEL_88;
          if ( (*(_DWORD *)(v22 + 80) & 0x10) != 0 )
            *((_BYTE *)this + 7073) = 1;
          a2 = *(unsigned int *)v12;
          v44 = v71;
          if ( (a2 & 0x400) != 0 )
            v44 = 1;
          v71 = v44;
        }
        else
        {
          *((_BYTE *)a3 + 436) |= 8u;
          if ( (*(_DWORD *)v12 & 0x10000) == 0 || (v49 = 4, *((_DWORD *)v12 + 21)) )
            v49 = 0;
          *((_BYTE *)a3 + 437) = v49 | *((_BYTE *)a3 + 437) & 0xFB;
          v50 = (VIDMM_SEGMENT *)operator new[](0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
          v51 = v50;
          if ( v50 )
          {
            VIDMM_SEGMENT::VIDMM_SEGMENT(v50, this, v69, v10, v10 + v70, v12);
            *((_QWORD *)v51 + 61) = 0LL;
            *(_QWORD *)v51 = &VIDMM_MEMORY_SEGMENT::`vftable';
            *((_DWORD *)v51 + 124) = 0;
          }
          else
          {
            v51 = 0LL;
          }
          v43 = v10;
          *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) = v51;
          if ( !*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) )
          {
            _InterlockedAdd(&dword_1C004D638, 1u);
            goto LABEL_90;
          }
          a2 = *(unsigned int *)v12;
          if ( (a2 & 0x800) != 0 )
          {
            *((_BYTE *)a3 + 437) |= 2u;
            a2 = *(unsigned int *)v12;
          }
          if ( (a2 & 0x40) == 0 )
            v73 += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v10) + 48LL);
        }
        if ( (a2 & 0x10000) != 0 )
        {
          v52 = *(int **)(*((_QWORD *)this + 464) + 8 * v43);
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
        v45 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v43);
        *(&v79 + *(int *)(v45 + 476)) += *(_QWORD *)(v45 + 56);
        v6 = v80;
      }
      if ( ++v10 + v70 >= *((_DWORD *)a3 + 6) )
        break;
      a4 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v75[0];
    }
    v8 = v72;
  }
  v23 = 0LL;
  v24 = 2LL;
  do
  {
    v25 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **)((char *)&v79 + v23 * 8);
    v26 = *(__int64 *)((char *)&v79 + v23 * 8 + a3 - (struct VIDMM_PHYSICAL_ADAPTER *)&v79);
    if ( v26 && (a4 = *v25, (unsigned __int64)*v25 <= v26) )
      v75[v23] = v26 - (_QWORD)a4;
    else
      v75[v23] = 0LL;
    ++v23;
    --v24;
  }
  while ( v24 );
  for ( i = 0; i < *((_DWORD *)a3 + 6); ++i )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (i + v8));
    v29 = *(int *)(v28 + 476);
    if ( (_DWORD)v29 != 2 && (v30 = *((_QWORD *)a3 + v29)) != 0 )
    {
      if ( (*(_DWORD *)(v28 + 80) & 0x1000) == 0 )
      {
        v55 = v75[v29];
        v56 = *(_QWORD *)(v28 + 56);
        v57 = *(_QWORD *)(v28 + 64) - v56;
        if ( v57 >= v55 )
          v57 = v75[v29];
        v75[v29] = v55 - v57;
        v30 = v56 + v57;
      }
    }
    else
    {
      v30 = *(_QWORD *)(v28 + 64);
    }
    *(_QWORD *)(v28 + 48) = v30;
    v31 = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *))(*(_QWORD *)v28 + 8LL))(
            v28,
            NotifyAllocationReclaimed,
            0LL,
            a4);
    v16 = v31;
    if ( v31 < 0 )
    {
      _InterlockedAdd(&dword_1C004D660, 1u);
      v58 = WdLogNewEntry5_WdLowResource(v32);
      *(_QWORD *)(v58 + 24) = v16;
      WdLogEvent5_WdLowResource(v58);
      return (unsigned int)v16;
    }
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 == 1 )
        *((_BYTE *)a3 + 437) |= 8u;
      if ( (_DWORD)v29 == 2 )
        goto LABEL_103;
    }
    else
    {
      v33 = *(_DWORD *)(v28 + 80);
      if ( (v33 & 4) == 0 )
      {
        *((_BYTE *)a3 + 437) |= 0x40u;
        v33 = *(_DWORD *)(v28 + 80);
      }
      if ( (v33 & 0x1001) == 0 )
        *((_BYTE *)a3 + 437) |= 0x10u;
    }
    if ( (*(_DWORD *)(v28 + 80) & 0x1001) == 0 )
    {
      *((_QWORD *)a3 + 3 * v29 + 63) += *(_QWORD *)(v28 + 48) - *(_QWORD *)(v28 + 72);
LABEL_103:
      if ( (*(_DWORD *)(v28 + 80) & 0x1001) == 0 )
        goto LABEL_38;
    }
    *((_BYTE *)a3 + 437) |= 0x20u;
    *((_BYTE *)a3 + 24 * v29 + 512) |= 1u;
LABEL_38:
    v8 = v72;
  }
  if ( (*((_BYTE *)a3 + 437) & 0x30) == 0x30 )
    *((_BYTE *)a3 + 437) |= 0x80u;
  v34 = *((_BYTE *)a3 + 512) | 2;
  *((_BYTE *)a3 + 512) = v34;
  if ( (*((_BYTE *)a3 + 437) & 8) != 0 )
  {
    v59 = (PPCW_INSTANCE *)((char *)a3 + 544);
    *((_DWORD *)a3 + 124) = dword_1C004D394;
    VIDMM_GLOBAL::InitializeSegmentGroupState(this, v69, (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a3 + 544), 0LL);
    v60 = dword_1C004D398;
    *((_BYTE *)a3 + 536) |= 1u;
    *((_BYTE *)a3 + 536) |= 2u;
    *((_DWORD *)a3 + 130) = v60;
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
          v76.Data = v59,
          v76.Size = 328,
          LODWORD(v16) = PcwCreateInstance(
                           v59 + 40,
                           GpuPerformanceCounterSetLocalAdapterMemory,
                           &DestinationString,
                           1u,
                           &v76),
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
    v35 = dword_1C004D398;
    *((_BYTE *)a3 + 536) &= ~2u;
    *((_BYTE *)a3 + 512) = v34 | 1;
    *((_DWORD *)a3 + 124) = v35;
  }
  v36 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 891) = v5;
  if ( (*(_DWORD *)(v36 + 308) & 8) != 0 )
    v37 = v5 != 0;
  else
    v37 = v5 >= qword_1C004D150;
  v38 = v77;
  *((_BYTE *)this + 7137) = v37;
  *v38 = v73;
  return 0LL;
}
