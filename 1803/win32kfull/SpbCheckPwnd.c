/*
 * XREFs of SpbCheckPwnd @ 0x1C01CEA7C
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100340 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C013B0D4 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     FreeSpb @ 0x1C01CE640 (FreeSpb.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  struct tagSPB **v2; // rdi
  struct tagSPB *v3; // rsi
  struct tagSPB *i; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(struct tagSPB ***)(gpDispInfo + 32LL);
    if ( !v2 )
      break;
    while ( 1 )
    {
      v3 = *v2;
      for ( i = v2[1]; i; i = (struct tagSPB *)*((_QWORD *)i + 10) )
      {
        if ( a1 == i )
          FreeSpb((__int64)v2);
      }
      if ( !IsSpbPresentOrNull(v3) )
        break;
      v2 = (struct tagSPB **)v3;
      if ( !v3 )
        goto LABEL_9;
    }
  }
LABEL_9:
  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    return SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), 0);
  return result;
}
