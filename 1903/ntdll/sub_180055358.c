/*
 * XREFs of sub_180055358 @ 0x180055358
 * Callers:
 *     sub_18005532C @ 0x18005532C (sub_18005532C.c)
 *     sub_1800F74B0 @ 0x1800F74B0 (sub_1800F74B0.c)
 * Callees:
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     bsearch_s @ 0x18008F320 (bsearch_s.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

char __fastcall sub_180055358(PVOID BaseAddress, _BYTE *a2)
{
  int v4; // ebx
  _DWORD *v5; // rax
  unsigned int v6; // ecx
  rsize_t v7; // r8
  const void *v8; // rdx
  unsigned int v9; // ecx
  _BYTE *v10; // rax
  char v11; // cl
  char result; // al
  int v13[2]; // [rsp+30h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-28h]
  _QWORD Key[2]; // [rsp+48h] [rbp-20h] BYREF

  Key[0] = 0LL;
  Key[1] = 0LL;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryImageInformation, v13, 0x18uLL, 0LL) < 0 )
    return 0;
  v4 = v13[0];
  if ( !*(_QWORD *)v13 )
    return 0;
  if ( (v14 & 2) != 0 )
    return 0;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( (unsigned __int64)BaseAddress < *(_QWORD *)v13 )
    return 0;
  v5 = sub_18001F450(*(void **)v13);
  if ( !v5 )
    return 0;
  if ( *v5 < 0x94u )
    return 0;
  v6 = v5[36];
  v7 = (unsigned int)v5[34];
  if ( (v6 & 0x400) == 0 )
    return 0;
  v8 = (const void *)*((_QWORD *)v5 + 16);
  if ( !v8 )
    return 0;
  v9 = (v6 >> 28) + 4;
  if ( v9 <= 4 )
    return 0;
  LODWORD(Key[0]) = (_DWORD)BaseAddress - v4;
  v10 = bsearch_s(Key, v8, v7, v9, sub_180085100, 0LL);
  if ( !v10 )
    return 0;
  v11 = v10[4];
  result = 1;
  *a2 = v11;
  return result;
}
