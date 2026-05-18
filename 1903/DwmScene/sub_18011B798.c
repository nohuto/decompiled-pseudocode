/*
 * XREFs of sub_18011B798 @ 0x18011B798
 * Callers:
 *     sub_180119310 @ 0x180119310 (sub_180119310.c)
 *     sub_180119500 @ 0x180119500 (sub_180119500.c)
 *     sub_1801198C0 @ 0x1801198C0 (sub_1801198C0.c)
 *     sub_180119CB0 @ 0x180119CB0 (sub_180119CB0.c)
 *     sub_180119EA0 @ 0x180119EA0 (sub_180119EA0.c)
 *     sub_18011A250 @ 0x18011A250 (sub_18011A250.c)
 *     sub_18011A580 @ 0x18011A580 (sub_18011A580.c)
 *     sub_18011A730 @ 0x18011A730 (sub_18011A730.c)
 *     sub_18011AA80 @ 0x18011AA80 (sub_18011AA80.c)
 *     sub_18011AC80 @ 0x18011AC80 (sub_18011AC80.c)
 *     sub_18011B180 @ 0x18011B180 (sub_18011B180.c)
 *     sub_18011B330 @ 0x18011B330 (sub_18011B330.c)
 *     sub_18011B5A0 @ 0x18011B5A0 (sub_18011B5A0.c)
 * Callees:
 *     sub_180118428 @ 0x180118428 (sub_180118428.c)
 *     sub_1801184A0 @ 0x1801184A0 (sub_1801184A0.c)
 *     sub_18011BF14 @ 0x18011BF14 (sub_18011BF14.c)
 *     strrchr @ 0x180125AC0 (strrchr.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011B798(char *Str, __int64 a2)
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
  v3 = sub_18011BF14(Str, a2);
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
      sub_1801184A0(v14, (__int128 *)&v20);
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
      sub_180118428(v14, (__int128 *)&v19);
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
