/*
 * XREFs of fsg_SimpleInnerGridFit @ 0x1C02BE488
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     scl_AdjustOldCharSideBearing @ 0x1C02B3C30 (scl_AdjustOldCharSideBearing.c)
 *     scl_AdjustOldPhantomSideBearing @ 0x1C02B3C98 (scl_AdjustOldPhantomSideBearing.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C02B4204 (scl_CalcOrigPhantomPoints.c)
 *     scl_CopyCurrentCharPoints @ 0x1C02B44B8 (scl_CopyCurrentCharPoints.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C02B4530 (scl_CopyCurrentPhantomPoints.c)
 *     scl_InitializeChildScaling @ 0x1C02B469C (scl_InitializeChildScaling.c)
 *     scl_OriginalCharPointsToCurrentFixedFUnits @ 0x1C02B4E1C (scl_OriginalCharPointsToCurrentFixedFUnits.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02B4E84 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C02B4F58 (scl_RoundCurrentSideBearingPnt.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C02B532C (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C02B53E8 (scl_ScaleBackCurrentPhantomPoints.c)
 *     scl_ScaleOldCharPoints @ 0x1C02B57B4 (scl_ScaleOldCharPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C02B5880 (scl_ScaleOldPhantomPoints.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C02C7480 (itrp_ExecuteGlyphPgm.c)
 *     itrp_SetCompositeFlag @ 0x1C02D0114 (itrp_SetCompositeFlag.c)
 *     itrp_SetSameTransformFlag @ 0x1C02D0370 (itrp_SetSameTransformFlag.c)
 */

__int64 __fastcall fsg_SimpleInnerGridFit(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int16 a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        __int16 a9,
        __int16 a10,
        unsigned int a11,
        __int64 a12,
        __int16 *a13,
        unsigned __int16 a14,
        __int64 a15,
        _WORD *a16,
        _WORD *a17,
        _DWORD *a18)
{
  __int64 v22; // rcx
  int v23; // r10d
  _DWORD *v24; // rcx
  __int128 v25; // xmm1
  int v26; // eax
  __int64 result; // rax
  _OWORD v28[2]; // [rsp+50h] [rbp-58h] BYREF
  int v29; // [rsp+70h] [rbp-38h]

  itrp_SetCompositeFlag(a1, 0LL);
  v23 = *(_DWORD *)(v22 + 116);
  *a16 = HIWORD(v23);
  *a17 = v23;
  *a18 = 0;
  scl_CalcOrigPhantomPoints(a3, a13, a9, a10, a7, a8);
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 || !a4 )
  {
    if ( a11 )
    {
      scl_ScaleOldCharPoints(a3, a1);
      scl_ScaleOldPhantomPoints(a3, a1);
      scl_CopyCurrentCharPoints(a3);
      scl_CopyCurrentPhantomPoints((__int64 *)a3);
    }
    else
    {
      scl_OriginalCharPointsToCurrentFixedFUnits(a3);
      scl_OriginalPhantomPointsToCurrentFixedFUnits(a3);
    }
    return 0LL;
  }
  itrp_SetSameTransformFlag(a1, a11);
  if ( !a11 )
  {
    v25 = *(_OWORD *)(a12 + 16);
    v26 = *(_DWORD *)(a12 + 32);
    v28[0] = *(_OWORD *)a12;
    v28[1] = v25;
    v29 = v26;
    scl_InitializeChildScaling(v24, (int *)v28, a6);
  }
  scl_ScaleOldCharPoints(a3, a1);
  scl_ScaleOldPhantomPoints(a3, a1);
  scl_AdjustOldCharSideBearing(a3, a1);
  scl_AdjustOldPhantomSideBearing(a3, a1);
  scl_CopyCurrentCharPoints(a3);
  scl_CopyCurrentPhantomPoints((__int64 *)a3);
  scl_RoundCurrentSideBearingPnt(a3, a1, a6);
  if ( !a14
    || (memset(
          *(void **)(a3 + 72),
          0,
          (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 9)),
        result = itrp_ExecuteGlyphPgm(
                   a2,
                   a3,
                   a15,
                   (unsigned int)a15 + a14,
                   a1,
                   a5,
                   (__int64)a16,
                   (__int64)a17,
                   (__int64)a18),
        !(_DWORD)result) )
  {
    if ( !a11 )
    {
      scl_ScaleBackCurrentCharPoints(a3, a1);
      scl_ScaleBackCurrentPhantomPoints(a3, a1);
    }
    return 0LL;
  }
  return result;
}
