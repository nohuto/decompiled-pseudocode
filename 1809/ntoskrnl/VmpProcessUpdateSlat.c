/*
 * XREFs of VmpProcessUpdateSlat @ 0x14030D44C
 * Callers:
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlMapSparseGpaPages @ 0x14032C320 (HvlMapSparseGpaPages.c)
 */

__int64 __fastcall VmpProcessUpdateSlat(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v5; // r11d
  unsigned __int64 v8; // r8
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  int v12; // edx
  int v13; // ecx
  int v14; // ebp
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _BYTE v18[16]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v19[32]; // [rsp+40h] [rbp-118h] BYREF

  v4 = 0;
  v5 = 0;
  v8 = a2 + 48LL * a3;
  if ( a2 < v8 )
  {
    v9 = (unsigned __int64 *)(a2 + 32);
    v10 = (v8 - a2 - 1) / 0x30 + 1;
    do
    {
      v11 = *v9;
      if ( (*v9 & 0x80000000000000LL) == 0 )
      {
        v12 = (v11 >> 51) & 2 | 0xD;
        if ( (v11 & 0x20000000000000LL) == 0 )
          v12 = (v11 >> 51) & 2 | 1;
        v13 = v12 | 0x4000;
        if ( (*v9 & 0x40000000000000LL) == 0 )
          v13 = v12;
        v14 = v13 | 0x20000;
        if ( a4 )
          v14 = v13;
        if ( v5 != v14 || v4 == 16 )
        {
          if ( v4 )
          {
            HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), v5, v4, (unsigned int)v19, (__int64)v18);
            v11 = *v9;
            v4 = 0;
          }
          v5 = v14;
        }
        v15 = 2LL * v4;
        v16 = v9[1];
        ++v4;
        v19[v15] = v11 & 0xFFFFFFFFFFFFFLL;
        v19[v15 + 1] = v16;
      }
      v9 += 6;
      --v10;
    }
    while ( v10 );
    if ( v4 )
      HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), v5, v4, (unsigned int)v19, (__int64)v18);
  }
  return 0LL;
}
