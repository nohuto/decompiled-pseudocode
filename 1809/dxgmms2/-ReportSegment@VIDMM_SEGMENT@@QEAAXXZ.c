/*
 * XREFs of ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0086F90
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0086DD0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00ABC38 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00BBE58 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     McTemplateK0qpxxxqqxpu @ 0x1C0028BF8 (McTemplateK0qpxxxqqxpu.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegment(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  int v3; // [rsp+40h] [rbp-38h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpxxxqqxpu(
      (__int64)this,
      *((_QWORD *)this + 1),
      a3,
      *((_DWORD *)this + 4) + 1,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 6),
      v3,
      *((_DWORD *)this + 20),
      *((_QWORD *)this + 26),
      *((_QWORD *)this + 16),
      *((_BYTE *)this + 476));
}
