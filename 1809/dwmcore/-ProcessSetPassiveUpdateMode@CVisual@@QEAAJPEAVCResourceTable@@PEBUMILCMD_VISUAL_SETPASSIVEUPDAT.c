/*
 * XREFs of ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z @ 0x1801B7ADC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessSetPassiveUpdateMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETPASSIVEUPDATEMODE *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_BYTE *)this + 94) = *((_BYTE *)this + 94) & 0xBF | (*((_DWORD *)a3 + 2) != 0 ? 0x40 : 0);
  return result;
}
