/*
 * XREFs of ?OnGetIntensity@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_JPEAN@Z @ 0x180123810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z @ 0x18012397C (-AccumulateCurrent@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@IEAAJ_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnGetIntensity(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        double *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  double v10; // xmm1_8
  double v11; // xmm3_8
  __int64 ******v12; // r11
  __int64 *****v13; // r9
  __int64 ***v14; // rax
  __int64 v15; // r10
  __int64 **v16; // rcx
  __int64 v17; // rax
  double v18; // xmm2_8
  __int64 *****v19; // rcx
  __int64 ***v20; // rax
  __int64 ****v21; // rcx
  __int64 v22; // r8
  __int64 **v23; // rcx
  __int64 v24; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = Windows::Internal::SpatialInteractions::AverageHapticsFilter::AccumulateCurrent(this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    v10 = 0.0;
    v11 = 0.0;
    if ( *((_QWORD *)this + 14) )
    {
      v12 = (__int64 ******)((char *)this + 80);
      do
      {
        v13 = *v12;
        v14 = 0LL;
        v15 = *((_QWORD *)this + 13);
        if ( *v12 && *v13 )
          v14 = **v13;
        if ( v14 && (v16 = *v14) != 0LL && *v16 )
          v17 = **v16;
        else
          v17 = 0LL;
        if ( **(_QWORD **)(*(_QWORD *)(v17 + 8) + 8 * ((v15 + v9) & (*(_QWORD *)(v17 + 16) - 1LL))) >= a2 )
          break;
        if ( *((_BYTE *)this + 120) )
        {
          v18 = (double)((int)v9 + 1);
          if ( (__int64)(v9 + 1) < 0 )
            v18 = v18 + 1.844674407370955e19;
        }
        else
        {
          v18 = DOUBLE_1_0;
        }
        v19 = 0LL;
        if ( this != (Windows::Internal::SpatialInteractions::AverageHapticsFilter *)-80LL )
          v19 = *v12;
        v20 = 0LL;
        if ( v19 )
        {
          v21 = *v19;
          if ( v21 )
            v20 = *v21;
        }
        v22 = v15 + v9;
        if ( v20 && (v23 = *v20) != 0LL && *v23 )
          v24 = **v23;
        else
          v24 = 0LL;
        v11 = v11 + v18;
        ++v9;
        v10 = v10
            + v18 * *(double *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 8 * (v22 & (*(_QWORD *)(v24 + 16) - 1LL))) + 16LL);
      }
      while ( v9 < *((_QWORD *)this + 14) );
    }
    result = 0LL;
    *a3 = v10 / v11;
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
