/*
 * XREFs of ??$make_shared@VEdgeGestureMetrics@@$$V@std@@YA?AV?$shared_ptr@VEdgeGestureMetrics@@@0@XZ @ 0x180102AD4
 * Callers:
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x180102CA4 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<EdgeGestureMetrics,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x28uLL);
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj<EdgeGestureMetrics>::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
