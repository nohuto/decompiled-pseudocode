/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029A00
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180029AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18002D144 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800A1964 (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v9; // al
  __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  const struct MilRectF *TouchTargetBounds; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 248LL))(this) )
  {
    if ( a2 )
    {
      TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds(this, v15);
      v9 = IsPointInRect(a3, TouchTargetBounds);
      *a4 = v9;
    }
    else
    {
      v9 = *a4;
    }
    if ( !v9 )
    {
      v10 = *((_QWORD *)this + 32);
      if ( v10 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v10 + 176LL))(
                v10,
                (char *)this + 132,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1596u);
      }
    }
  }
  return v4;
}
