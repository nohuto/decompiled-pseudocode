/*
 * XREFs of ?ProcessSetOffset@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETOFFSET@@@Z @ 0x180191340
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::ProcessSetOffset(
        CCompositionSkyBoxBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETOFFSET *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((double *)a3 + 1);
  v4 = *((double *)a3 + 2);
  *(float *)v7 = v3;
  v5 = *((double *)a3 + 3);
  *(float *)&v7[1] = v4;
  *(float *)&v7[2] = v5;
  return ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_180306DC8)(
           (char *)this + SDWORD2(xmmword_180306DC8),
           &CCompositionSkyBoxBrush::sc_Offset,
           v7);
}
