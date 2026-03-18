/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C002BD00
 * Callers:
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1C0045458 (ComposeWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C008C0D0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  bool v5; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // esi
  unsigned int updated; // edi
  _DWORD *v16; // r8
  struct _BLENDFUNCTION v17; // [rsp+60h] [rbp-9h] BYREF
  struct tagSIZE v18; // [rsp+68h] [rbp-1h] BYREF
  struct tagPOINT v19; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp+Fh] BYREF

  v17 = 0;
  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *((_QWORD *)a1 + 5);
    v10 = *(_DWORD *)(v9 + 232);
    if ( (v10 & 0x40) != 0 )
      *(_DWORD *)(v9 + 232) = v10 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap((__int64)a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags((__int64)a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  v17.SourceConstantAlpha = a3;
  v14 = a4 & 0xDFFFFFEF | 0x20000000;
  if ( RedirectionBitmap )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20[0] = 0LL;
    v20[1] = 0LL;
    GreSelectBitmap(ghdcMem);
    v16 = (_DWORD *)*((_QWORD *)a1 + 5);
    v18.cx = v16[24] - v16[22];
    v18.cy = v16[25] - v16[23];
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                ghdcMem,
                0LL,
                0LL,
                &v18,
                ghdcMem,
                &v19,
                a2,
                &v17,
                v14,
                (struct tagRECT *)((unsigned __int64)v20 & -(__int64)v5));
    GreSelectBitmap(ghdcMem);
  }
  else
  {
    return (unsigned int)UpdateSprite(
                           *(HDEV *)(gpDispInfo + 40LL),
                           a1,
                           v13,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v17,
                           v14,
                           0LL);
  }
  return updated;
}
