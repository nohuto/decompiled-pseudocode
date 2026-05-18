/*
 * XREFs of ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_2 @ 0x180088EE4
 * Callers:
 *     sub_18008A6D0 @ 0x18008A6D0 (sub_18008A6D0.c)
 * Callees:
 *     sub_18000FDFC @ 0x18000FDFC (sub_18000FDFC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    *a1 = a2;
    a1[1] = v4;
    sub_18000FDFC((__int64)a1, (__int64)a2);
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
}
