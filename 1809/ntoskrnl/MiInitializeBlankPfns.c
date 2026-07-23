/*
 * XREFs of MiInitializeBlankPfns @ 0x1409BC160
 * Callers:
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiInitializeBlankPfns(__int64 *a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r11
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  _QWORD v20[6]; // [rsp+20h] [rbp-38h] BYREF

  v5 = a2;
  v7 = a3;
  memset(v20, 0, sizeof(v20));
  v8 = 0LL;
  if ( (_DWORD)v5 == -1 )
    v9 = 0LL;
  else
    v9 = MiLargePageContainingFrames[v5] & 0xFFFFFFFFFLL;
  BYTE2(v20[4]) ^= (BYTE2(v20[4]) ^ a5) & 7;
  BYTE2(v20[4]) = BYTE2(v20[4]) & 0x3F | 0x40;
  v20[5] = v9 & 0x3FFFFFFFFFFFFFFLL | (v7 << 58);
  if ( !a5 )
    v8 = 4294967293LL;
  result = MiUpdatePageFileHighInPte(v20[2], v8);
  v12 = result;
  v14 = &a1[6 * v13];
  if ( a1 != v14 )
  {
    v15 = v20[4];
    v16 = a1 + 2;
    v17 = v20[3];
    v18 = v20[1];
    v19 = v20[0];
    do
    {
      *(v16 - 2) = v19;
      *(v16 - 1) = v18;
      *v16 = v12;
      v16[1] = v17;
      v16[2] = v15;
      v16[3] = v11;
      v16 += 6;
      result = (__int64)(v16 - 2);
    }
    while ( v16 - 2 != v14 );
  }
  return result;
}
