/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C0125CE0
 * Callers:
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0146360 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C01463F4 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C0124FF4 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
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
