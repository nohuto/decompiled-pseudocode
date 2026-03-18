/*
 * XREFs of ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C29F0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C27D0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetTouchTargetBounds@CVisual@@IEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180083ABC (-GetTouchTargetBounds@CVisual@@IEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800880F0 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::HitTestContent(CVisual *this, char a2, const struct D2D_POINT_2F *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v9; // al
  __int64 v10; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  const struct MilRectF *TouchTargetBounds; // rax
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 288LL))(this) )
  {
    if ( a2 )
    {
      TouchTargetBounds = (const struct MilRectF *)CVisual::GetTouchTargetBounds((__int64)this, &v15);
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
        v12 = (*(__int64 (__fastcall **)(__int64, char *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v10 + 216LL))(
                v10,
                (char *)this + 132,
                a3,
                a4);
        v4 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1680u, 0LL);
      }
    }
  }
  return v4;
}
