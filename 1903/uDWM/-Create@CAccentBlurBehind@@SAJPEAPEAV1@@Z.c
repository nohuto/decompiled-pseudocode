/*
 * XREFs of ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x18008B614
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028280 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180022E18 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::Create(struct CAccentBlurBehind **a1)
{
  int v2; // edi
  CRenderDataVisual *v3; // rax
  CRenderDataVisual *v4; // rbx
  int v5; // eax

  if ( !a1 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x3Eu);
    return (unsigned int)v2;
  }
  v3 = (CRenderDataVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                              WPF::g_pProcessHeap,
                              384LL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x180uLL);
    CRenderDataVisual::CRenderDataVisual(v4);
    *(_QWORD *)v4 = &CAccentBlurBehind::`vftable';
    *((_QWORD *)v4 + 36) = 0LL;
    *((_QWORD *)v4 + 37) = 0LL;
    *((_DWORD *)v4 + 76) = 0;
    *((_DWORD *)v4 + 77) = 0;
    *((_DWORD *)v4 + 78) = 0;
    *((_DWORD *)v4 + 80) = 1056964608;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(CRenderDataVisual *))(*(_QWORD *)v4 + 8LL))(v4);
    v2 = v5;
    if ( v5 >= 0 )
    {
      *a1 = v4;
      v4 = 0LL;
      v2 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x3Eu);
    }
    if ( v2 >= 0 )
      goto LABEL_13;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Eu);
  }
  *a1 = 0LL;
LABEL_13:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v2;
}
