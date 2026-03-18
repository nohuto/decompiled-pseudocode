/*
 * XREFs of ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801604D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180057918 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180057EDC (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180160D04 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     McTemplateU0ffff @ 0x180160DB4 (McTemplateU0ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx

  v8 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0ffff(
      (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
      v12,
      v13,
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 8)),
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 12)));
  if ( (_DWORD)v8 )
  {
    v14 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 29) + 136LL))(
        *((_QWORD *)this + 29),
        a3,
        a5);
      a3 += 16LL;
      --v14;
    }
    while ( v14 );
  }
  return 0LL;
}
