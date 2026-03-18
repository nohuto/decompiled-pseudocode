/*
 * XREFs of ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x1801E6754
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z @ 0x1801E6E58 (-SetStartTimeIfNecessary@CNaturalAnimation@@AEAAX_K@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetCommonParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *a3)
{
  __m128 v3; // xmm2
  float v4; // xmm0_4
  int v5; // eax
  __m128 v6; // rt1
  float v8; // [rsp+38h] [rbp+10h]

  *((_DWORD *)this + 96) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 97) = *((_DWORD *)a3 + 3);
  v4 = *((float *)a3 + 2) * 1000.0;
  if ( COERCE_UNSIGNED_INT(fabs(v4)) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)v4 - v4;
    v6.m128_f32[0] = FLOAT_N0_5;
    v5 = (int)v4 - _mm_cmple_ss(v3, v6).m128_u32[0];
  }
  else
  {
    v8 = v4 + 6291456.25;
    v5 = (int)(LODWORD(v8) << 10) >> 11;
  }
  *((_DWORD *)this + 98) = v5;
  if ( !*((_BYTE *)a3 + 32) )
    CNaturalAnimation::SetStartTimeIfNecessary(this, *((_QWORD *)a3 + 3));
  return 0LL;
}
