/*
 * XREFs of ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0035170
 * Callers:
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F54D4 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C013EC38 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C0221688 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0010EFC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall DXGALLOCATIONREFERENCE::`vector deleting destructor'(DXGALLOCATIONREFERENCE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    8LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
