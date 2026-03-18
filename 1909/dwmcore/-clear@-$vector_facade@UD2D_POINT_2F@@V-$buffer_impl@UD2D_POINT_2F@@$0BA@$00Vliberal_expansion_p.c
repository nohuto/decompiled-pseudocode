/*
 * XREFs of ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801AE164
 * Callers:
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801AD9F8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ??_GCDrawListPolygonBuilder@@UEAAPEAXI@Z @ 0x1801ADB10 (--_GCDrawListPolygonBuilder@@UEAAPEAXI@Z.c)
 *     ?BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1801ADC20 (-BeginFigure@CDrawListPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?EndFigure@CDrawListPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1801ADC70 (-EndFigure@CDrawListPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801BA7E8 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE3D4 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 3 )
    return detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
