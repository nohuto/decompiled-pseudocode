/*
 * XREFs of ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C01A76F0
 * Callers:
 *     ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01A78E0 (-SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C0008FDC (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r9

  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CInkMarshaler *)((char *)this + 96),
             a2);
  if ( (int)result >= 0 )
  {
    v6 = *((unsigned int *)this + 34);
    if ( v6 >= *((_QWORD *)this + 15) )
      LODWORD(v6) = *((_QWORD *)this + 15);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 34) = v6;
    *a3 = 1;
  }
  return result;
}
