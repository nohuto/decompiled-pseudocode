/*
 * XREFs of ?OnInit@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@MEAAJ_J@Z @ 0x180123670
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAX$$QEAUSubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@Z @ 0x180128D14 (-push_back@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$al.c)
 *     ?_Tidy@?$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V?$allocator@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@@std@@@std@@IEAAXXZ @ 0x180128E50 (-_Tidy@-$deque@USubdivision@AverageHapticsFilter@SpatialInteractions@Internal@Windows@@V-$alloca.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  __int64 v6; // r12
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  *((_BYTE *)this + 48) = 0;
  std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::_Tidy((char *)this + 80);
  v6 = *((_QWORD *)this + 1) / *((int *)this + 9);
  try
  {
    while ( v4 < *((_DWORD *)this + 9) )
    {
      v8[0] = a2;
      v8[1] = v6 + a2;
      v8[2] = 0LL;
      std::deque<Windows::Internal::SpatialInteractions::AverageHapticsFilter::Subdivision>::push_back(
        (char *)this + 80,
        v8);
      a2 += v6;
      ++v4;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE9,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
                           v5);
  }
  return result;
}
