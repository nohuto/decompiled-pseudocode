/*
 * XREFs of RtlpCreateUserProcess @ 0x1409C5F0C
 * Callers:
 *     RtlCreateUserProcessEx @ 0x1409C5E8C (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x1401B99D0 (ZwCreateUserProcess.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, int a5, char *a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  int v25; // [rsp+B8h] [rbp-48h]
  __int128 v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[13]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+140h] [rbp+40h]
  char *v30; // [rsp+148h] [rbp+48h]
  _QWORD v31[42]; // [rsp+150h] [rbp+50h]

  memset(a6, 0, 0x68uLL);
  v23 = 0LL;
  v24 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v22 = 48;
  v17 = 48;
  *(_DWORD *)a6 = 104;
  v25 = 512;
  v26 = 0LL;
  v20 = 512;
  v21 = 0LL;
  memset(v27, 0, 0x58uLL);
  LOBYTE(v27[2]) |= 4u;
  v31[0] = 0LL;
  v9 = 2;
  v31[4] = 0LL;
  v30 = a6 + 24;
  v31[3] = a6 + 40;
  v27[0] = 88LL;
  v28 = 65539LL;
  v29 = 16LL;
  v31[1] = 6LL;
  v31[2] = 64LL;
  if ( a1 )
  {
    v10 = *a1;
    v31[8] = 0LL;
    v31[6] = v10;
    v31[7] = *((_QWORD *)a1 + 1);
    v31[5] = 131077LL;
    v31[9] = 131082LL;
    v31[12] = 0LL;
    v9 = 4;
    v15 = v15 & 0xFFFFFFE0 | 2;
    v31[11] = &v15;
    v31[10] = 8LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v11 = 4LL * v9;
    v31[v11] = 0LL;
    ++v9;
    *(__int64 *)((char *)&v28 + v11 * 8) = 393233LL;
    *(__int64 *)((char *)&v29 + v11 * 8) = 1LL;
    v31[v11 - 1] = 97LL;
  }
  if ( a2 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    if ( v12 < 0 )
    {
      *(_DWORD *)(a2 + 8) = v12 & 0x7FFFFFFF;
      v14 = 4LL * v9;
      v31[v14] = 0LL;
      ++v9;
      *(__int64 *)((char *)&v28 + v14 * 8) = 131090LL;
      *(__int64 *)((char *)&v29 + v14 * 8) = 8LL;
      v31[v14 - 1] = &v16;
    }
  }
  v27[12] = 32LL * v9 + 8;
  return ZwCreateUserProcess((__int64)(a6 + 8), (__int64)(a6 + 16), 0x2000000LL);
}
