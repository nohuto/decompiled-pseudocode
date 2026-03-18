/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1C0016598
 * Callers:
 *     VidSchExitIndependentFlip @ 0x1C00160F0 (VidSchExitIndependentFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C00168E0 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00169E8 (VidSchiFlushPendingTokenList.c)
 *     VidSchiCancelIndependentFlips @ 0x1C0016B50 (VidSchiCancelIndependentFlips.c)
 *     McTemplateK0txqqqtxtx @ 0x1C00324F0 (McTemplateK0txqqqtxtx.c)
 */

__int64 __fastcall VidSchExitIndependentFlipInternal(
        struct HwQueueStagingList *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        char *a7,
        _QWORD *a8)
{
  int v8; // r13d
  int v9; // r10d
  __int64 v10; // r14
  _DWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // r15d
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v24; // rax
  int v25; // ecx
  __int64 result; // rax
  unsigned int v27; // r12d
  unsigned int v28; // r15d
  unsigned int v29; // edi
  __int64 v30; // rsi
  int v31; // r13d
  unsigned int v32; // edi
  char v33; // r15
  unsigned int v34; // ebx
  __int64 v35; // rsi
  unsigned int v36; // r8d
  __int64 v37; // r11
  unsigned int v38; // r9d
  unsigned int v39; // r10d
  int v40; // r8d
  __int64 v41; // r12
  unsigned int v42; // r15d
  unsigned int v43; // edi
  unsigned int v44; // ebx
  __int64 v45; // r9
  _DWORD *v46; // rdx
  __int64 v47; // r10
  int v48; // [rsp+68h] [rbp-91h]
  struct _VIDSCH_INDEPENDENT_FLIP_STATE *v49; // [rsp+70h] [rbp-89h]
  unsigned int v50; // [rsp+78h] [rbp-81h] BYREF
  unsigned int v51; // [rsp+7Ch] [rbp-7Dh]
  unsigned int v52; // [rsp+80h] [rbp-79h]
  __int64 v53; // [rsp+88h] [rbp-71h]
  _DWORD v54[4]; // [rsp+90h] [rbp-69h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-59h]
  _DWORD v56[4]; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-41h]
  unsigned int v58; // [rsp+C0h] [rbp-39h] BYREF
  int v59; // [rsp+C4h] [rbp-35h]
  unsigned int v60; // [rsp+C8h] [rbp-31h]
  __int64 v61; // [rsp+D0h] [rbp-29h]
  _DWORD v62[4]; // [rsp+D8h] [rbp-21h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-11h]

  v8 = 0;
  v9 = *(_DWORD *)(a2 + 2864);
  v10 = a2;
  v48 = 0;
  *a7 = 0;
  if ( v9 >= 0 )
  {
    v11 = *(_DWORD **)(a2 + 2704);
    do
    {
      if ( *v11 == *a3 && v11[1] == a3[1] )
        break;
      ++v8;
      v11 += 34;
    }
    while ( v8 <= v9 );
    v48 = v8;
  }
  v12 = *(_QWORD *)(v10 + 2704) + 136LL * v8;
  v49 = (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12;
  VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
    (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v50,
    (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
  v15 = v50;
  v16 = 3;
  v17 = a6;
  v18 = v52;
  while ( v15 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v14, v13);
    v20 = v18;
    v21 = v53;
    v19[3] = *(_QWORD *)a3;
    v19[4] = a4;
    v19[5] = *(unsigned int *)(v21 + 4 * v20);
    v19[6] = a6;
    WdLogEvent5_WdPresentTokenEvent(v19);
    v17 = a6;
    v13 = *(_QWORD *)(v12 + 88);
    v22 = *(_QWORD *)(v10 + 8LL * v51 + 2576) + 136LL + 216LL * *(unsigned int *)(v21 + 4 * v20);
    v14 = 5LL * *(unsigned int *)(v22 + 208);
    *(_QWORD *)(v22 + 8 * v14 + 80) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v22 + 8 * v14 + 48) = 0;
    *(_BYTE *)(v22 + 8 * v14 + 49) = a6;
    *(_QWORD *)(v22 + 8 * v14 + 52) = *(_QWORD *)a3;
    *(_QWORD *)(v22 + 8 * v14 + 64) = a4;
    *(_QWORD *)(v22 + 8 * v14 + 72) = v13;
    *(_DWORD *)(v22 + 208) = (*(_DWORD *)(v22 + 208) + 1) & 3;
    v23 = v50 >> 1 == 0;
    v15 = v50 >> 1;
    v50 >>= 1;
    if ( !v23 )
    {
      do
      {
        if ( (v15 & 1) != 0 )
          break;
        ++v51;
        v15 >>= 1;
      }
      while ( v15 );
      v50 = v15;
    }
    v18 = ++v52;
  }
  v24 = *(_QWORD *)(v12 + 88);
  ++*(_QWORD *)(v10 + 2856);
  v25 = *(_DWORD *)(v12 + 112);
  *a8 = v24;
  if ( (unsigned int)(v25 - 1) > 1 )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v54,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v41 = v55;
    v42 = v54[2];
    v43 = v54[1];
    v44 = v54[0];
    while ( v44 )
    {
      result = VidSchiCancelIndependentFlips(
                 (_DWORD)a1,
                 v10,
                 v43,
                 *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v43 + 2576) + 8LL * *(unsigned int *)(v41 + 4LL * v42) + 32),
                 (__int64)a7);
      while ( 1 )
      {
        v44 >>= 1;
        if ( !v44 || (v44 & 1) != 0 )
          break;
        ++v43;
      }
      ++v42;
    }
    *(_DWORD *)(v12 + 112) = 0;
  }
  else
  {
    if ( v17 || v25 != 1 )
      v16 = 0;
    *(_DWORD *)(v12 + 112) = v16;
    *(_WORD *)(v12 + 96) = 0;
    *(_DWORD *)(v12 + 100) = 0;
    *(_DWORD *)(v12 + 104) = 0;
    *(_BYTE *)(v12 + 98) = 0;
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v56,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v27 = v56[2];
    v28 = v56[1];
    v29 = v56[0];
    v30 = v57;
    while ( v29 )
    {
      VidSchiCancelIndependentFlips(
        (_DWORD)a1,
        v10,
        v28,
        *(_QWORD *)(*(_QWORD *)(v10 + 8LL * v28 + 2576) + 8LL * *(unsigned int *)(v30 + 4LL * v27) + 32),
        (__int64)a7);
      result = VidSchiFlushPendingTokenList(a1);
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 || (v29 & 1) != 0 )
          break;
        ++v28;
      }
      ++v27;
    }
    v12 = (__int64)v49;
  }
  v23 = bTracingEnabled == 0;
  v31 = v48;
  *a7 = 0;
  if ( !v23 )
  {
    result = (__int64)VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
                        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v58,
                        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v32 = v60;
    v33 = v59;
    v34 = v58;
    v35 = v61;
    while ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        result = McTemplateK0txqqqtxtx(
                   a6,
                   (unsigned __int8)*a7,
                   v32,
                   0,
                   *(_QWORD *)a3,
                   v33,
                   *(_DWORD *)(v35 + 4LL * v32),
                   a5,
                   *a7,
                   a4,
                   a6,
                   *a8);
      while ( 1 )
      {
        v34 >>= 1;
        if ( !v34 || (v34 & 1) != 0 )
          break;
        ++v33;
      }
      ++v32;
    }
    v12 = (__int64)v49;
    v10 = a2;
    v31 = v48;
  }
  if ( a6 )
  {
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v62,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v12);
    v36 = v62[0];
    v37 = v63;
    v38 = v62[2];
    v39 = v62[1];
    while ( v36 )
    {
      *(_DWORD *)(216LL * *(unsigned int *)(v37 + 4LL * v38) + *(_QWORD *)(v10 + 8LL * v39 + 2576) + 172) = -1;
      while ( 1 )
      {
        v36 >>= 1;
        if ( !v36 || (v36 & 1) != 0 )
          break;
        ++v39;
      }
      ++v38;
    }
    result = 0LL;
    *(_QWORD *)v12 = 0LL;
    *(_DWORD *)(v12 + 16) = 0;
    if ( v31 == *(_DWORD *)(v10 + 2864) )
    {
      v40 = v31 - 1;
      if ( v31 - 1 >= 0 )
      {
        v45 = v40;
        v46 = (_DWORD *)(*(_QWORD *)(v10 + 2704) + 136LL * v40);
        do
        {
          v47 = v45;
          result = (unsigned int)(*v46 | v46[1]);
          if ( *(_QWORD *)v46 )
            break;
          --v40;
          --v45;
          v46 -= 34;
        }
        while ( v47 > 0 );
      }
      *(_DWORD *)(v10 + 2864) = v40;
    }
  }
  return result;
}
