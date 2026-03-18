/*
 * XREFs of xxxIsDragging @ 0x1C0248118
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C022AD70 (NtUserDragDetect.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D4EC (xxxSetCapture.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSleepThread2 @ 0x1C00A4280 (xxxSleepThread2.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxSleepThread @ 0x1C01D70CC (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // r14d
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  BOOL v15; // eax
  int v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h]
  __int64 v19; // [rsp+50h] [rbp-11h] BYREF
  __int64 v20; // [rsp+58h] [rbp-9h]
  __int64 v21; // [rsp+60h] [rbp-1h]
  _QWORD v22[6]; // [rsp+68h] [rbp+7h] BYREF

  memset(v22, 0, sizeof(v22));
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( GetKeyState(1u, v4, v5, v6) >= 0 )
    return 0LL;
  xxxSetCapture(a1);
  v8 = 1;
  v17 = a2;
  v18 = a2;
  v9 = *(_DWORD *)(gpsi + 2168LL);
  v10 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v17) = HIDWORD(a2) - v10;
  HIDWORD(v18) = v10 + HIDWORD(a2);
  LODWORD(v17) = a2 - v9;
  LODWORD(v18) = a2 + v9;
  v11 = 0;
  v19 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v19;
  v20 = a1;
  if ( a1 )
    HMLockObject(a1);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage((int)v22, 0, 512, 526, 1, 0)
           || (unsigned int)xxxInternalGetMessage((int)v22, 0, 35, 35, 1, 0)
           || (unsigned int)xxxInternalGetMessage((int)v22, 0, 256, 265, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) != a1 || LODWORD(v22[1]) == 514 )
        {
          v8 = 0;
        }
        else
        {
          switch ( LODWORD(v22[1]) )
          {
            case 0x23:
              xxxCallHook(2, 0LL, 0LL, 5);
              break;
            case 0x100:
              if ( v22[2] == 27LL )
                goto LABEL_12;
              break;
            case 0x200:
              v15 = PtInRect(&v17, *(_QWORD *)((char *)&v22[4] + 4));
              if ( !v15 )
                v11 = 1;
              v8 = v15 ? v8 : 0;
              break;
          }
        }
        if ( !v8 )
          goto LABEL_12;
      }
      if ( *(_QWORD *)(gptiCurrent + 1392LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 500, 1, 0) )
        goto LABEL_11;
    }
    v16 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 500, 1, 0, (enum SLEEP_STATUS *)&v16) && !v16 );
LABEL_11:
  v11 = 1;
LABEL_12:
  v14 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v14 + 112) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v14, v12, v13);
  return v11;
}
