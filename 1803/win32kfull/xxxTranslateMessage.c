/*
 * XREFs of xxxTranslateMessage @ 0x1C00F4EDC
 * Callers:
 *     NtUserTranslateMessage @ 0x1C00F4E50 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _PostMessageExtended @ 0x1C003D9F8 (_PostMessageExtended.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C00F50C4 (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  int v4; // ebx
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // rsi
  BOOL v12; // ebx
  int v14; // eax
  unsigned int v15; // r12d
  struct tagWND *v16; // rbp
  _WORD *v17; // rbx
  __int64 v18; // r9
  struct tagQMSG *v19; // rax
  struct tagQMSG *v20; // rdx
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v26[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v5 = 0;
  if ( v3 < 0x100 )
    return 0LL;
  if ( v3 > 0x101 && v3 != 261 )
  {
    if ( v3 == 260 )
    {
      v5 = 1;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v25 = v3;
  LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 1216);
  EtwTraceBeginTranslateMessage(v6, v25);
  v7 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v7 && ((v22 = *(__int64 **)(*(_QWORD *)v7 + 16LL)) != 0LL ? (v23 = *v22) : (v23 = 0LL), v23 == *(_QWORD *)a1) )
    v8 = v4 | 1;
  else
    v8 = v4 & 0xFFFFFFFE;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v9),
          *(_QWORD *)(gptiCurrent + 424LL) + 228LL,
          v26,
          16,
          v8,
          &v24,
          0LL);
  v11 = v24 & 0x4000000 | v9;
  if ( v10 )
  {
    if ( v10 <= 0 )
    {
      v10 = -v10;
      v14 = 259;
    }
    else
    {
      v14 = 258;
    }
    v15 = v14 + 4 * v5;
    if ( (v24 & 0x8000) != 0 )
      v11 |= 0x80000000uLL;
    else
      LODWORD(v11) = v11 & 0x7FFFFFFF;
    v16 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( v16 )
    {
      v17 = v26;
      while ( v10 > 0 )
      {
        v18 = 0x2000000LL;
        if ( v10 <= 1 )
          v18 = 0LL;
        v19 = PostMessageExtended(v16, v15, (unsigned __int16)*v17, v11 | v18, 0LL);
        v20 = v19;
        *v17++ = 0;
        if ( v19 >= MmSystemRangeStart && *((_DWORD *)v19 + 6) == 258 && (*(_DWORD *)(gptiCurrent + 1312LL) & 1) != 0 )
        {
          v21 = *((_DWORD *)v19 + 25) | 0x4000;
          *((_DWORD *)v20 + 25) = v21;
          if ( (v24 & 0x8000000) != 0 )
            *((_DWORD *)v20 + 25) = v21 | 0x8000;
        }
        --v10;
      }
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v12 = (v8 & 2) == 0;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v25);
  return v12;
}
