/*
 * XREFs of ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01507E8
 * Callers:
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0150764 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01508C8 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0150C18 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall _GhostWindow(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  struct _KTHREAD *v5; // rcx
  unsigned int ThreadProcessId; // eax
  struct _KTHREAD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+24h] [rbp-34h]
  unsigned int v14; // [rsp+2Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+30h] [rbp-28h]
  __int128 v16; // [rsp+34h] [rbp-24h]
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( (unsigned int)SetGhostProp(a1, (HWND)0xFFFFFFFFFFFFFFFFLL) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( IsNonImmersiveBand((__int64)a1) )
    {
      v5 = *(struct _KTHREAD **)v3;
      v16 = 0LL;
      v12 = 1;
      v13 = v4;
      ThreadProcessId = (unsigned int)PsGetThreadProcessId(v5);
      v7 = *(struct _KTHREAD **)v3;
      v14 = ThreadProcessId;
      ThreadId = (unsigned int)PsGetThreadId(v7);
      v2 = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v12);
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
        v17 = 0LL;
        v8 = *(_QWORD **)(v3 + 416);
        LODWORD(v17) = 4;
        PsSetProcessFaultInformation(*v8, &v17);
        *(_DWORD *)(v3 + 480) |= 0x80000000;
      }
    }
    else
    {
      v10 = *(unsigned __int16 *)(gpsi + 900LL);
      v11 = *((_QWORD *)a1 + 18);
      if ( (_WORD)v10 == word_1C032C66C )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v11, v10, 1LL);
    }
  }
  return v2;
}
