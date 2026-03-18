/*
 * XREFs of ?GetBounds@CProjectedShadow@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F1980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadow::GetBounds(__int64 a1, __int64 a2, float *a3, _DWORD *a4)
{
  int v4; // xmm6_4

  v4 = 0;
  if ( !a3 || *a3 <= 0.0 || a3[1] <= 0.0 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 232LL))(a1) )
  {
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = *(_DWORD *)a3;
    v4 = *((_DWORD *)a3 + 1);
  }
  a4[3] = v4;
  return 0LL;
}
