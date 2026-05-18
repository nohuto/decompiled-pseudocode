/*
 * XREFs of ??$_Resetp@V__ExceptionPtr@@@?$shared_ptr@V__ExceptionPtr@@@std@@AEAAXPEAV__ExceptionPtr@@@Z_3 @ 0x1800FCBE4
 * Callers:
 *     sub_1800FC794 @ 0x1800FC794 (sub_1800FC794.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<__ExceptionPtr>::_Resetp<__ExceptionPtr>(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    if ( result )
    {
      result[2] = 1;
      result[3] = 1;
      *(_QWORD *)result = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
      *((_QWORD *)result + 2) = a2;
    }
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    if ( a2 )
      sub_1800FD3C4(a2, 1LL);
    throw;
  }
  return result;
}
