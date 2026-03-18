/*
 * XREFs of ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18006B160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // [rsp+28h] [rbp-20h]

  v6 = a4;
  LOBYTE(a4) = *(_BYTE *)(a2 + 16);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64, char, __int64))(*(_QWORD *)(a1 - 128)
                                                                                             + 48LL))(
           a1 - 128,
           *(_QWORD *)a2,
           *(unsigned int *)(a2 + 8),
           a4,
           a3,
           v6,
           a5);
}
