/*
 * XREFs of _lambda_c498f5f4ae65131189ca78714adaa14c_::operator() @ 0x18023A468
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18023BC60 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_c498f5f4ae65131189ca78714adaa14c_::operator()(_BYTE **a1, __int64 *a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    if ( !a3 )
      goto LABEL_6;
    v4 = *(_QWORD *)(*(_QWORD *)*a1 + 96LL);
    if ( v4 )
      v3 = *(_QWORD *)(v4 + 64);
    *a2 = v3;
    if ( !v3 )
LABEL_6:
      *a1[1] = 0;
  }
}
