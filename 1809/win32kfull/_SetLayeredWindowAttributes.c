/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C0077A14
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0079CD0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C0074038 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  bool v5; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // esi
  unsigned int updated; // edi
  __int64 v19; // rax
  _DWORD *v20; // r8
  __int64 v21; // rbx
  struct _BLENDFUNCTION v22; // [rsp+60h] [rbp-9h] BYREF
  struct tagPOINT v23; // [rsp+68h] [rbp-1h] BYREF
  struct tagSIZE v24; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v25[2]; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v12 = *((_QWORD *)a1 + 5);
    v13 = *(_DWORD *)(v12 + 232);
    if ( (v13 & 0x40) != 0 )
      *(_DWORD *)(v12 + 232) = v13 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL, v9, v10, v11);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags((__int64)a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  *(_WORD *)&v22.BlendOp = 0;
  v17 = a4 & 0xDFFFFFEF | 0x20000000;
  v22.AlphaFormat = 0;
  v22.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v23 = 0LL;
    v25[0] = 0LL;
    v25[1] = 0LL;
    v19 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v20 = (_DWORD *)*((_QWORD *)a1 + 5);
    v21 = v19;
    v24.cx = v20[24] - v20[22];
    v24.cy = v20[25] - v20[23];
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                ghdcMem,
                0LL,
                0LL,
                &v24,
                ghdcMem,
                &v23,
                a2,
                &v22,
                v17,
                (struct tagRECT *)((unsigned __int64)v25 & -(__int64)v5));
    GreSelectBitmap(ghdcMem, v21);
  }
  else
  {
    return (unsigned int)UpdateSprite(
                           *(HDEV *)(gpDispInfo + 40LL),
                           a1,
                           v16,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v22,
                           v17,
                           0LL);
  }
  return updated;
}
