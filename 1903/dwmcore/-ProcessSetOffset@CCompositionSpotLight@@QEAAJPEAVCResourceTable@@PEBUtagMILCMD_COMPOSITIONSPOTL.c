/*
 * XREFs of ?ProcessSetOffset@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET@@@Z @ 0x1801D3C04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOffset(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOFFSET *a3)
{
  int v3; // xmm1_4
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = *((_DWORD *)a3 + 4);
  v5[1] = v3;
  return ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_18033AB38)(
           (char *)this + SDWORD2(xmmword_18033AB38),
           &CCompositionSpotLight::sc_Offset,
           v5);
}
