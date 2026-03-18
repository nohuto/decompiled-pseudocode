/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00BBE58
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C00287C0 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00B8AF0 (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00B8B34 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1C00BA86C (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C0028784 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0086F90 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C00BCBAC (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 */

void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD *v5; // rax
  struct _MDL *v6; // rcx
  VIDMM_LINEAR_POOL *v7; // rcx

  v3 = bTracingEnabled == 0;
  *this = &VIDMM_SEGMENT::`vftable';
  if ( !v3 )
    VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this, a2, a3);
  if ( this[17] != this + 17 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[3] = 270LL;
    v5[4] = 12LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
  operator delete(this[31]);
  VIDMM_SEGMENT::FreeForwardProgressMdl((VIDMM_SEGMENT *)this);
  v6 = (struct _MDL *)this[34];
  if ( v6 )
  {
    MmFreePagesFromMdl(v6);
    ExFreePoolWithTag(this[34], 0);
    this[34] = 0LL;
  }
  v7 = (VIDMM_LINEAR_POOL *)this[19];
  if ( v7 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v7);
}
