/*
 * XREFs of ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C007B35C
 * Callers:
 *     HintSpriteShape @ 0x1C0077790 (HintSpriteShape.c)
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     CreateSprite @ 0x1C00C4558 (CreateSprite.c)
 *     UserGetMiniWinInfo @ 0x1C01B1A1C (UserGetMiniWinInfo.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall InitializeMiniWinInfo(struct tagWND *const a1, struct tagMINIWINDOWINFO *a2)
{
  char *v2; // r14
  __m128i *v4; // rbp
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  struct _KTHREAD *v20; // rdi
  __int64 v21; // rbx
  __int64 *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int16 ScaledLogPixels; // di

  v2 = (char *)a1 + 40;
  v4 = (__m128i *)((char *)a2 + 16);
  *(_OWORD *)a2 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 28LL);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
  *((_DWORD *)a2 + 11) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
  *((_QWORD *)a2 + 6) = ***(_QWORD ***)(*((_QWORD *)a1 + 3) + 8LL);
  v6 = (_OWORD *)((char *)a2 + 56);
  v7 = (_OWORD *)*((_QWORD *)a1 + 25);
  if ( v7 )
  {
    *v6 = *v7;
    *(_OWORD *)((char *)a2 + 72) = v7[1];
    *(_OWORD *)((char *)a2 + 88) = v7[2];
    *(_OWORD *)((char *)a2 + 104) = v7[3];
  }
  else
  {
    memset(v6, 0, 0x40uLL);
  }
  v8 = (_DWORD *)((char *)a2 + 120);
  v9 = a1 - a2;
  v10 = 4LL;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v9 + 88);
    ++v8;
    --v10;
  }
  while ( v10 );
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, 0LL) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v15 = KeGetCurrentThread();
        v16 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
        {
          v19 = (__int64 *)PsGetThreadWin32Thread(v15);
          if ( v19 )
            v16 = *v19;
        }
        if ( *(_QWORD *)(v16 + 448) )
        {
          v20 = KeGetCurrentThread();
          v21 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
          {
            v22 = (__int64 *)PsGetThreadWin32Thread(v20);
            if ( v22 )
              v21 = *v22;
          }
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v21 + 448) + 8LL) + 52LL) & 1) != 0 )
          {
            v23 = *(_DWORD *)(*(_QWORD *)v2 + 288LL);
            if ( (v23 & 0xF) == 0 && (v23 & 0x40000000) != 0 )
            {
              v24 = *(unsigned __int16 *)(*(_QWORD *)v2 + 284LL);
              if ( (_WORD)v24 != 96 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(v24);
                ScaleDPIRect(a2, (__m128i *)a2, ScaledLogPixels, 0x60u, 0LL, 0LL);
                ScaleDPIRect(v4, v4, ScaledLogPixels, 0x60u, 0LL, 0LL);
              }
            }
          }
        }
      }
    }
  }
}
