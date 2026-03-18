/*
 * XREFs of xxxTranslateMessage @ 0x1C0134F10
 * Callers:
 *     NtUserTranslateMessage @ 0x1C0134E60 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241498 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _PostMessageExtended @ 0x1C01322AC (_PostMessageExtended.c)
 *     ??1CEtwTraceTranslateMessage@@QEAA@XZ @ 0x1C013512C (--1CEtwTraceTranslateMessage@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v5; // edi
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  int v11; // eax
  int v12; // esi
  BOOL v13; // edi
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdi
  _WORD *v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 *v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-64h] BYREF
  _BYTE v30[32]; // [rsp+48h] [rbp-60h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  v5 = a2;
  v6 = 0;
  if ( v4 < 0x100 )
    return 0LL;
  if ( v4 > 0x101 && v4 != 261 )
  {
    if ( v4 == 260 )
    {
      v6 = 1;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  v29 = v4;
  LOBYTE(v7) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 1248);
  EtwTraceBeginTranslateMessage(v7, v29);
  v8 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v8 && ((v26 = *(__int64 **)(*(_QWORD *)v8 + 16LL)) != 0LL ? (v27 = *v26) : (v27 = 0LL), v27 == *(_QWORD *)a1) )
    v9 = v5 | 1;
  else
    v9 = v5 & 0xFFFFFFFE;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v10),
          *(_QWORD *)(gptiCurrent + 424LL) + 236LL,
          v30,
          16,
          v9,
          &v28,
          0LL);
  v12 = v11;
  if ( v11 )
  {
    v15 = 4 * v6;
    if ( v11 <= 0 )
    {
      v12 = -v11;
      v16 = 259;
    }
    else
    {
      v16 = 258;
    }
    v17 = v16 + v15;
    HIDWORD(v18) = HIDWORD(v10);
    v19 = v10 | v28 & 0x4000000 | 0x80000000LL;
    if ( (v28 & 0x8000) == 0 )
    {
      LODWORD(v18) = v10 & 0x7FFFFFFF | v28 & 0x4000000;
      v19 = v18;
    }
    v20 = ValidateHwnd(*(_QWORD *)a1);
    if ( v20 )
    {
      v21 = v30;
      while ( v12 > 0 )
      {
        v22 = 0x2000000LL;
        if ( v12 <= 1 )
          v22 = 0LL;
        v23 = PostMessageExtended(v20, v17, (unsigned __int16)*v21, (struct _LARGE_STRING *)(v19 | v22), 0LL);
        v24 = v23;
        *v21++ = 0;
        if ( v23 >= (unsigned __int64)MmSystemRangeStart
          && *(_DWORD *)(v23 + 24) == 258
          && (*(_DWORD *)(gptiCurrent + 1344LL) & 1) != 0 )
        {
          v25 = *(_DWORD *)(v23 + 100) | 0x4000;
          *(_DWORD *)(v24 + 100) = v25;
          if ( (v28 & 0x8000000) != 0 )
            *(_DWORD *)(v24 + 100) = v25 | 0x8000;
        }
        --v12;
      }
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = (v9 & 2) == 0;
  }
  CEtwTraceTranslateMessage::~CEtwTraceTranslateMessage((CEtwTraceTranslateMessage *)&v29);
  return v13;
}
