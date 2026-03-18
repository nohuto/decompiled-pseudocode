/*
 * XREFs of ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C008BA34
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     CleanupInputDelegation @ 0x1C008BA10 (CleanupInputDelegation.c)
 * Callees:
 *     ScrubDelegatedWindow @ 0x1C008BAC0 (ScrubDelegatedWindow.c)
 *     ?ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z @ 0x1C010A4DC (-ScrubDelegatedBaseWindow@@YAHPEAUtagBWND@@@Z.c)
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
  v4 = (char *)qword_1C0213758 + 24;
  do
  {
    v5 = *v4;
    if ( *v4 != 1 && v5 != 23 )
      goto LABEL_4;
    v6 = *v2;
    if ( v5 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 260) || *(struct tagTHREADINFO **)(v6 + 264) != a1 )
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
