/*
 * XREFs of ??$make_unique@VCAppSubmixClientContext@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@XZ @ 0x1800FCE34
 * Callers:
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800FD4BC (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180053D70 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixClientContext,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x48uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x48uLL);
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[8] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
