/*
 * XREFs of FindBaseSimpleInputBrush @ 0x1800397B8
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180039510 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall FindBaseSimpleInputBrush(_QWORD *a1)
{
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 2LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 1LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, 0LL) )
    {
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 5LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 6LL) )
    {
      break;
    }
    a1 = (_QWORD *)a1[9];
  }
  return 0LL;
}
