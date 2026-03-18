/*
 * XREFs of ?bValid@WIDENER@@QEBAHXZ @ 0x1C012185C
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C011D180 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012114C (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WIDENER::bValid(WIDENER *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 143) && !*((_DWORD *)this + 314) && *((_QWORD *)this + 124) && !*((_DWORD *)this + 276) )
  {
    if ( *((_QWORD *)this + 104) )
      return *((_DWORD *)this + 236) == 0;
  }
  return result;
}
