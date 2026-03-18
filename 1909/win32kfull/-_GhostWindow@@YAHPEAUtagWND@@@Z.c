/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01515A8
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0151524 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0151688 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01519D8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall _GhostWindow(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+24h] [rbp-34h]
  unsigned int v15; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v17; // [rsp+34h] [rbp-24h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v5 = *(struct _KTHREAD **)v3;
      v17 = 0LL;
      v13 = 1;
      v14 = v4;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
      v7 = *(struct _KTHREAD **)v3;
      v15 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v7);
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v13);
    }
    else
    {
      PostShellHookMessagesEx(0x33u, v4, 0LL);
      v2 = 1;
    }
    if ( v2 )
    {
      if ( *(int *)(v3 + 480) >= 0 )
      {
        v18 = 0LL;
        v9 = *(_QWORD **)(v3 + 416);
        LODWORD(v18) = 4;
        PsSetProcessFaultInformation(*v9, &v18);
        *(_DWORD *)(v3 + 480) |= 0x80000000;
      }
    }
    else
    {
      v11 = *(unsigned __int16 *)(gpsi + 900LL);
      v12 = *((_QWORD *)a1 + 18);
      if ( (_WORD)v11 == word_1C032A65C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v12, v11, 1LL, v8);
    }
  }
  return v2;
}
