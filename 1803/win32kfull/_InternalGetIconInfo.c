/*
 * XREFs of _InternalGetIconInfo @ 0x1C0015C34
 * Callers:
 *     NtUserGetIconInfo @ 0x1C0015860 (NtUserGetIconInfo.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C01FE9B0 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     _GetIconSize @ 0x1C0016068 (_GetIconSize.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall InternalGetIconInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        _DWORD *a5,
        int a6)
{
  __int64 v8; // rdi
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 DIBitmapReal; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rcx
  struct _UNICODE_STRING *v16; // rdx
  __int64 *v18; // rdi
  int v19; // r9d
  int v20; // r10d
  int v21; // [rsp+70h] [rbp-B8h] BYREF
  __int64 Bitmap; // [rsp+78h] [rbp-B0h] BYREF
  BOOL v23; // [rsp+80h] [rbp-A8h]
  __int64 v24; // [rsp+88h] [rbp-A0h]
  __int64 v25; // [rsp+90h] [rbp-98h]
  __int64 v26; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  _DWORD *v28; // [rsp+A8h] [rbp-80h]
  _QWORD v29[6]; // [rsp+B8h] [rbp-70h] BYREF

  DestinationString = a4;
  v8 = a1;
  v28 = a5;
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v18 = *(__int64 **)(a1 + 96);
    if ( !v18 )
      return 0LL;
    v8 = *v18;
  }
  GetIconSize(v8, &v21, &Bitmap);
  v23 = v21 != *(_DWORD *)(v8 + 140);
  if ( a6 || !*(_QWORD *)(v8 + 96) )
  {
    v9 = Bitmap;
    v10 = Bitmap;
  }
  else
  {
    v9 = Bitmap;
    v10 = (int)Bitmap / 2;
  }
  Bitmap = GreCreateBitmap((unsigned int)v21, v10, 1LL, 1LL, 0LL);
  if ( !Bitmap )
    return 0LL;
  v11 = 0LL;
  v24 = 0LL;
  if ( *(_QWORD *)(v8 + 96) )
  {
    if ( *(_DWORD *)(v8 + 136) == 32 )
    {
      memset(v29, 0, 0x2CuLL);
      LODWORD(v29[0]) = 40;
      HIDWORD(v29[0]) = v21;
      LODWORD(v29[1]) = v9 / 2;
      *(_QWORD *)((char *)&v29[1] + 4) = 2097153LL;
      HIDWORD(v29[2]) = 0;
      v29[4] = 0LL;
      DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 64LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 0LL, 0LL);
    }
    v11 = DIBitmapReal;
    v24 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0LL;
    }
  }
  v25 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 88));
  v26 = GreSelectBitmap(ghdcMem, Bitmap);
  v13 = *(_QWORD *)(v8 + 96);
  if ( v23 )
  {
    if ( !v13 || a6 )
      v19 = *(_DWORD *)(v8 + 144);
    else
      v19 = *(_DWORD *)(v8 + 144) >> 1;
    if ( !v13 || a6 )
      v20 = v9;
    else
      v20 = v9 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v21, v20, ghdcMem2, 0, 0, *(_DWORD *)(v8 + 140), v19, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( !v13 || a6 )
      v14 = v9;
    else
      v14 = v9 / 2;
    NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, (unsigned int)v21, v14, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v11 )
  {
    GreSelectBitmap(ghdcMem2, *(_QWORD *)(v8 + 96));
    GreSelectBitmap(ghdcMem, v11);
    if ( v23 )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v21,
        v9 / 2,
        ghdcMem2,
        0,
        0,
        *(_DWORD *)(v8 + 140),
        *(_DWORD *)(v8 + 144) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, (unsigned int)v21, v9 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v25);
  GreSelectBitmap(ghdcMem, v26);
  *(_DWORD *)a2 = *(_WORD *)(v8 + 74) == 3;
  *(_DWORD *)(a2 + 4) = *(__int16 *)(v8 + 84);
  *(_DWORD *)(a2 + 8) = *(__int16 *)(v8 + 86);
  *(_QWORD *)(a2 + 16) = Bitmap;
  *(_QWORD *)(a2 + 24) = v11;
  if ( a3 )
  {
    v15 = *(unsigned __int16 *)(v8 + 72);
    if ( (_WORD)v15 )
      *(_WORD *)a3 = UserGetAtomName(v15, *(_QWORD *)(a3 + 8), *(unsigned __int16 *)(a3 + 2) >> 1);
    else
      *(_WORD *)a3 = 0;
  }
  if ( DestinationString )
  {
    v16 = (struct _UNICODE_STRING *)(v8 + 56);
    if ( (*(_QWORD *)(v8 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, v16);
    else
      *DestinationString = *v16;
  }
  if ( v28 )
    *v28 = *(_DWORD *)(v8 + 136);
  return 1LL;
}
