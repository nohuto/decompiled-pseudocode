/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETSLICER@@@Z @ 0x1801A90BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     McTemplateU0xdddddd @ 0x1801A97E0 (McTemplateU0xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETSLICER *a3)
{
  *((_OWORD *)this + 40) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 82) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 684) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 44),
      *((_DWORD *)this + 160),
      *((_DWORD *)this + 161),
      *((_DWORD *)this + 162),
      *((_DWORD *)this + 163),
      *((_DWORD *)this + 164),
      *((_DWORD *)this + 165));
  return 0LL;
}
