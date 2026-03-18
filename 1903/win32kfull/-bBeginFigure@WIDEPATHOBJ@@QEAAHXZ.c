/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C01195D8
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0119040 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C011A450 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C015A990 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C0119620 (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall WIDEPATHOBJ::bBeginFigure(WIDEPATHOBJ *this)
{
  __int64 result; // rax

  if ( *((_QWORD *)this + 1) && !*((_DWORD *)this + 30) )
  {
    if ( (unsigned int)WIDEPATHOBJ::bGrowPath(this) )
    {
      result = 1LL;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 1;
      return result;
    }
    *((_DWORD *)this + 30) = 1;
  }
  return 0LL;
}
