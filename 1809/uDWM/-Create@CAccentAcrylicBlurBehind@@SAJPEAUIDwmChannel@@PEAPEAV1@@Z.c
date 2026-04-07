/*
 * XREFs of ?Create@CAccentAcrylicBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180043634
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18004376C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::Create(struct IDwmChannel *a1, struct CAccentAcrylicBlurBehind **a2)
{
  CAccentAcrylicBlurBehind *v4; // rax
  CAccentAcrylicBlurBehind *v5; // rbx
  struct CAccentAcrylicBlurBehind *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  if ( !a2 )
  {
    v8 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Cu);
    return v8;
  }
  v4 = (CAccentAcrylicBlurBehind *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 16LL))(
                                     WPF::g_pProcessHeap,
                                     376LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x178uLL);
    v6 = CAccentAcrylicBlurBehind::CAccentAcrylicBlurBehind(v5);
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v8 = -2147024882;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(struct CAccentAcrylicBlurBehind *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(
         v6,
         a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x6Cu);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
