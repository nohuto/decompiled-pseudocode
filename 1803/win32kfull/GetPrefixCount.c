/*
 * XREFs of GetPrefixCount @ 0x1C022C6B0
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C0210A28 (xxxPSMTextOut.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BF58 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrefixCount(__int16 *a1, int a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  int v5; // ebx
  int v6; // r10d
  __int64 v7; // r11
  int v8; // esi
  __int16 v9; // r9
  int v10; // r14d
  int v11; // ebp
  int v12; // eax
  int v13; // r10d

  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( a2 > 0 )
  {
    v8 = a2;
    if ( a3 )
      v8 = a4;
    do
    {
      v9 = *a1;
      --a2;
      v10 = v6;
      v11 = a2;
      if ( !*a1 )
        break;
      v12 = v8--;
      if ( v12 <= 0 )
        break;
      ++a1;
      if ( v9 == 38 )
      {
        ++v6;
        if ( *a1 == 38 )
        {
          if ( a3 )
            *(_WORD *)(a3 + 2 * v7++) = 38;
          --a2;
          ++a1;
          ++v5;
          continue;
        }
      }
      else
      {
        if ( v9 != 30 )
        {
          if ( v9 == 31 )
          {
            v13 = v6 + 1;
            if ( a2 )
            {
              ++a1;
              --a2;
            }
            if ( !v11 )
              v13 = v10;
            v6 = v13 + 1;
          }
          else
          {
            ++v5;
            if ( a3 )
              *(_WORD *)(a3 + 2 * v7++) = v9;
          }
          continue;
        }
        ++v6;
      }
      v4 = v5;
    }
    while ( a2 > 0 );
  }
  if ( a3 )
    *(_WORD *)(a3 + 2 * v7) = 0;
  return v4 | ((unsigned __int16)v6 << 16);
}
