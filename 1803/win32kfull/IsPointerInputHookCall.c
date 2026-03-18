/*
 * XREFs of IsPointerInputHookCall @ 0x1C0023D9C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0023E14 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  unsigned int v4; // r8d
  __int16 v5; // r9

  if ( a1 )
  {
    switch ( a1 )
    {
      case 4:
        v2 = a2[4];
        break;
      case 3:
      case -1:
      case 6:
        v2 = a2[2];
        break;
      case 12:
        v2 = a2[6];
        break;
      default:
        v2 = 0LL;
        break;
    }
  }
  else
  {
    v2 = *a2;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v2) || v3 == 528 && v5 == 582 )
    return 1;
  return v4;
}
