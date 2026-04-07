/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800407B4
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x1800408F0 (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct CAccentAcrylicBlurBehind **a1)
{
  CAccentAcrylicBlurBehind *v2; // rax
  CAccentAcrylicBlurBehind *v3; // rbx
  struct CAccentAcrylicBlurBehind *v4; // rbx
  int v5; // eax
  int v6; // edi
  void *v8; // [rsp+28h] [rbp-10h]

  if ( !a1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6Eu, v8);
    return (unsigned int)v6;
  }
  v2 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                                     WPF::g_pProcessHeap,
                                     376LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x178uLL);
    v4 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(struct CAccentAcrylicBlurBehind *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6Eu, v8);
    }
    else
    {
      *a1 = v4;
      v4 = 0LL;
      v6 = 0;
    }
    if ( v6 >= 0 )
      goto LABEL_8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Eu, v8);
  }
  *a1 = 0LL;
LABEL_8:
  if ( v4 )
    CBaseObject::Release(v4);
  return (unsigned int)v6;
}
