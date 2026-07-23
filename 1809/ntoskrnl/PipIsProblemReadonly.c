/*
 * XREFs of PipIsProblemReadonly @ 0x140761140
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14015AA5C (PnpRemoveLockedDeviceNode.c)
 *     PiProcessClearDeviceProblem @ 0x140760F8C (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x14083B77C (PiProcessSetDeviceProblem.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140841578 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsProblemReadonly(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
    case 10:
    case 14:
    case 18:
    case 19:
    case 21:
    case 22:
    case 28:
    case 31:
    case 32:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 43:
    case 44:
    case 48:
    case 51:
    case 52:
    case 53:
    case 56:
      goto LABEL_2;
    case 3:
      if ( (*(_DWORD *)(a1 + 396) & 0x20000) != 0 )
        goto LABEL_3;
LABEL_2:
      result = 0LL;
      break;
    default:
LABEL_3:
      result = 1LL;
      break;
  }
  return result;
}
