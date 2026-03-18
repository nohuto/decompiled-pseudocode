/*
 * XREFs of ?GetBounds@CGradientBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180020880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetBounds(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // xmm0_4

  if ( !a3 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1) )
  {
    a4[2] = 0;
    v6 = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = *a3;
    v6 = a3[1];
  }
  a4[3] = v6;
  return 0LL;
}
