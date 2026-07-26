/*
 * XREFs of ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C00252E8
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C004FF5C (ndisEnableWppTracingCallback.c)
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C0026090 (__report_rangecheckfailure.c)
 */

void __fastcall ndisWppExtendedCallback(char a1, int a2, char a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  int v5; // r9d

  v3 = 0;
  if ( !a1 )
  {
    while ( 1 )
    {
      v4 = v3;
      if ( v3 >= 0x20uLL )
        break;
      ++v3;
      *((_BYTE *)&ndisWppEnabledLevelPerFlag + v4) = 0;
      if ( v3 >= 0x20u )
        return;
    }
LABEL_5:
    _report_rangecheckfailure(&ndisWppEnabledLevelPerFlag);
  }
  v5 = 1;
  do
  {
    if ( (v5 & a2) != 0 )
    {
      *((_BYTE *)&ndisWppEnabledLevelPerFlag + v3) = a3;
    }
    else
    {
      if ( v3 >= 0x20uLL )
        goto LABEL_5;
      *((_BYTE *)&ndisWppEnabledLevelPerFlag + v3) = 0;
    }
    ++v3;
    v5 *= 2;
  }
  while ( v3 < 0x20u );
}
