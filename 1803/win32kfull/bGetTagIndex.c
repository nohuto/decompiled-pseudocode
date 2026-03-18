/*
 * XREFs of bGetTagIndex @ 0x1C02191A4
 * Callers:
 *     bGetTablePointers @ 0x1C021906C (bGetTablePointers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bGetTagIndex(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0;
  if ( a1 > 0x68686561 )
  {
    switch ( a1 )
    {
      case 0x686D7478u:
        *a3 = 1;
LABEL_43:
        *a2 = 4;
        return 1LL;
      case 0x6B65726Eu:
        *a2 = 3;
        return 1LL;
      case 0x6C6F6361u:
        *a2 = 5;
        break;
      case 0x6D617870u:
        *a2 = 6;
        break;
      case 0x6D6F7274u:
        *a2 = 7;
        return 1LL;
      case 0x6E616D65u:
        *a2 = 7;
        break;
      default:
        switch ( a1 )
        {
          case 0x706F7374u:
            *a2 = 5;
            break;
          case 0x76686561u:
            *a2 = 10;
            break;
          case 0x766D7478u:
            *a2 = 9;
            break;
          default:
            return result;
        }
        return 1LL;
    }
LABEL_15:
    *a3 = 1;
    return 1LL;
  }
  if ( a1 == 1751672161 )
  {
    *a2 = 3;
    goto LABEL_15;
  }
  if ( a1 > 0x636D6170 )
  {
    switch ( a1 )
    {
      case 0x67617370u:
        *a2 = 6;
        return 1LL;
      case 0x676C7966u:
        *a2 = 1;
        break;
      case 0x68646D78u:
        *a2 = 1;
        return 1LL;
      case 0x68656164u:
        *a2 = 2;
        break;
      default:
        return result;
    }
    goto LABEL_15;
  }
  if ( a1 == 1668112752 )
  {
    *a2 = 0;
    goto LABEL_15;
  }
  if ( a1 == 1161972803 )
  {
    *a2 = 11;
  }
  else
  {
    if ( a1 != 1196643650 )
    {
      if ( a1 != 1280594760 )
      {
        if ( a1 == 1330851634 )
        {
          *a2 = 0;
        }
        else
        {
          if ( a1 != 1447316824 )
            return result;
          *a2 = 2;
        }
        return 1LL;
      }
      goto LABEL_43;
    }
    *a2 = 8;
  }
  return 1LL;
}
