/*
 * XREFs of xxxIsDragging @ 0x1C0157238
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C0212FC0 (NtUserDragDetect.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0030BEC (xxxSleepThread2.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxSleepThread @ 0x1C01C3D7C (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r14d
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-19h]
  _QWORD v17[6]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v18[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v17, 0, sizeof(v17));
  if ( GetKeyState(1u, v4, v5, v6) >= 0 )
    return 0LL;
  xxxSetCapture(a1);
  v7 = 1;
  v15 = a2;
  v16 = a2;
  v8 = *(_DWORD *)(gpsi + 2168LL);
  v9 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v15) = HIDWORD(a2) - v9;
  HIDWORD(v16) = v9 + HIDWORD(a2);
  LODWORD(v15) = a2 - v8;
  LODWORD(v16) = a2 + v8;
  v10 = 0;
  v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v18;
  v18[1] = a1;
  if ( a1 )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage((__int64)v17, 0LL, 0x200u, 0x20Eu, 1, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v17, 0LL, 0x23u, 0x23u, 1, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v17, 0LL, 0x100u, 0x109u, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 || LODWORD(v17[1]) == 514 )
          goto LABEL_7;
        if ( LODWORD(v17[1]) == 35 )
        {
          xxxCallHook(2, 0LL, 0LL, 5);
          goto LABEL_8;
        }
        if ( LODWORD(v17[1]) != 256 )
        {
          if ( LODWORD(v17[1]) != 512 || PtInRect(&v15, *(_QWORD *)((char *)&v17[4] + 4)) )
            goto LABEL_8;
          v10 = 1;
LABEL_7:
          v7 = 0;
          goto LABEL_8;
        }
        if ( v17[2] == 27LL )
          goto LABEL_9;
LABEL_8:
        if ( !v7 )
          goto LABEL_9;
      }
      if ( *(_QWORD *)(gptiCurrent + 1368LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL, 0LL) )
        goto LABEL_19;
    }
    v14 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v14) && !v14 );
LABEL_19:
  v10 = 1;
LABEL_9:
  v12 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v12 + 104) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v12, v11);
  return v10;
}
