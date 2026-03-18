/*
 * XREFs of xxxTranslateMessage @ 0x1C0110150
 * Callers:
 *     NtUserTranslateMessage @ 0x1C01100B0 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxHandleMenuMessages @ 0x1C0208A7C (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C002663C (_PostMessageExtended.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C011036C (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // esi
  BOOL v12; // edi
  int v14; // ebp
  int v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // r15
  struct tagWND *v19; // rdi
  _WORD *v20; // rbx
  __int64 v21; // r9
  struct tagQMSG *v22; // rax
  struct tagQMSG *v23; // rdx
  int v24; // eax
  __int64 *v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v29[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v5 = 0;
  if ( v3 < 0x100 )
    return 0LL;
  if ( v3 <= 0x101 )
    goto LABEL_3;
  if ( v3 == 260 )
  {
    v5 = 1;
  }
  else if ( v3 != 261 )
  {
    return 0LL;
  }
LABEL_3:
  v28 = v3;
  LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 1224);
  EtwTraceBeginTranslateMessage(v6, v28);
  v7 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v7 && ((v25 = *(__int64 **)(*(_QWORD *)v7 + 16LL)) != 0LL ? (v26 = *v25) : (v26 = 0LL), v26 == *(_QWORD *)a1) )
    v8 = v4 | 1;
  else
    v8 = v4 & 0xFFFFFFFE;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v9),
          *(_QWORD *)(gptiCurrent + 432LL) + 228LL,
          v29,
          16,
          v8,
          &v27,
          0LL);
  v11 = v10;
  if ( v10 )
  {
    v14 = 4 * v5;
    if ( v10 <= 0 )
    {
      v11 = -v10;
      v15 = 259;
    }
    else
    {
      v15 = 258;
    }
    v16 = v15 + v14;
    HIDWORD(v17) = HIDWORD(v9);
    v18 = v9 | v27 & 0x4000000 | 0x80000000LL;
    if ( (v27 & 0x8000) == 0 )
    {
      LODWORD(v17) = v9 & 0x7FFFFFFF | v27 & 0x4000000;
      v18 = v17;
    }
    v19 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( v19 )
    {
      v20 = v29;
      while ( v11 > 0 )
      {
        v21 = 0x2000000LL;
        if ( v11 <= 1 )
          v21 = 0LL;
        v22 = PostMessageExtended(v19, v16, (unsigned __int16)*v20, v18 | v21, 0LL);
        v23 = v22;
        *v20++ = 0;
        if ( v22 >= MmSystemRangeStart && *((_DWORD *)v22 + 6) == 258 && (*(_DWORD *)(gptiCurrent + 1320LL) & 1) != 0 )
        {
          v24 = *((_DWORD *)v22 + 25) | 0x4000;
          *((_DWORD *)v23 + 25) = v24;
          if ( (v27 & 0x8000000) != 0 )
            *((_DWORD *)v23 + 25) = v24 | 0x8000;
        }
        --v11;
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
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v28);
  return v12;
}
