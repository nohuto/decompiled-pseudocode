/*
 * XREFs of RaFixupIds @ 0x1C006EA58
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C001B43C (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C001B528 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001B670 (RaidUnitGetHardwareIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaFixupIds(unsigned __int64 a1, char a2)
{
  _WORD *v2; // r8
  int i; // edx
  __int16 v4; // cx
  __int64 result; // rax
  int v6; // edx
  _WORD *v7; // r9

  v2 = (_WORD *)a1;
  if ( a2 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = v2[i];
      if ( v4 )
      {
        if ( (unsigned __int16)(v4 - 33) > 0x5Eu || v4 == 44 )
          v2[i] = 95;
      }
      else
      {
        result = (unsigned int)(i + 1);
        if ( !v2[result] )
          return result;
      }
    }
  }
  v6 = *(unsigned __int16 *)a1;
  LODWORD(a1) = 0;
  if ( (_WORD)v6 )
  {
    v7 = v2;
    do
    {
      result = (unsigned int)(v6 - 33);
      if ( (unsigned __int16)(v6 - 33) > 0x5Eu || (_WORD)v6 == 44 )
        *v7 = 95;
      a1 = (unsigned int)(a1 + 1);
      v7 = &v2[a1];
      v6 = (unsigned __int16)*v7;
    }
    while ( (_WORD)v6 );
  }
  return result;
}
