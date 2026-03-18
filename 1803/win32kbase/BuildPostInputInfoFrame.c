/*
 * XREFs of BuildPostInputInfoFrame @ 0x1C011F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D78C (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall BuildPostInputInfoFrame(
        CTouchProcessor *a1,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  return CTouchProcessor::BuildPostInputInfoFrame(a1, a2, a3, a4);
}
