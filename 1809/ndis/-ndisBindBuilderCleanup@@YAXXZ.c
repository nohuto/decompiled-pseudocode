/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01059DC
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01292D8 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C012936C (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C0104C54 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = P;
  if ( P )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)P);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    P = 0LL;
  }
}
