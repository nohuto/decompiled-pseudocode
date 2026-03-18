/*
 * XREFs of ??1?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800D8CA4
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_latencyData__ @ 0x1800EDC50 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_latencyData__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void std::list<ComputeScribbleLatencyData>::~list<ComputeScribbleLatencyData>()
{
  _QWORD *v0; // r8
  void *v1; // rcx
  _QWORD *v2; // rbx

  v0 = *(_QWORD **)xmmword_18033FFD0;
  *(_QWORD *)xmmword_18033FFD0 = xmmword_18033FFD0;
  *(_QWORD *)(xmmword_18033FFD0 + 8) = xmmword_18033FFD0;
  *((_QWORD *)&xmmword_18033FFD0 + 1) = 0LL;
  v1 = (void *)xmmword_18033FFD0;
  if ( v0 != (_QWORD *)xmmword_18033FFD0 )
  {
    do
    {
      v2 = (_QWORD *)*v0;
      std::_Deallocate<16,0>(v0, 0x28uLL);
      v1 = (void *)xmmword_18033FFD0;
      v0 = v2;
    }
    while ( v2 != (_QWORD *)xmmword_18033FFD0 );
  }
  std::_Deallocate<16,0>(v1, 0x28uLL);
}
