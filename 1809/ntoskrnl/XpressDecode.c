/*
 * XREFs of XpressDecode @ 0x14032CAB4
 * Callers:
 *     CMFReadCompressedSegment @ 0x1408DA2BC (CMFReadCompressedSegment.c)
 * Callees:
 *     do_decode @ 0x14032CC34 (do_decode.c)
 */

__int64 __fastcall XpressDecode(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v6 = a4;
  if ( !a1 || *(_DWORD *)(a1 + 104) != 903790814 )
    return 0xFFFFFFFFLL;
  if ( a6 == a3 )
    return (unsigned int)v6;
  if ( a3 < a6 || a6 < 0 || a3 <= 8 || a6 < 8 )
    return 0xFFFFFFFFLL;
  if ( a3 > 0x10000 || (int)v6 <= 0 )
    return (unsigned int)v6;
  v9 = a3;
  v10 = a2 + v6;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = a2 + v9;
  v11 = a5 + a6;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 72) = v11 - 3;
  *(_QWORD *)(a1 + 64) = v11 - 1;
  *(_QWORD *)(a1 + 80) = v11 - 1;
  *(_QWORD *)(a1 + 16) = a2;
  if ( (unsigned __int64)(v10 - a2) > 0x108 )
    *(_QWORD *)(a1 + 16) = v10 - 264;
  v12 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v12;
  if ( (unsigned __int64)(v11 - v12) > 0xE8 )
    *(_QWORD *)(a1 + 56) = v11 - 232;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 48) = a5;
  do_decode(a1);
  if ( *(_DWORD *)(a1 + 96)
    && (v13 = *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) <= v13)
    && (v13 != *(_QWORD *)a1 || *(_DWORD *)(a1 + 100)) )
  {
    return (unsigned int)v6;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
