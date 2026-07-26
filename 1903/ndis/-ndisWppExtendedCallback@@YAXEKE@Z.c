/*
 * XREFs of ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C003DFF0
 * Callers:
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C003EDA8 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ndisEnableWppTracingCallback @ 0x1C007E41C (ndisEnableWppTracingCallback.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1C00407B0 (__report_rangecheckfailure.c)
 */

void __fastcall ndisWppExtendedCallback(char a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  char v4; // r10
  int v5; // r11d
  __int64 v6; // rcx

  v3 = 0;
  v4 = a3;
  v5 = a2;
  if ( !a1 )
  {
    while ( 1 )
    {
      v6 = v3;
      if ( v3 >= 0x20uLL )
        break;
      ++v3;
      ndisWppEnabledLevelPerFlag[v6] = 0;
      if ( v3 >= 0x20u )
        return;
    }
LABEL_5:
    _report_rangecheckfailure(v6, a2, a3, ndisWppEnabledLevelPerFlag);
  }
  v6 = 1LL;
  do
  {
    a3 = v3;
    if ( ((unsigned int)v6 & v5) != 0 )
    {
      LOBYTE(a2) = v4;
    }
    else
    {
      if ( v3 >= 0x20uLL )
        goto LABEL_5;
      LOBYTE(a2) = 0;
    }
    ++v3;
    ndisWppEnabledLevelPerFlag[a3] = a2;
    v6 = (unsigned int)(2 * v6);
  }
  while ( v3 < 0x20u );
}
