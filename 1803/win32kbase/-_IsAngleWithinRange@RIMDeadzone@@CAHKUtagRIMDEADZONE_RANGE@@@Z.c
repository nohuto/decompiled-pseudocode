/*
 * XREFs of ?_IsAngleWithinRange@RIMDeadzone@@CAHKUtagRIMDEADZONE_RANGE@@@Z @ 0x1C0106580
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C0105E2C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C010600C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMDeadzone::_IsAngleWithinRange(unsigned int a1, __int64 a2)
{
  if ( HIDWORD(a2) >= (unsigned int)a2 )
  {
    if ( a1 < (unsigned int)a2 )
      return 0LL;
  }
  else if ( a1 < 0x168 && a1 >= (unsigned int)a2 )
  {
    return 1LL;
  }
  return a1 < HIDWORD(a2);
}
