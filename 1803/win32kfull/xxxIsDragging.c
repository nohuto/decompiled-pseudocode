/*
 * XREFs of xxxIsDragging @ 0x1C0135D78
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01ECCA0 (NtUserDragDetect.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxSleepThread @ 0x1C01A246C (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-29h] BYREF
  __int64 v14; // [rsp+40h] [rbp-21h] BYREF
  __int64 v15; // [rsp+48h] [rbp-19h]
  _QWORD v16[6]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v17[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (GetKeyState(1u, v4) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v5 = 1;
  v14 = a2;
  v15 = a2;
  v6 = *(_DWORD *)(gpsi + 2168LL);
  v7 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v14) = HIDWORD(a2) - v7;
  HIDWORD(v15) = v7 + HIDWORD(a2);
  LODWORD(v14) = a2 - v6;
  LODWORD(v15) = v6 + a2;
  v8 = 0;
  v17[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v17;
  v17[1] = a1;
  if ( a1 )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage((int)v16, 0, 512, 526, 1, 0)
           || (unsigned int)xxxInternalGetMessage((int)v16, 0, 35, 35, 1, 0)
           || (unsigned int)xxxInternalGetMessage((int)v16, 0, 256, 265, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 || LODWORD(v16[1]) == 514 )
          goto LABEL_7;
        if ( LODWORD(v16[1]) == 35 )
        {
          xxxCallHook(2, 0LL, 0LL, 5);
          goto LABEL_8;
        }
        if ( LODWORD(v16[1]) != 256 )
        {
          if ( LODWORD(v16[1]) != 512 || PtInRect(&v14, *(_QWORD *)((char *)&v16[4] + 4)) )
            goto LABEL_8;
          v8 = 1;
LABEL_7:
          v5 = 0;
          goto LABEL_8;
        }
        if ( v16[2] == 27LL )
          goto LABEL_9;
LABEL_8:
        if ( !v5 )
          goto LABEL_9;
      }
      if ( *(_QWORD *)(gptiCurrent + 1376LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL) )
        goto LABEL_19;
    }
    v13 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v13) && !v13 );
LABEL_19:
  v8 = 1;
LABEL_9:
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v11 + 104) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v11, v9, v10);
  return v8;
}
