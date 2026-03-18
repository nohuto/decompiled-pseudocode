/*
 * XREFs of ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C007C674
 * Callers:
 *     CleanupInputDelegation @ 0x1C0003390 (CleanupInputDelegation.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ScrubDelegatedWindow @ 0x1C007C700 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C00E44A8 (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
 */

void __fastcall ScrubDelegatedWindows(struct tagTHREADINFO *a1)
{
  __int64 *v2; // rsi
  unsigned int v3; // ebx
  char *v4; // rdi
  char v5; // al
  __int64 v6; // rcx
  int v7; // eax

  v2 = (__int64 *)gpKernelHandleTable;
  v3 = 0;
  v4 = (char *)qword_1C01CBA58 + 24;
  do
  {
    v5 = *v4;
    if ( *v4 != 1 && v5 != 23 )
      goto LABEL_4;
    v6 = *v2;
    if ( v5 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 244) || *(struct tagTHREADINFO **)(v6 + 248) != a1 )
        goto LABEL_4;
      v7 = ScrubDelegatedWindow(v6);
    }
    else
    {
      if ( !*(_DWORD *)(v6 + 72) || *(struct tagTHREADINFO **)(v6 + 64) != a1 )
        goto LABEL_4;
      v7 = ScrubDelegatedBaseWindow((struct tagBWND *)v6);
    }
    if ( v7 )
      break;
LABEL_4:
    ++v3;
    v4 += 32;
    v2 += 3;
  }
  while ( v3 <= giheLast );
}
