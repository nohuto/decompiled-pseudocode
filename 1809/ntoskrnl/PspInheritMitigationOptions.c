/*
 * XREFs of PspInheritMitigationOptions @ 0x14064EE78
 * Callers:
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PspInheritMitigationOptions(__int128 *a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int v6; // r10d
  unsigned __int64 v7; // r9
  char v8; // r8
  __int64 v9; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-48h]
  __int128 v13; // [rsp+10h] [rbp-38h]
  __int128 v14; // [rsp+20h] [rbp-28h]

  v3 = *a1;
  v4 = *a2;
  v14 = 0uLL;
  v6 = 0;
  v12 = v3;
  v13 = v4;
  do
  {
    v7 = (unsigned __int64)(unsigned int)(4 * v6) >> 6;
    v8 = (4 * v6) & 0x3F;
    v9 = *((_QWORD *)&v12 + v7) >> v8;
    if ( (v9 & 4) == 0 && ((*((_QWORD *)&v13 + v7) >> v8) & 3) != 0 )
      LOBYTE(v9) = *((_QWORD *)&v13 + v7) >> v8;
    result = *((_QWORD *)&v14 + v7) & ~(15LL << v8);
    ++v6;
    *((_QWORD *)&v14 + v7) = result | ((unsigned __int64)(v9 & 0xF) << v8);
  }
  while ( v6 < 32 );
  *a3 = v14;
  return result;
}
