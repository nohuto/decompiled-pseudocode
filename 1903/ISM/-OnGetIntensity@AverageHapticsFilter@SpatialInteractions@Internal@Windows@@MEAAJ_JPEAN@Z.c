/*
 * XREFs of ?OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z @ 0x1801667E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAAEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@_K@Z @ 0x180163430 (--A-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$allocator@.c)
 *     ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x180163AC8 (-AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnGetIntensity(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        double *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // r10
  double v10; // xmm1_8
  double i; // xmm3_8
  __int64 v12; // r10
  double v13; // xmm2_8
  __int64 v14; // rax
  __int64 v15; // r10
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    v10 = 0.0;
    for ( i = 0.0; v9 < *((_QWORD *)this + 14); v10 = v10 + v13 * *(double *)(v14 + 16) )
    {
      if ( *(_QWORD *)std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::operator[](
                        (__int64)this + 80,
                        v9) >= a2 )
        break;
      if ( *((_BYTE *)this + 120) )
      {
        v13 = (double)((int)v12 + 1);
        if ( v12 + 1 < 0 )
          v13 = v13 + 1.844674407370955e19;
      }
      else
      {
        v13 = DOUBLE_1_0;
      }
      v14 = std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::operator[](
              (__int64)this + 80,
              v12);
      i = i + v13;
      v9 = v15 + 1;
    }
    result = 0LL;
    *a3 = v10 / i;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x105,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
  return result;
}
