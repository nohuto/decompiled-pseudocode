/*
 * XREFs of ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_1 @ 0x180088E7C
 * Callers:
 *     sub_180089F84 @ 0x180089F84 (sub_180089F84.c)
 *     sub_18008A074 @ 0x18008A074 (sub_18008A074.c)
 * Callees:
 *     sub_18006F864 @ 0x18006F864 (sub_18006F864.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    *a1 = a2;
    a1[1] = v4;
    sub_18006F864((__int64)a1, a2);
  }
  catch ( ... )
  {
    if ( a2 )
      sub_18008973C(a2, 1LL);
    throw;
  }
}
