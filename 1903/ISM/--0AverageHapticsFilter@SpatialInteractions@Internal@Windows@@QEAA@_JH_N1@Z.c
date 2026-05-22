/*
 * XREFs of ??0AverageHapticsFilter@SpatialInteractions@Internal@Windows@@QEAA@_JH_N1@Z @ 0x180162958
 * Callers:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180167C7C (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

Windows::Internal::SpatialInteractions::AverageHapticsFilter *__fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::AverageHapticsFilter(
        Windows::Internal::SpatialInteractions::AverageHapticsFilter *this,
        __int64 a2,
        __int64 a3,
        char a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rax
  Windows::Internal::SpatialInteractions::AverageHapticsFilter *result; // rax

  *((_QWORD *)this + 1) = a2;
  v4 = (_QWORD *)((char *)this + 80);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = a4;
  *((_DWORD *)this + 9) = 2;
  *((_BYTE *)this + 40) = 0;
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::AverageHapticsFilter::`vftable';
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *v4 = v6;
  *(_OWORD *)v6 = 0LL;
  *(_QWORD *)*v4 = v4;
  result = this;
  *((_BYTE *)this + 120) = 0;
  return result;
}
