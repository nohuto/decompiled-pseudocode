/*
 * XREFs of ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18003A754
 * Callers:
 *     ??_ECTransitionWindowSnapshot@@MEAAPEAXI@Z @ 0x18003A710 (--_ECTransitionWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x1800284F4 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 */

void __fastcall CTransitionWindowSnapshot::~CTransitionWindowSnapshot(CTransitionWindowSnapshot *this)
{
  float v1; // xmm1_4
  unsigned int v3; // eax
  __m128i v4; // xmm0
  int v5; // eax
  float v6; // xmm0_4
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  v1 = *((float *)this + 88);
  *(_QWORD *)this = &CTransitionWindowSnapshot::`vftable';
  v3 = 0;
  if ( *((_DWORD *)this + 83) - *((_DWORD *)this + 81) >= 0 )
    v3 = *((_DWORD *)this + 83) - *((_DWORD *)this + 81);
  v4 = _mm_cvtsi32_si128(v3);
  v5 = 0;
  LODWORD(v6) = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( *((_DWORD *)this + 82) - *((_DWORD *)this + 80) >= 0 )
    v5 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
  CDesktopManager::FreeCVIIntoCache(
    (int)(float)((float)v5 * v1),
    (int)(float)(v6 * v1),
    *((struct CResource **)this + 36));
  v7 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 36) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 37) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 38) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 39) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 35) = 0LL;
  }
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
