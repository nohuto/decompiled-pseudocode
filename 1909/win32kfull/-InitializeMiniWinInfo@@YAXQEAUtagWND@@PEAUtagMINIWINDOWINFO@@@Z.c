/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C0031408
 * Callers:
 *     HintSpriteShape @ 0x1C002F780 (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     CreateSprite @ 0x1C008D5A8 (CreateSprite.c)
 *     UserGetMiniWinInfo @ 0x1C01E96A8 (UserGetMiniWinInfo.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  char *v2; // r14
  int v4; // ebp
  __int64 v6; // r8
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _KTHREAD *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  struct _KTHREAD *v23; // rdi
  __int64 v24; // rbx
  __int64 *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v2 = (char *)a1 + 40;
  v4 = (_DWORD)a2 + 16;
  *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  v6 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL);
  *((_DWORD *)a2 + 8) = v6;
  *((_DWORD *)a2 + 9) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  *((_DWORD *)a2 + 11) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  v7 = (_OWORD *)((char *)a2 + 56);
  v8 = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( v8 )
  {
    *v7 = *v8;
    *(_OWORD *)((char *)a2 + 72) = v8[1];
    *(_OWORD *)((char *)a2 + 88) = v8[2];
    *(_OWORD *)((char *)a2 + 104) = v8[3];
  }
  else
  {
    memset(v7, 0, 0x40uLL);
  }
  v9 = (_DWORD *)((char *)a2 + 120);
  v10 = a1 - a2;
  v11 = 4LL;
  do
  {
    *v9 = *(_DWORD *)((char *)v9 + v10 + 104);
    ++v9;
    --v11;
  }
  while ( v11 );
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, 0LL, v6) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v17 = KeGetCurrentThread();
        v18 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16) )
        {
          v22 = (__int64 *)PsGetThreadWin32Thread(v17);
          if ( v22 )
            v18 = *v22;
        }
        if ( *(_QWORD *)(v18 + 448) )
        {
          v23 = KeGetCurrentThread();
          v24 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19, v21) )
          {
            v25 = (__int64 *)PsGetThreadWin32Thread(v23);
            if ( v25 )
              v24 = *v25;
          }
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v24 + 448) + 8LL) + 64LL) & 1) != 0 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)v2 + 288LL);
            if ( (v26 & 0xF) == 0 && (v26 & 0x40000000) != 0 )
            {
              v27 = *(unsigned __int16 *)(*(_QWORD *)v2 + 284LL);
              if ( (_WORD)v27 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v27);
                ScaleDPIRect((_DWORD)a2, (_DWORD)a2, ScaledLogPixels, 96, 0LL, 0LL);
                ScaleDPIRect(v4, v4, ScaledLogPixels, 96, 0LL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
