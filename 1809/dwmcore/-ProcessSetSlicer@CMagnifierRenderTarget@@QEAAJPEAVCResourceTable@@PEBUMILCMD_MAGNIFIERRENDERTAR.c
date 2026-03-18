/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETSLICER@@@Z @ 0x18015D870
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     McTemplateU0xdddddd @ 0x18015DF50 (McTemplateU0xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_SETSLICER *a3)
{
  *(_OWORD *)((char *)this + 648) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 83) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 692) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 44),
      *((_DWORD *)this + 162),
      *((_DWORD *)this + 163),
      *((_DWORD *)this + 164),
      *((_DWORD *)this + 165),
      *((_DWORD *)this + 166),
      *((_DWORD *)this + 167));
  return 0LL;
}
