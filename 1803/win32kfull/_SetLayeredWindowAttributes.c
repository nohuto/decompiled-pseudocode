/*
 * XREFs of _SetLayeredWindowAttributes @ 0x1C007B700
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C007CBE0 (NtUserSetLayeredWindowAttributes.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x1C007D1C4 (GetRedirectionFlags.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall SetLayeredWindowAttributes(struct tagWND *a1, unsigned int a2, BYTE a3, int a4)
{
  bool v5; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 RedirectionBitmap; // rbx
  __int64 result; // rax
  __int64 v14; // r8
  unsigned int v15; // esi
  unsigned int updated; // edi
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rbx
  struct _BLENDFUNCTION v20; // [rsp+60h] [rbp-9h] BYREF
  struct tagPOINT v21; // [rsp+68h] [rbp-1h] BYREF
  struct tagSIZE v22; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp+Fh] BYREF

  v5 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_DWORD *)(v10 + 232);
    if ( (v11 & 0x40) != 0 )
      *(_DWORD *)(v10 + 232) = v11 & 0xFFFFFFBF;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
  {
    UserSetLastError(87LL, v9);
    return 3221225485LL;
  }
  RedirectionBitmap = GetRedirectionBitmap(a1);
  if ( !RedirectionBitmap || (GetRedirectionFlags(a1) & 1) == 0 )
  {
    result = SetRedirectedWindow(a1, a4 & 0x10 | 1u);
    if ( (int)result < 0 )
      return result;
    v5 = RedirectionBitmap == 0;
  }
  *(_WORD *)&v20.BlendOp = 0;
  v15 = a4 & 0xDFFFFFEF | 0x20000000;
  v20.AlphaFormat = 0;
  v20.SourceConstantAlpha = a3;
  if ( RedirectionBitmap )
  {
    v21 = 0LL;
    v23[0] = 0LL;
    v23[1] = 0LL;
    v17 = GreSelectBitmap(ghdcMem, RedirectionBitmap);
    v18 = (_DWORD *)*((_QWORD *)a1 + 5);
    v19 = v17;
    v22.cx = v18[24] - v18[22];
    v22.cy = v18[25] - v18[23];
    updated = UpdateSprite(
                *(HDEV *)(gpDispInfo + 40LL),
                a1,
                ghdcMem,
                0LL,
                0LL,
                &v22,
                ghdcMem,
                &v21,
                a2,
                &v20,
                v15,
                (struct tagRECT *)((unsigned __int64)v23 & -(__int64)v5));
    GreSelectBitmap(ghdcMem, v19);
  }
  else
  {
    return (unsigned int)UpdateSprite(
                           *(HDEV *)(gpDispInfo + 40LL),
                           a1,
                           v14,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           a2,
                           &v20,
                           v15,
                           0LL);
  }
  return updated;
}
