/*
 * XREFs of ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180037494
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180087420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPtrArrayBase::GetCount(CPtrArrayBase *this)
{
  if ( (*(_QWORD *)this & 2) != 0 )
    return *(_QWORD *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *(_QWORD *)this & 1LL;
}
