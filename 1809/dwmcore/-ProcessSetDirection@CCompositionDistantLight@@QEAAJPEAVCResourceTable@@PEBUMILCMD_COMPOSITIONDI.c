/*
 * XREFs of ?ProcessSetDirection@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION@@@Z @ 0x18007A930
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetDirection(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETDIRECTION *a3)
{
  int v3; // xmm1_4
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = *((_DWORD *)a3 + 4);
  v5[1] = v3;
  return ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_180306B98)(
           (char *)this + SDWORD2(xmmword_180306B98),
           &CCompositionDistantLight::sc_Direction,
           v5);
}
