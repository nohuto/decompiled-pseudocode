/*
 * XREFs of ExpSaAllocatorInitialize @ 0x140190014
 * Callers:
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ExpSaAllocatorInitialize(_QWORD *a1, char a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x48uLL);
  if ( (a2 & 1) != 0 )
    *((_DWORD *)a1 + 16) = 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  result = 0LL;
  *a1 = 0LL;
  a1[5] = 0LL;
  *((_DWORD *)a1 + 12) = 0;
  a1[7] = 0LL;
  *((_DWORD *)a1 + 13) = 4;
  return result;
}
