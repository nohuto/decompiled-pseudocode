/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00173F0
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C010FF6C (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     SetDeepDelayableVisRITTimer @ 0x1C0017558 (SetDeepDelayableVisRITTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0017C5C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v4; // rax
  struct tagCURSOR *v5; // rbx
  signed int v6; // esi
  __int64 v7; // r9
  int v8; // eax
  int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r9
  signed int v12; // edi
  int v13; // r10d
  int v14; // r8d
  int v15; // eax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v5 = v4;
  if ( v4 && (*((_DWORD *)v4 + 20) & 8) != 0 && *((_QWORD *)v4 + 14) )
  {
    if ( gdwLastAniTick )
    {
      v6 = 0;
      v7 = *((int *)v4 + 30);
      v8 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - 100 * *(_DWORD *)(*((_QWORD *)v4 + 14) + 4 * v7) / 6u
         - gdwLastAniTick;
      if ( v8 >= 0 )
        v6 = v8;
    }
    else
    {
      LODWORD(v7) = *((_DWORD *)v4 + 30);
      v6 = 0;
    }
    v9 = 0;
    if ( (int)v7 + 1 < *((_DWORD *)v5 + 23) )
      v9 = v7 + 1;
    *((_DWORD *)v5 + 30) = v9;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v16;
    v16[1] = v5;
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    if ( a3 )
      zzzUpdateCursorImage();
    v11 = *((_QWORD *)v5 + 14);
    v12 = 100 * *(_DWORD *)(v11 + 4LL * v9) / 6u;
    if ( v12 <= v6 )
    {
      v13 = *((_DWORD *)v5 + 23);
      v14 = *((_DWORD *)v5 + 30);
      do
      {
        v15 = v14 + 1;
        v6 -= v12;
        v14 = 0;
        if ( v15 < v13 )
          v14 = v15;
        *((_DWORD *)v5 + 30) = v14;
        v12 = 100 * *(_DWORD *)(v11 + 4LL * v14) / 6u;
      }
      while ( v12 <= v6 );
    }
    ThreadUnlock1();
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v6;
    gtmridAniCursor = SetDeepDelayableVisRITTimer(gdwLastAniTick, (unsigned int)(v12 - v6));
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
