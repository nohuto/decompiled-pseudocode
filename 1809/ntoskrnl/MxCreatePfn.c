/*
 * XREFs of MxCreatePfn @ 0x1409C1310
 * Callers:
 *     MxCreatePfns @ 0x1409C108C (MxCreatePfns.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiPageToChannel @ 0x14009CF2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MxCreatePfn(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 result; // rax

  v7 = 48 * a1 - 0x58000000000LL;
  if ( a4 == 1 )
    memset((void *)(48 * a1 - 0x58000000000LL), 0, 0x30uLL);
  v8 = a3 ^ *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 8) = a2;
  *(_WORD *)(v7 + 32) = 1;
  *(_QWORD *)(v7 + 40) ^= v8 & 0xFFFFFFFFFLL;
  LOBYTE(v8) = *(_BYTE *)(v7 + 34) & 0xFE;
  *(_QWORD *)(v7 + 24) ^= (*(_QWORD *)(v7 + 24) ^ (*(_QWORD *)(v7 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(v7 + 34) = v8 | 6;
  *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0x3F | 0x40;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  *(_BYTE *)(v7 + 34) |= 0x10u;
  *(_QWORD *)(v7 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(a1, 0) << 58) | *(_QWORD *)(v7 + 40) & 0x3FFFFFFFFFFFFFFLL;
  v9 = (MiPageToChannel(a1) & 3) << 36;
  result = 0x20000000000000LL;
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 40) & 0xFFFFFFCFFFFFFFFFuLL | v9 | 0x20000000000000LL;
  return result;
}
