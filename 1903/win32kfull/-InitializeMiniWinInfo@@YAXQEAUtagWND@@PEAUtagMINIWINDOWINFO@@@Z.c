/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002AF98
 * Callers:
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     CreateSprite @ 0x1C0048AE8 (CreateSprite.c)
 *     UserGetMiniWinInfo @ 0x1C01E9828 (UserGetMiniWinInfo.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2, __int64 a3, __int64 a4)
{
  char *v4; // r14
  int v6; // ebp
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rax
  struct _KTHREAD *v27; // rdi
  __int64 v28; // rbx
  __int64 *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v4 = (char *)a1 + 40;
  v6 = (_DWORD)a2 + 16;
  *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  v8 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL);
  *((_DWORD *)a2 + 8) = v8;
  *((_DWORD *)a2 + 9) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  *((_DWORD *)a2 + 11) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  v9 = (_OWORD *)((char *)a2 + 56);
  v10 = (_OWORD *)*((_QWORD *)a1 + 27);
  if ( v10 )
  {
    *v9 = *v10;
    *(_OWORD *)((char *)a2 + 72) = v10[1];
    *(_OWORD *)((char *)a2 + 88) = v10[2];
    *(_OWORD *)((char *)a2 + 104) = v10[3];
  }
  else
  {
    memset(v9, 0, 0x40uLL);
  }
  v11 = (_DWORD *)((char *)a2 + 120);
  v12 = a1 - a2;
  v13 = 4LL;
  do
  {
    *v11 = *(_DWORD *)((char *)v11 + v12 + 104);
    ++v11;
    --v13;
  }
  while ( v13 );
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, 0LL, v8, a4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v20 = KeGetCurrentThread();
        v21 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v18, v19) )
        {
          v26 = (__int64 *)PsGetThreadWin32Thread(v20);
          if ( v26 )
            v21 = *v26;
        }
        if ( *(_QWORD *)(v21 + 448) )
        {
          v27 = KeGetCurrentThread();
          v28 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v23, v22, v24, v25) )
          {
            v29 = (__int64 *)PsGetThreadWin32Thread(v27);
            if ( v29 )
              v28 = *v29;
          }
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v28 + 448) + 8LL) + 64LL) & 1) != 0 )
          {
            v30 = *(_DWORD *)(*(_QWORD *)v4 + 288LL);
            if ( (v30 & 0xF) == 0 && (v30 & 0x40000000) != 0 )
            {
              v31 = *(unsigned __int16 *)(*(_QWORD *)v4 + 284LL);
              if ( (_WORD)v31 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v31);
                ScaleDPIRect((_DWORD)a2, (_DWORD)a2, ScaledLogPixels, 96, 0LL, 0LL);
                ScaleDPIRect(v6, v6, ScaledLogPixels, 96, 0LL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
