/*
 * XREFs of ?IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z @ 0x180186F14
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801866AC (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayContext::OverlayPlaneInfo::IsSufficientIntervalForStats(
        COverlayContext::OverlayPlaneInfo *this,
        __int64 a2,
        float *a3)
{
  char v6; // bl
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 272LL))(*((_QWORD *)this + 3));
  *a3 = 1.0;
  if ( !v7 )
    return 1;
  v8 = (a2 - v7) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
  if ( *((_BYTE *)this + 200) )
  {
    if ( (unsigned int)v8 >= CCommonRegistryData::m_dwOverlayDisqualifyInterval )
    {
      v9 = (float)(int)CCommonRegistryData::m_dwOverlayDisqualifyInterval;
      v10 = (float)(int)v8;
LABEL_7:
      *a3 = v10 / v9;
      return 1;
    }
  }
  else if ( (unsigned int)v8 >= CCommonRegistryData::m_dwOverlayQualifyInterval )
  {
    v9 = (float)(int)CCommonRegistryData::m_dwOverlayQualifyInterval;
    v10 = (float)(int)v8;
    goto LABEL_7;
  }
  return v6;
}
