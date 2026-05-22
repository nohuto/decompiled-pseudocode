/*
 * XREFs of ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x180163AF8
 * Callers:
 *     ?OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z @ 0x180166750 (-OnAddPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J0N@Z.c)
 *     ?OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z @ 0x180166810 (-OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z.c)
 *     ?OnStopPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x180166C60 (-OnStopPulse@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateCurrentStart@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAX_J@Z @ 0x1801691BC (-UpdateCurrentStart@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAX_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  double *v11; // r10
  __int64 v12; // rax
  __int64 v13; // r11
  double v14; // rcx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 48) )
  {
    v4 = *((_QWORD *)this + 7);
    v5 = a2 - v4;
    if ( a2 - v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
    {
      if ( v7 >= v5 )
        v7 = a2 - v4;
      v5 = v7;
    }
    v8 = v4 + v5;
    v9 = *((_QWORD *)this + 13);
    v10 = v9 + *((_QWORD *)this + 14);
    while ( v9 != v10 )
    {
      v11 = *(double **)(*((_QWORD *)this + 11) + 8 * (v9 & (*((_QWORD *)this + 12) - 1LL)));
      v12 = *((_QWORD *)this + 7);
      v13 = *((_QWORD *)v11 + 1);
      if ( v12 <= v13 )
      {
        if ( v8 <= *(_QWORD *)v11 )
          break;
        v14 = *v11;
        if ( v12 >= *(_QWORD *)v11 )
          v14 = *((double *)this + 7);
        LODWORD(v15) = v8;
        if ( v13 < v8 )
          v15 = *((_QWORD *)v11 + 1);
        v11[2] = (double)((int)v15 - LODWORD(v14)) * *((double *)this + 9) / (double)((int)v13 - *(_DWORD *)v11)
               + v11[2];
      }
      ++v9;
    }
    Windows::Internal::SpatialInteractions::AverageHapticsFilter::UpdateCurrentStart(this, a2);
  }
  return 0LL;
}
