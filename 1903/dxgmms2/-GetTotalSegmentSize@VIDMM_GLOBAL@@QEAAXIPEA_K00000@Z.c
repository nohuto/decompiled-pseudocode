/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEAAXIPEA_K00000@Z @ 0x1C007ED64
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x1C0013B80 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ @ 0x1C0002458 (-GetCurrent@VIDMM_PARTITION@@SAPEAU1@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C007F0B8 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r12
  unsigned __int64 *v10; // r15
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdi
  _DWORD *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // r10
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  int v22; // r10d
  int v23; // r10d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  struct VIDMM_PARTITION *Current; // rax
  unsigned __int64 v28; // r8
  int v29; // ecx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v31; // r9

  v8 = 0LL;
  v9 = a4;
  v10 = a3;
  *a6 = 0LL;
  v12 = 0LL;
  *a7 = 0LL;
  v13 = 0LL;
  *a8 = 0LL;
  v14 = 0LL;
  v15 = (_DWORD *)(*((_QWORD *)this + 5023) + 1560LL * a2);
  v16 = v15[6];
  if ( v16 )
  {
    v17 = *((_QWORD *)this + 464);
    v18 = 0LL;
    v19 = v16;
    do
    {
      v20 = *(_QWORD *)(v18 + v17);
      v21 = *(_QWORD *)(v20 + 208);
      v22 = *(_DWORD *)(v20 + 80);
      if ( v21 >= *(_QWORD *)(v20 + 48) )
        v21 = *(_QWORD *)(v20 + 48);
      if ( (v22 & 0x1001) != 0 )
      {
        v23 = *(_DWORD *)(v20 + 80) & 1;
        v24 = v21 + v12;
        if ( !v23 )
          v24 = v12;
        v12 = v24;
        if ( !v23 )
          v13 += v21;
      }
      else if ( (v22 & 0x40) != 0 )
      {
        *a7 += v21;
      }
      else
      {
        *a6 += v21;
      }
      v17 = *((_QWORD *)this + 464);
      v25 = v21 + v14;
      if ( *(_DWORD *)(*(_QWORD *)(v18 + v17) + 476LL) != 2 )
        v25 = v14;
      v18 += 8LL;
      v14 = v25;
      --v19;
    }
    while ( v19 );
    v10 = a3;
    v9 = a4;
  }
  if ( v12 <= v13 )
    v12 = v13;
  *a8 = v12;
  v26 = qword_1C004E468;
  Current = VIDMM_PARTITION::GetCurrent();
  if ( Current )
    v26 = *(_QWORD *)(368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + *((_QWORD *)Current + 5) + 16);
  v28 = *a8;
  if ( *a8 > v26 )
  {
    *a8 = v26;
    v28 = v26;
  }
  v29 = *((_DWORD *)this + 10216);
  if ( v28 > 1LL << v29 && (*((_BYTE *)this + 40872) & 2) != 0 )
    *a8 = 1LL << v29;
  if ( Current )
  {
    SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL, Current);
    *v10 = 100LL
         * *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v31) + 1)
         / (unsigned __int64)(unsigned int)(100 - v15[124]);
    v8 = 100LL * *((_QWORD *)SegmentGroupState + 1) / (unsigned __int64)(unsigned int)(100 - v15[130]);
  }
  else
  {
    *v10 = 0LL;
    v14 = 0LL;
  }
  *v9 = v8;
  *a5 = v14;
}
