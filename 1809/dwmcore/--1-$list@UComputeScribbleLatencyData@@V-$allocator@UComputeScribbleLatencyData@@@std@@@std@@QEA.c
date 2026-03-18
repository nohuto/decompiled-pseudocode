/*
 * XREFs of ??1?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA@XZ @ 0x1800EB5B4
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_latencyData__ @ 0x1800F1660 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_latencyData__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void std::list<ComputeScribbleLatencyData>::~list<ComputeScribbleLatencyData>()
{
  _QWORD *v0; // r8
  void *v1; // rcx
  _QWORD *v2; // rbx

  v0 = *(_QWORD **)xmmword_180308680;
  *(_QWORD *)xmmword_180308680 = xmmword_180308680;
  *(_QWORD *)(xmmword_180308680 + 8) = xmmword_180308680;
  *((_QWORD *)&xmmword_180308680 + 1) = 0LL;
  v1 = (void *)xmmword_180308680;
  if ( v0 != (_QWORD *)xmmword_180308680 )
  {
    do
    {
      v2 = (_QWORD *)*v0;
      std::_Deallocate<16,0>(v0, 0x28uLL);
      v1 = (void *)xmmword_180308680;
      v0 = v2;
    }
    while ( v2 != (_QWORD *)xmmword_180308680 );
  }
  std::_Deallocate<16,0>(v1, 0x28uLL);
}
