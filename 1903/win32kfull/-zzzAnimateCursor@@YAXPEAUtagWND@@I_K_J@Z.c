/*
 * XREFs of ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00AB280
 * Callers:
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C011AF04 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00AB650 (InternalSetTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00ABB94 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall zzzAnimateCursor(struct tagWND *a1, __int64 a2, __int64 a3)
{
  struct tagCURSOR *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct tagCURSOR *v8; // rbx
  signed int v9; // esi
  __int64 v10; // r9
  int v11; // ebp
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // edi
  int v21; // r10d
  unsigned int v22; // eax
  int v23; // edi
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  struct tagCURSOR *v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v4 = FixupCursorForMonitor(gpcurLogCurrent);
  v8 = v4;
  if ( v4 && (*((_DWORD *)v4 + 20) & 8) != 0 && *((_QWORD *)v4 + 14) )
  {
    if ( gdwLastAniTick )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v9 = 0;
      v10 = *((int *)v4 + 30);
      v5 = 100 * *(_DWORD *)(*((_QWORD *)v4 + 14) + 4 * v10) / 6u;
      if ( (int)(((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
               - v5
               - gdwLastAniTick) >= 0 )
        v9 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v5 - gdwLastAniTick;
    }
    else
    {
      v10 = *((unsigned int *)v4 + 30);
      v9 = 0;
    }
    v11 = 0;
    if ( (int)v10 + 1 < *((_DWORD *)v4 + 23) )
      v11 = v10 + 1;
    v12 = 0LL;
    *((_DWORD *)v4 + 30) = v11;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v10) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    v24 = *(_QWORD *)(v12 + 408);
    *(_QWORD *)(v12 + 408) = &v24;
    v25 = v8;
    HMLockObject(v8);
    if ( a3 )
      zzzUpdateCursorImage(v16, v15, v17);
    v18 = *((_QWORD *)v8 + 14);
    v19 = (unsigned int)(100 * *(_DWORD *)(v18 + 4LL * v11));
    LODWORD(v15) = (2863311531u * (unsigned __int64)(unsigned int)v19) >> 32;
    v20 = (unsigned int)v19 / 6;
    if ( (int)((unsigned int)v19 / 6) <= v9 )
    {
      v21 = *((_DWORD *)v8 + 23);
      LODWORD(v17) = *((_DWORD *)v8 + 30);
      do
      {
        v22 = v17 + 1;
        v9 -= v20;
        v17 = 0LL;
        if ( (int)v22 < v21 )
          v17 = v22;
        *((_DWORD *)v8 + 30) = v17;
        v19 = (unsigned int)(100 * *(_DWORD *)(v18 + 4LL * (int)v17));
        LODWORD(v15) = (2863311531u * (unsigned __int64)(unsigned int)v19) >> 32;
        v20 = (unsigned int)v19 / 6;
      }
      while ( (int)((unsigned int)v19 / 6) <= v9 );
    }
    ThreadUnlock1(v19, v15, v17);
    v23 = v20 - v9;
    gdwLastAniTick = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v9;
    if ( (gdwRITdemonLockState & 1) != 0 )
      v23 = 864000000;
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = InternalSetTimer(
                                                     0,
                                                     WPP_MAIN_CB.AlignmentRequirement,
                                                     v23,
                                                     (unsigned int)zzzAnimateCursor,
                                                     (gdwRITdemonLockState & 1) != 0 ? 0x36EE80 : 0,
                                                     20);
  }
  else
  {
    gdwLastAniTick = 0;
  }
}
