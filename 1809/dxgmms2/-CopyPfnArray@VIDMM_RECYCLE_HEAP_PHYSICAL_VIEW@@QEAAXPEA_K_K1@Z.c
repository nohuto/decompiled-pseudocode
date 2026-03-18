/*
 * XREFs of ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C005A0E8
 * Callers:
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00595B0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ @ 0x1C007C780 (-GetFullMDL@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C0080330 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 * Callees:
 *     memmove @ 0x1C001A680 (memmove.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C005A210 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v4; // r10
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // rbx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v8; // r9
  char v9; // r8
  unsigned __int64 v11; // rax
  char v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rdi
  struct VIDMM_MDL_RANGE *NextRange; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  v4 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v5 = 0LL;
  v8 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v9 = 0;
  if ( v8 == (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
    goto LABEL_17;
  do
  {
    if ( v9 )
      break;
    v11 = *((_QWORD *)v8 - 1);
    this = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v8 - 24);
    v8 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v8;
    v9 = 0;
    if ( v11 > a3 )
      v9 = 1;
    else
      this = v5;
    v5 = this;
  }
  while ( v8 != v4 );
  if ( !v5 || *((_QWORD *)v5 + 1) > a3 )
  {
LABEL_17:
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 1LL);
    v22[7] = 0LL;
    v22[3] = 270LL;
    v22[4] = 52LL;
    v22[5] = 17LL;
    v22[6] = v5;
    WdLogEvent5_WdCriticalError(v22);
  }
  v12 = 0;
  v13 = a3;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *((_QWORD *)v5 + 1);
    v16 = *((_QWORD *)v5 + 2);
    v17 = (v13 - v15) >> 12;
    if ( a4 <= v16 )
    {
      v16 = a4;
      v12 = 1;
    }
    v18 = ((v16 - v15) >> 12) - v17;
    memmove(&a2[v14], (const void *)(*(_QWORD *)v5 + 8 * (v17 + 6)), 8 * v18);
    v13 = *((_QWORD *)v5 + 2);
    v14 += v18;
    NextRange = VIDMM_MDL_RANGE::GetNextRange(v5);
    v5 = NextRange;
    if ( v12 )
      break;
    if ( *((_QWORD *)NextRange + 1) != v13 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, 1LL);
      v23[7] = 0LL;
      v23[3] = 270LL;
      v23[4] = 52LL;
      v23[5] = 18LL;
      v23[6] = v5;
      WdLogEvent5_WdCriticalError(v23);
    }
  }
  if ( v14 != (a4 - a3) >> 12 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
    v24[7] = 0LL;
    v24[3] = 270LL;
    v24[4] = 52LL;
    v24[5] = 19LL;
    v24[6] = v14;
    WdLogEvent5_WdCriticalError(v24);
  }
}
