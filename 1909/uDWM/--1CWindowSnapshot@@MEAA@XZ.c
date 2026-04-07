/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x180025874
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x1800274C0 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x180027438 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x18002746C (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this, unsigned int a2)
{
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  float v16; // xmm0_4
  _QWORD *v17; // rax
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CBaseObject *v20; // rcx
  CBaseObject *v21; // rcx
  CWindowData *v22; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v10 )
  {
    v11 = v10[14] - v10[12];
    v12 = v10[15] - v10[13];
    v13 = 0;
    if ( v12 >= 0 )
      v13 = v12;
    v14 = _mm_cvtsi32_si128(v13);
    v15 = 0;
    LODWORD(v16) = _mm_cvtepi32_ps(v14).m128_u32[0];
    if ( v11 >= 0 )
      v15 = v11;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v15 * *((float *)this + 18)),
      (int)(float)(v16 * *((float *)this + 18)),
      *((struct CCachedVisualImageProxy **)this + 6));
    v17 = (_QWORD *)*((_QWORD *)this + 4);
    v18 = (CBaseObject *)v17[50];
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v17 = (_QWORD *)*((_QWORD *)this + 4);
    }
    v19 = (CBaseObject *)v17[46];
    if ( v19 )
    {
      CBaseObject::Release(v19);
      v17 = (_QWORD *)*((_QWORD *)this + 4);
    }
    v20 = (CBaseObject *)v17[48];
    if ( v20 )
      CBaseObject::Release(v20);
  }
  v21 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v21 )
    CBaseObject::Release(v21);
  v22 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v22 )
  {
    CWindowData::`scalar deleting destructor'(v22, a2);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
