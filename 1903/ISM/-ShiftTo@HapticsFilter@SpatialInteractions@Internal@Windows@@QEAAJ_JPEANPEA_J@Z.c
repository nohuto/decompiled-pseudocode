/*
 * XREFs of ?ShiftTo@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEANPEA_J@Z @ 0x18016856C
 * Callers:
 *     ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180166390 (-Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsFilter::ShiftTo(
        Windows::Internal::SpatialInteractions::HapticsFilter *this,
        __int64 a2,
        double *a3,
        __int64 *a4)
{
  __int64 v8; // xmm0_8
  int v9; // eax
  __int64 v10; // rdx
  double v11; // xmm1_8
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  double v14; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0.0;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *((_BYTE *)this + 40) )
  {
    v14 = 0.0;
    v9 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsFilter *, __int64, double *))(*(_QWORD *)this + 24LL))(
           this,
           a2,
           &v14);
    if ( v9 < 0 )
    {
      v10 = 141LL;
LABEL_6:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v10,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)(unsigned int)v9);
      v8 = *((_QWORD *)this + 3);
      *a4 = *((_QWORD *)this + 1) + *((_QWORD *)this + 2);
      *(_QWORD *)a3 = v8;
      goto LABEL_11;
    }
    v9 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsFilter *, __int64, _QWORD))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           0LL);
    if ( v9 < 0 )
    {
      v10 = 142LL;
      goto LABEL_6;
    }
    v11 = v14;
    if ( v14 >= 0.001 )
    {
      *a4 = *((_QWORD *)this + 1) + *((_QWORD *)this + 2);
      *a3 = v11;
    }
    else
    {
      *((_BYTE *)this + 40) = 0;
    }
    v8 = *(_QWORD *)a3;
  }
LABEL_11:
  result = 0LL;
  *((_QWORD *)this + 3) = v8;
  return result;
}
