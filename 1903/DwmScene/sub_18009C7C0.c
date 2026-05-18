/*
 * XREFs of sub_18009C7C0 @ 0x18009C7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180099840 @ 0x180099840 (sub_180099840.c)
 *     sub_1800F0ED4 @ 0x1800F0ED4 (sub_1800F0ED4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18009C7C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rax
  int v6; // ecx
  __int64 result; // rax
  __int64 v8; // rcx
  int *v9; // rax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h]
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+50h] [rbp-B8h]
  __int128 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+88h] [rbp-80h] BYREF
  int v18; // [rsp+90h] [rbp-78h] BYREF
  __int64 v19; // [rsp+94h] [rbp-74h]
  int v20; // [rsp+9Ch] [rbp-6Ch]

  v4 = *a4;
  v16 = a1;
  v6 = *(_DWORD *)(v4 + 440);
  result = 4259840LL;
  if ( (v6 & 0x410000) == 0x410000 )
  {
    v8 = 8LL;
    v9 = &v18;
    do
    {
      *((_QWORD *)v9 - 1) = 0LL;
      *v9 = 0;
      v9 += 3;
      --v8;
    }
    while ( v8 );
    sub_180099840((unsigned __int64 *)(a1 + 88), &v17);
    v14 = xmmword_1801EEF80;
    LODWORD(v11) = v20;
    v15 = xmmword_1801EEF80;
    v13 = v18;
    v10 = v19;
    v12 = v17;
    sub_1800F0ED4(a1, (unsigned int)&v12, (unsigned int)&v10, (unsigned int)&v15, (__int64)&v14, 1077936128);
  }
  return result;
}
