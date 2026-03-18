/*
 * XREFs of zzzCalcStartCursorHide @ 0x1C001DF00
 * Callers:
 *     zzzWakeInputIdle @ 0x1C000DC44 (zzzWakeInputIdle.c)
 *     xxxHungAppDemon @ 0x1C001DAC0 (xxxHungAppDemon.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxGetInputEvent @ 0x1C003B780 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     zzzShowStartGlass @ 0x1C01A2490 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 */

__int64 __fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  struct _W32PROCESS **v3; // r9
  struct _W32PROCESS *v4; // rcx
  _DWORD *v6; // r11
  unsigned int v7; // r10d
  struct _W32PROCESS **v8; // rbx
  struct _W32PROCESS *i; // rax

  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = gpwpCalcFirst; i; i = (struct _W32PROCESS *)*((_QWORD *)i + 4) )
      {
        if ( i == (struct _W32PROCESS *)a1 )
          goto LABEL_19;
      }
      *(_QWORD *)(a1 + 32) = gpwpCalcFirst;
      gpwpCalcFirst = (struct _W32PROCESS *)a1;
    }
LABEL_19:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v2 + a2;
  }
  gtimeStartCursorHide = 0;
  v3 = &gpwpCalcFirst;
  v4 = gpwpCalcFirst;
  if ( gpwpCalcFirst )
  {
    while ( 1 )
    {
      v6 = (_DWORD *)((char *)v4 + 12);
      a2 = *((unsigned int *)v4 + 3);
      if ( (*((_DWORD *)v4 + 3) & 6) != 4 )
        break;
      v7 = *((_DWORD *)v4 + 6);
      if ( gtimeStartCursorHide < v7 )
        gtimeStartCursorHide = *((_DWORD *)v4 + 6);
      v8 = (struct _W32PROCESS **)((char *)v4 + 32);
      v4 = (struct _W32PROCESS *)*((_QWORD *)v4 + 4);
      if ( (int)(v2 - v7) > 0 )
      {
        a2 = (unsigned int)a2 & 0xFFFFFFFB;
        *v6 = a2;
        goto LABEL_11;
      }
      v3 = v8;
LABEL_12:
      if ( !v4 )
      {
        if ( gtimeStartCursorHide > (unsigned int)v2 )
          return zzzUpdateCursorImage(v4, a2, v2, v3);
        goto LABEL_3;
      }
    }
    v4 = (struct _W32PROCESS *)*((_QWORD *)v4 + 4);
LABEL_11:
    *v3 = v4;
    goto LABEL_12;
  }
LABEL_3:
  gtimeStartCursorHide = 0;
  return zzzUpdateCursorImage(v4, a2, v2, v3);
}
