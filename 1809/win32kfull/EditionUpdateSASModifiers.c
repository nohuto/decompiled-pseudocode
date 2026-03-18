/*
 * XREFs of EditionUpdateSASModifiers @ 0x1C011F030
 * Callers:
 *     <none>
 * Callees:
 *     ?VKTOMODIFIERS@@YAIE@Z @ 0x1C01B9174 (-VKTOMODIFIERS@@YAIE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall EditionUpdateSASModifiers(int a1, unsigned __int8 a2, __int16 a3)
{
  unsigned int result; // eax
  unsigned int v4; // r8d
  int v5; // r9d

  if ( !a1 || (result = gProtocolType, gProtocolType) && (result = gptiCurrent, gptiCurrent == gptiRit) )
  {
    result = 512;
    if ( (a3 & 0x200) == 0 )
    {
      result = VKTOMODIFIERS(a2);
      v4 = result;
      if ( v5 )
      {
        gfsSASModifiersDown &= ~result;
      }
      else
      {
        result = gfsSASModifiersDown;
        gfsSASModifiersDown |= v4;
      }
    }
  }
  return result;
}
