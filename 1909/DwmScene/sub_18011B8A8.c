/*
 * XREFs of sub_18011B8A8 @ 0x18011B8A8
 * Callers:
 *     sub_180119420 @ 0x180119420 (sub_180119420.c)
 *     sub_180119610 @ 0x180119610 (sub_180119610.c)
 *     sub_1801199D0 @ 0x1801199D0 (sub_1801199D0.c)
 *     sub_180119DC0 @ 0x180119DC0 (sub_180119DC0.c)
 *     sub_180119FB0 @ 0x180119FB0 (sub_180119FB0.c)
 *     sub_18011A360 @ 0x18011A360 (sub_18011A360.c)
 *     sub_18011A690 @ 0x18011A690 (sub_18011A690.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 *     sub_18011AB90 @ 0x18011AB90 (sub_18011AB90.c)
 *     sub_18011AD90 @ 0x18011AD90 (sub_18011AD90.c)
 *     sub_18011B290 @ 0x18011B290 (sub_18011B290.c)
 *     sub_18011B440 @ 0x18011B440 (sub_18011B440.c)
 *     sub_18011B6B0 @ 0x18011B6B0 (sub_18011B6B0.c)
 * Callees:
 *     sub_180118538 @ 0x180118538 (sub_180118538.c)
 *     sub_1801185B0 @ 0x1801185B0 (sub_1801185B0.c)
 *     sub_18011C024 @ 0x18011C024 (sub_18011C024.c)
 *     strrchr @ 0x180125BD0 (strrchr.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011B8A8(char *Str, __int64 a2)
{
  char v3; // bl
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  char *v6; // rax
  _BYTE *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 result; // rax
  GUID v19; // [rsp+20h] [rbp-50h] BYREF
  GUID v20; // [rsp+30h] [rbp-40h] BYREF
  GUID pguid; // [rsp+40h] [rbp-30h] BYREF
  GUID v22; // [rsp+50h] [rbp-20h] BYREF

  LOBYTE(a2) = a2 ^ 1;
  v3 = sub_18011C024(Str, a2);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Str[v4] );
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 64LL;
  if ( v4 >= v5 )
    return 0LL;
  v6 = strrchr(Str, 46);
  if ( !v6 )
    return 0LL;
  v7 = v6 + 1;
  o__set_errno(0LL);
  v8 = o_strtol(v7, 0LL, 10LL);
  v12 = v8;
  if ( !v8 && *v7 != 48 && v7[1] )
    return 0LL;
  if ( *(_DWORD *)o__errno(v10, v9, v11) == 34 )
    return 0LL;
  if ( v3 == 1 )
  {
    v15 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v15;
    v14 = v15;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 152) = 64LL;
      *(_QWORD *)&v22.Data1 = 0LL;
      *(_QWORD *)v22.Data4 = 0LL;
      CoCreateGuid(&v22);
      v20 = v22;
      sub_1801185B0(v14, (__int128 *)&v20);
      goto LABEL_19;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v13 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v13;
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 152) = 127LL;
      *(_QWORD *)&pguid.Data1 = 0LL;
      *(_QWORD *)pguid.Data4 = 0LL;
      CoCreateGuid(&pguid);
      v19 = pguid;
      sub_180118538(v14, (__int128 *)&v19);
      goto LABEL_19;
    }
  }
  v14 = 0LL;
LABEL_19:
  if ( v14 )
  {
    v16 = v7 - Str;
    o_strncpy_s(v14, 129LL, Str, v16);
    *(_QWORD *)(v14 + 136) = v16;
    v17 = *(_QWORD *)(v14 + 136);
    result = v14;
    *(_QWORD *)(v14 + 144) = v12 | ((v16 + 2) << 32);
    *(_BYTE *)(v14 + v17) = 0;
    return result;
  }
  return 0LL;
}
