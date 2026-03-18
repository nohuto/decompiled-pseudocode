/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2810
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01E2788 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01E24FC (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01E25E8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall _GhostWindow(struct tagWND *a1)
{
  BOOL v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
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
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v13, v8);
    }
    else
    {
      PostShellHookMessagesEx(0x33u, v4, 0LL);
      v2 = 1;
    }
    if ( v2 )
    {
      if ( *(int *)(v3 + 488) >= 0 )
      {
        v9 = *(_QWORD **)(v3 + 424);
        v18 = 4LL;
        PsSetProcessFaultInformation(*v9, &v18);
        *(_DWORD *)(v3 + 488) |= 0x80000000;
      }
    }
    else
    {
      v10 = *(unsigned __int16 *)(gpsi + 900LL);
      v11 = *((_QWORD *)a1 + 15);
      if ( (_WORD)v10 == word_1C0317660 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v11, v10, 1LL);
    }
  }
  return v2;
}
