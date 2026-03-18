/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C006CF78
 * Callers:
 *     NtUserGetIconInfo @ 0x1C006CB50 (NtUserGetIconInfo.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0151568 (-GetCursorHeight@@YAHXZ.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v8; // rdi
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 DIBitmapReal; // rax
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rcx
  struct _UNICODE_STRING *v16; // rdx
  struct tagCURSOR **v18; // rdi
  int v19; // r9d
  int v20; // r10d
  int v21; // [rsp+70h] [rbp-B8h] BYREF
  int v22[2]; // [rsp+78h] [rbp-B0h] BYREF
  BOOL v23; // [rsp+80h] [rbp-A8h]
  __int64 v24; // [rsp+88h] [rbp-A0h]
  __int64 v25; // [rsp+90h] [rbp-98h]
  __int64 v26; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  unsigned int *v28; // [rsp+A8h] [rbp-80h]
  _QWORD v29[6]; // [rsp+B8h] [rbp-70h] BYREF

  DestinationString = a4;
  v8 = a1;
  v28 = a5;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v18 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v18 )
      return 0;
    v8 = *v18;
  }
  GetVirtualizedCursorSize(v8, &v21, v22);
  v23 = v21 != *((_DWORD *)v8 + 35);
  if ( a6 || !*((_QWORD *)v8 + 12) )
  {
    v9 = v22[0];
    v10 = v22[0];
  }
  else
  {
    v9 = v22[0];
    v10 = v22[0] / 2;
  }
  *(_QWORD *)v22 = GreCreateBitmap((unsigned int)v21, v10, 1LL, 1LL, 0LL);
  if ( !*(_QWORD *)v22 )
    return 0;
  v11 = 0LL;
  v24 = 0LL;
  if ( *((_QWORD *)v8 + 12) )
  {
    if ( *((_DWORD *)v8 + 34) == 32 )
    {
      memset(v29, 0, 0x2CuLL);
      LODWORD(v29[0]) = 40;
      HIDWORD(v29[0]) = v21;
      LODWORD(v29[1]) = v9 / 2;
      *(_QWORD *)((char *)&v29[1] + 4) = 2097153LL;
      HIDWORD(v29[2]) = 0;
      v29[4] = 0LL;
      DIBitmapReal = GreCreateDIBitmapReal(
                       *(HDC *)(gpDispInfo + 64LL),
                       v9 % 2,
                       0LL,
                       (unsigned int *)v29,
                       0,
                       0x2Cu,
                       0,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 0LL, 0LL);
    }
    v11 = DIBitmapReal;
    v24 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(*(_QWORD *)v22);
      return 0;
    }
  }
  v25 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v8 + 11));
  v26 = GreSelectBitmap(ghdcMem, *(_QWORD *)v22);
  v13 = *((_QWORD *)v8 + 12);
  if ( v23 )
  {
    if ( !v13 || a6 )
      v19 = *((_DWORD *)v8 + 36);
    else
      v19 = *((_DWORD *)v8 + 36) >> 1;
    if ( !v13 || a6 )
      v20 = v9;
    else
      v20 = v9 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v21, v20, ghdcMem2, 0, 0, *((_DWORD *)v8 + 35), v19, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( !v13 || a6 )
      v14 = v9;
    else
      v14 = v9 / 2;
    NtGdiBitBltInternal(ghdcMem, 0, 0, v21, v14, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v11 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v8 + 12));
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
        *((_DWORD *)v8 + 35),
        *((_DWORD *)v8 + 36) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0, 0, v21, v9 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v25);
  GreSelectBitmap(ghdcMem, v26);
  *(_DWORD *)a2 = *((_WORD *)v8 + 37) == 3;
  *((_DWORD *)a2 + 1) = *((__int16 *)v8 + 42);
  *((_DWORD *)a2 + 2) = *((__int16 *)v8 + 43);
  *((_QWORD *)a2 + 2) = *(_QWORD *)v22;
  *((_QWORD *)a2 + 3) = v11;
  if ( a3 )
  {
    v15 = *((unsigned __int16 *)v8 + 36);
    if ( (_WORD)v15 )
      a3->Length = UserGetAtomName(v15, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( DestinationString )
  {
    v16 = (struct _UNICODE_STRING *)((char *)v8 + 56);
    if ( (*((_QWORD *)v8 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, v16);
    else
      *DestinationString = *v16;
  }
  if ( v28 )
    *v28 = *((_DWORD *)v8 + 34);
  return 1;
}
