/*
 * XREFs of ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01A7AA4
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01A7EC0 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0013EF0 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::AddSegments(
        DirectComposition::CGenericInkMarshaler *this,
        const unsigned __int8 *a2,
        unsigned __int64 a3,
        bool *a4)
{
  unsigned __int64 v8; // r10
  int v9; // esi

  if ( !a2 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 15);
  if ( !v8 || a3 % v8 )
    return 3221225485LL;
  v9 = DirectComposition::CDCompDynamicArrayBase::Grow(
         (DirectComposition::CGenericInkMarshaler *)((char *)this + 80),
         a3,
         0x69674344u);
  if ( v9 >= 0 )
  {
    memmove(
      (void *)(*((_QWORD *)this + 10) + *((_QWORD *)this + 14) * (*((_QWORD *)this + 13) - a3)),
      a2,
      a3 * *((_QWORD *)this + 14));
    *a4 = 1;
  }
  return (unsigned int)v9;
}
