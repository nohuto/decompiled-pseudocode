/*
 * XREFs of ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01A5D3C
 * Callers:
 *     ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01A5C20 (-SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00068AC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetProperties(
        void **this,
        const unsigned __int8 *a2,
        unsigned __int64 a3,
        bool *a4)
{
  int v8; // edi

  if ( !a2 || a3 > 0x400 )
    return 3221225485LL;
  v8 = DirectComposition::CDCompDynamicArrayBase::SetCount(
         (DirectComposition::CDCompDynamicArrayBase *)(this + 5),
         a3,
         0x69674344u);
  if ( v8 >= 0 )
  {
    memmove(this[5], a2, a3 * (_QWORD)this[9]);
    *((_DWORD *)this + 4) &= ~0x20u;
    *a4 = 1;
  }
  return (unsigned int)v8;
}
