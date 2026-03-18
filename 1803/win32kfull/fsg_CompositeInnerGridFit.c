/*
 * XREFs of fsg_CompositeInnerGridFit @ 0x1C02BC6FC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     scl_AdjustOldSideBearingPoints @ 0x1C02B3D04 (scl_AdjustOldSideBearingPoints.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C02B4204 (scl_CalcOrigPhantomPoints.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C02B4530 (scl_CopyCurrentPhantomPoints.c)
 *     scl_InitializeChildScaling @ 0x1C02B469C (scl_InitializeChildScaling.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02B4E84 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C02B4F58 (scl_RoundCurrentSideBearingPnt.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C02B532C (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C02B53E8 (scl_ScaleBackCurrentPhantomPoints.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C02B557C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C02B5880 (scl_ScaleOldPhantomPoints.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C02C7480 (itrp_ExecuteGlyphPgm.c)
 *     itrp_SetSameTransformFlag @ 0x1C02D0370 (itrp_SetSameTransformFlag.c)
 */

__int64 __fastcall fsg_CompositeInnerGridFit(
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
  int v18; // r10d
  _DWORD *v23; // rcx
  __int128 v24; // xmm1
  int v25; // eax
  __int64 result; // rax
  _OWORD v27[2]; // [rsp+50h] [rbp-58h] BYREF
  int v28; // [rsp+70h] [rbp-38h]

  v18 = *(_DWORD *)(a1 + 116);
  *(_BYTE *)(a1 + 341) = 1;
  *(_BYTE *)(a1 + 397) = 1;
  *a16 = HIWORD(v18);
  *a17 = v18;
  *a18 = 0;
  scl_CalcOrigPhantomPoints(a3, a13, a9, a10, a7, a8);
  memmove(
    *(void **)(a3 + 16),
    *(const void **)a3,
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 1));
  memmove(
    *(void **)(a3 + 24),
    *(const void **)(a3 + 8),
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 1));
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 || !a4 )
  {
    if ( a11 )
    {
      scl_ScaleOldPhantomPoints(a3, a1);
      scl_CopyCurrentPhantomPoints((__int64 *)a3);
    }
    else
    {
      scl_OriginalPhantomPointsToCurrentFixedFUnits(a3);
    }
    return 0LL;
  }
  itrp_SetSameTransformFlag(a1, a11);
  if ( !a11 )
  {
    v24 = *(_OWORD *)(a12 + 16);
    v25 = *(_DWORD *)(a12 + 32);
    v27[0] = *(_OWORD *)a12;
    v27[1] = v24;
    v28 = v25;
    scl_InitializeChildScaling(v23, (int *)v27, a6);
    scl_ScaleFixedCurrentCharPoints((__int64 *)a3, a1);
  }
  scl_ScaleOldPhantomPoints(a3, a1);
  scl_AdjustOldSideBearingPoints(a3, a1);
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
