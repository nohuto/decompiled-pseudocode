/*
 * XREFs of ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00250E0
 * Callers:
 *     NtUserGetIconInfo @ 0x1C0024CC0 (NtUserGetIconInfo.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015C85C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023EFC0 (-GetCursorHeight@@YAHXZ.c)
 * Callees:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025590 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

char __fastcall _InternalGetIconInfo(
        struct tagCURSOR *a1,
        struct _ICONINFO *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        unsigned int *a5,
        bool a6)
{
  struct tagCURSOR *v7; // rdi
  unsigned int v8; // r15d
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  __int64 DIBitmapReal; // rax
  int v13; // r8d
  struct _ICONINFO *v14; // rsi
  __int64 v15; // rcx
  struct tagCURSOR **v17; // rdi
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // r10d
  INT b; // [rsp+70h] [rbp-B8h] BYREF
  int v22[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  __int64 v24; // [rsp+88h] [rbp-A0h]
  __int64 v25; // [rsp+90h] [rbp-98h]
  struct _ICONINFO *v26; // [rsp+98h] [rbp-90h]
  PUNICODE_STRING DestinationString; // [rsp+A0h] [rbp-88h]
  unsigned int *v28; // [rsp+A8h] [rbp-80h]
  int v29; // [rsp+B8h] [rbp-70h]
  unsigned int v30; // [rsp+BCh] [rbp-6Ch]
  int v31; // [rsp+C0h] [rbp-68h]
  __int64 v32; // [rsp+C4h] [rbp-64h]
  int v33; // [rsp+CCh] [rbp-5Ch]
  __int64 v34; // [rsp+D0h] [rbp-58h]
  int v35; // [rsp+D8h] [rbp-50h]
  __int64 v36; // [rsp+DCh] [rbp-4Ch]

  DestinationString = a4;
  v26 = a2;
  v7 = a1;
  v28 = a5;
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    v17 = (struct tagCURSOR **)*((_QWORD *)a1 + 12);
    if ( !v17 )
      return 0;
    v7 = *v17;
  }
  GetVirtualizedCursorSize(v7, &b, v22);
  v8 = b;
  b = b != *((_DWORD *)v7 + 35);
  if ( a6 || !*((_QWORD *)v7 + 12) )
  {
    v9 = v22[0];
    v10 = v22[0];
  }
  else
  {
    v9 = v22[0];
    v10 = v22[0] / 2;
  }
  *(_QWORD *)v22 = GreCreateBitmap(v8, v10, 1LL, 1LL, 0LL);
  if ( !*(_QWORD *)v22 )
    return 0;
  v11 = 0LL;
  v23 = 0LL;
  if ( *((_QWORD *)v7 + 12) )
  {
    if ( *((_DWORD *)v7 + 34) == 32 )
    {
      v34 = 0LL;
      v36 = 0LL;
      v29 = 40;
      v30 = v8;
      v31 = v9 / 2;
      v32 = 2097153LL;
      v33 = 0;
      v35 = 0;
      DIBitmapReal = GreCreateDIBitmapReal(*(HDC *)(gpDispInfo + 64LL), 0, 44, 0, 0LL, 0, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 64LL), 0LL, 0LL);
    }
    v11 = DIBitmapReal;
    v23 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(*(_QWORD *)v22);
      return 0;
    }
  }
  v24 = GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 11));
  v25 = GreSelectBitmap(ghdcMem, *(_QWORD *)v22);
  if ( b )
  {
    v18 = *((_QWORD *)v7 + 12);
    if ( !v18 || a6 )
      v19 = *((_DWORD *)v7 + 36);
    else
      v19 = *((_DWORD *)v7 + 36) >> 1;
    if ( !v18 || a6 )
      v20 = v9;
    else
      v20 = v9 / 2;
    GreStretchBltInternal(ghdcMem, 0, 0, v20, ghdcMem2, 0, 0, *((_DWORD *)v7 + 35), v19, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( a6 || !*((_QWORD *)v7 + 12) )
      v13 = v9;
    else
      v13 = v9 / 2;
    NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v8, v13, ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v11 )
  {
    GreSelectBitmap(ghdcMem2, *((_QWORD *)v7 + 12));
    GreSelectBitmap(ghdcMem, v11);
    if ( b )
      GreStretchBltInternal(
        ghdcMem,
        0,
        0,
        v9 / 2,
        ghdcMem2,
        0,
        0,
        *((_DWORD *)v7 + 35),
        *((_DWORD *)v7 + 36) >> 1,
        13369376,
        0,
        0);
    else
      NtGdiBitBltInternal(ghdcMem, 0LL, 0LL, v8, v9 / 2, ghdcMem2, 0, 0, 13369376, 0, 0);
  }
  GreSelectBitmap(ghdcMem2, v24);
  GreSelectBitmap(ghdcMem, v25);
  v14 = v26;
  *(_DWORD *)v26 = *((_WORD *)v7 + 37) == 3;
  *((_DWORD *)v14 + 1) = EngMulDiv(*((__int16 *)v7 + 42), v8, *((_DWORD *)v7 + 35));
  *((_DWORD *)v14 + 2) = EngMulDiv(*((__int16 *)v7 + 43), v8, *((_DWORD *)v7 + 35));
  *((_QWORD *)v14 + 2) = *(_QWORD *)v22;
  *((_QWORD *)v14 + 3) = v11;
  if ( a3 )
  {
    v15 = *((unsigned __int16 *)v7 + 36);
    if ( (_WORD)v15 )
      a3->Length = UserGetAtomName(v15, a3->Buffer, a3->MaximumLength >> 1);
    else
      a3->Length = 0;
  }
  if ( DestinationString )
  {
    if ( (*((_QWORD *)v7 + 8) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)((char *)v7 + 56));
    else
      *DestinationString = *(PUNICODE_STRING)((char *)v7 + 56);
  }
  if ( v28 )
    *v28 = *((_DWORD *)v7 + 34);
  return 1;
}
