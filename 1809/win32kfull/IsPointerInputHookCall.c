/*
 * XREFs of IsPointerInputHookCall @ 0x1C002E4D0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // ecx
  unsigned int v5; // r8d
  __int16 v6; // r9

  if ( !a1 )
  {
    v2 = *a2;
    goto LABEL_14;
  }
  if ( a1 != 4 )
  {
    if ( a1 == 3 || a1 == -1 || a1 == 6 )
    {
      v2 = a2[2];
    }
    else
    {
      if ( a1 != 12 )
      {
        v2 = 0LL;
LABEL_14:
        v3 = 0LL;
        goto LABEL_4;
      }
      v2 = a2[6];
    }
    v3 = *((_QWORD *)a2 + 2);
    goto LABEL_4;
  }
  v2 = a2[4];
  v3 = *((_QWORD *)a2 + 1);
LABEL_4:
  if ( (unsigned int)IsPointerInputMessageWithState(v2, a2, 0LL, v3) || v4 == 528 && v6 == 582 )
    return 1;
  return v5;
}
