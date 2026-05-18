/*
 * XREFs of sub_180119C40 @ 0x180119C40
 * Callers:
 *     sub_1801199D0 @ 0x1801199D0 (sub_1801199D0.c)
 *     sub_18011A360 @ 0x18011A360 (sub_18011A360.c)
 *     sub_18011AB90 @ 0x18011AB90 (sub_18011AB90.c)
 *     sub_18011B6B0 @ 0x18011B6B0 (sub_18011B6B0.c)
 * Callees:
 *     sub_180118538 @ 0x180118538 (sub_180118538.c)
 *     sub_1801185B0 @ 0x1801185B0 (sub_1801185B0.c)
 *     sub_18011C024 @ 0x18011C024 (sub_18011C024.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180119C40(__int64 a1, __int64 a2)
{
  char v3; // dl
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 result; // rax
  GUID v10; // [rsp+20h] [rbp-50h] BYREF
  GUID v11; // [rsp+30h] [rbp-40h] BYREF
  GUID pguid; // [rsp+40h] [rbp-30h] BYREF
  GUID v13; // [rsp+50h] [rbp-20h] BYREF

  LOBYTE(a2) = a2 ^ 1;
  v3 = sub_18011C024(a1, a2);
  if ( !v3 )
    return 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a1 + v4) );
  v5 = 129LL;
  if ( v3 == 1 )
    v5 = 64LL;
  if ( v4 + 3 > v5 )
    return 0LL;
  if ( v3 == 1 )
  {
    v8 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v8;
    v7 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 152) = 64LL;
      *(_QWORD *)&v13.Data1 = 0LL;
      *(_QWORD *)v13.Data4 = 0LL;
      CoCreateGuid(&v13);
      v11 = v13;
      sub_1801185B0(v7, (__int128 *)&v11);
      goto LABEL_14;
    }
  }
  else
  {
    if ( v3 != 2 )
      return 0LL;
    v6 = o__aligned_malloc(160LL, 8LL);
    *(_QWORD *)&pguid.Data1 = v6;
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 152) = 127LL;
      *(_QWORD *)&pguid.Data1 = 0LL;
      *(_QWORD *)pguid.Data4 = 0LL;
      CoCreateGuid(&pguid);
      v10 = pguid;
      sub_180118538(v7, (__int128 *)&v10);
      goto LABEL_14;
    }
  }
  v7 = 0LL;
LABEL_14:
  if ( v7 )
  {
    o_strncpy_s(v7, 129LL, a1, v4);
    *(_BYTE *)(v7 + v4) = 46;
    *(_QWORD *)(v7 + 136) = v4 + 1;
    result = v7;
    *(_QWORD *)(v7 + 144) = (v4 + 3) << 32;
    *(_BYTE *)(v7 + *(_QWORD *)(v7 + 136)) = 0;
    return result;
  }
  return 0LL;
}
