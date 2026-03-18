/*
 * XREFs of BuildPostInputInfoFrame @ 0x1C0174A50
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C015F2C0 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall BuildPostInputInfoFrame(
        CTouchProcessor *a1,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  return CTouchProcessor::BuildPostInputInfoFrame(a1, a2, a3, a4);
}
