/*
 * XREFs of ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C006E6A0
 * Callers:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C006E404 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C016A060 (-RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C016A7AC (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Shrink(
        DirectComposition::CDCompDynamicArrayBase *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rbx
  unsigned int v5; // edi

  v2 = *((_QWORD *)this + 3);
  if ( v2 < a2 )
    v4 = -1LL;
  else
    v4 = v2 - a2;
  v5 = v2 < a2 ? 0xC0000095 : 0;
  if ( v2 >= a2 )
  {
    memset((void *)(*(_QWORD *)this + v4 * *((_QWORD *)this + 4)), 0, *((_QWORD *)this + 4) * (v2 - v4));
    *((_QWORD *)this + 3) = v4;
  }
  return v5;
}
