/*
 * XREFs of ?IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z @ 0x180186FEC
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801866AC (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall COverlayContext::OverlayPlaneInfo::IsSufficientPresentCountForEligibility(
        COverlayContext::OverlayPlaneInfo *this,
        int a2,
        double a3)
{
  char v5; // bl
  int v6; // eax
  unsigned int v7; // edi
  float v8; // xmm0_4
  unsigned int v9; // eax
  __m128 v10; // rt1
  float v11; // xmm0_4
  unsigned int v12; // ecx
  __m128 v13; // rt1
  float v15; // [rsp+40h] [rbp+8h]
  float v16; // [rsp+40h] [rbp+8h]

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 280LL))(*((_QWORD *)this + 3));
  if ( v6 )
  {
    v7 = a2 - v6;
    if ( *((_BYTE *)this + 200) )
    {
      v8 = (float)(int)CCommonRegistryData::m_uOverlayDisqualifyCount * *(float *)&a3;
      if ( COERCE_UNSIGNED_INT(fabs(v8)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v8 - v8;
        v10.m128_f32[0] = FLOAT_N0_5;
        v9 = (int)v8 - _mm_cmple_ss(*(__m128 *)&a3, v10).m128_u32[0];
      }
      else
      {
        v15 = v8 + 6291456.25;
        v9 = (int)(LODWORD(v15) << 10) >> 11;
      }
      return v7 >= v9;
    }
    else
    {
      v11 = (float)(int)CCommonRegistryData::m_uOverlayQualifyCount * *(float *)&a3;
      if ( COERCE_UNSIGNED_INT(fabs(v11)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v11 - v11;
        v13.m128_f32[0] = FLOAT_N0_5;
        v12 = (int)v11 - _mm_cmple_ss(*(__m128 *)&a3, v13).m128_u32[0];
      }
      else
      {
        v16 = v11 + 6291456.25;
        v12 = (int)(LODWORD(v16) << 10) >> 11;
      }
      return v7 >= v12;
    }
  }
  return v5;
}
