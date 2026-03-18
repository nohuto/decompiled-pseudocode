/*
 * XREFs of GrePolyTextOutW @ 0x1C00DB94C
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C00DB5B0 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rsi
  int **v9; // rbx
  unsigned int v10; // r8d
  char *v11; // rcx
  __int64 v12; // rbx
  __int64 *v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h]
  _DWORD v16[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]
  char v25; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a3;
  v14 = 0LL;
  v15 = 0LL;
  v7 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  if ( !v14 || (*((_DWORD *)v14 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v7 = 0;
  }
  else
  {
    v21 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v17, (struct XDCOBJ *)&v14, 0) )
    {
      v8 = a2 + 56 * v5;
      if ( a2 < v8 )
      {
        v9 = (int **)(a2 + 48);
        while ( 1 )
        {
          v10 = *((_DWORD *)v9 - 10);
          v11 = &v25;
          if ( ((30 * v10 + 7) & 0xFFFFFFF8) > 0xC0 )
            v11 = 0LL;
          if ( !(unsigned int)GreExtTextOutWLocked(
                                (struct XDCOBJ *)&v14,
                                *((_DWORD *)v9 - 12),
                                *((_DWORD *)v9 - 11),
                                *((_DWORD *)v9 - 6),
                                (struct tagRECT *)((char *)v9 - 20),
                                (unsigned __int16 *)*(v9 - 4),
                                v10,
                                *v9,
                                *(unsigned __int8 *)(v14[10] + 73),
                                v11,
                                a4) )
            break;
          v9 += 7;
          if ( (unsigned __int64)(v9 - 6) >= v8 )
            goto LABEL_10;
        }
        v7 = 0;
      }
    }
    else
    {
      v7 = XDCOBJ::bFullScreen((XDCOBJ *)&v14);
    }
LABEL_10:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
  }
  if ( v14 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v14);
    v16[0] = 0;
    v12 = *v14;
    HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v15), v16);
    if ( v16[0] )
      bDeleteDCInternalEx(v12, 0LL);
  }
  return v7;
}
